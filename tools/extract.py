#!/usr/bin/env python3
"""
extract.py — mine libacid.so for 1:1 reconstruction material.

Reads the .so with pyelftools, dumps every DW_TAG_subprogram with source
file + line + mangled name, writes:
  * recon_out/subprograms.json              — full index
  * recon_out/all_addrs.txt                 — unique addresses (hex)
  * recon_out/all_by_file.json              — addr -> source file grouping
  * recon_out/src/<original_path>.cpp       — per-source stubs

Usage:   python extract.py <path/to/libacid.so> <output_dir>
Deps:    pip install pyelftools   (c++filt or llvm-cxxfilt on PATH for names)
"""
import os, sys, json, re, shutil, subprocess
from collections import defaultdict

try:
    from elftools.elf.elffile import ELFFile
except ImportError:
    sys.exit("pip install pyelftools")

CXXFILT = os.environ.get("CXXFILT") or shutil.which("llvm-cxxfilt") or shutil.which("c++filt")
_proc = None
def demangle(name):
    global _proc
    if not CXXFILT: return name
    if _proc is None or _proc.poll() is not None:
        _proc = subprocess.Popen([CXXFILT], stdin=subprocess.PIPE, stdout=subprocess.PIPE,
                                 text=True, bufsize=1)
    _proc.stdin.write(name + "\n"); _proc.stdin.flush()
    return _proc.stdout.readline().rstrip("\n")

def val(die, attr):
    a = die.attributes.get(attr); return a.value if a else None

def sval(die, attr):
    v = val(die, attr)
    return v.decode(errors="replace") if isinstance(v, bytes) else v

def walk(dwarf):
    for cu in dwarf.iter_CUs():
        lp = dwarf.line_program_for_CU(cu)
        files = []
        if lp:
            for f in lp.header.file_entry:
                name = f.name.decode(errors="replace")
                d = ""
                if f.dir_index and f.dir_index <= len(lp.header.include_directory):
                    d = lp.header.include_directory[f.dir_index-1].decode(errors="replace")
                files.append(os.path.join(d, name) if d else name)
        for die in cu.iter_DIEs():
            if die.tag != "DW_TAG_subprogram": continue
            name = sval(die, "DW_AT_linkage_name") or sval(die, "DW_AT_name")
            low  = val(die, "DW_AT_low_pc")
            fidx = val(die, "DW_AT_decl_file")
            line = val(die, "DW_AT_decl_line")
            if not name or low is None: continue
            src = files[fidx-1] if fidx and fidx-1 < len(files) else "?"
            yield {"addr": low, "mangled": name, "demangled": demangle(name),
                   "file": src, "line": line}

def main():
    if len(sys.argv) != 3: sys.exit("usage: extract.py <libacid.so> <out_dir>")
    so, out = sys.argv[1], sys.argv[2]
    os.makedirs(out, exist_ok=True)
    with open(so, "rb") as f:
        elf = ELFFile(f)
        if not elf.has_dwarf_info(): sys.exit("no DWARF — rebuild with -g")
        subs = list(walk(elf.get_dwarf_info()))

    with open(os.path.join(out, "subprograms.json"), "w") as f:
        json.dump(subs, f, indent=2)

    mod = []
    for s in subs:
        f = (s.get("file") or "").replace("\\","/").lower()
        if s["addr"] in (0, None): continue
        if "holdabletemplate-master" not in f: continue
        if "/external/tinystl/" in f or "/external/utf8/" in f: continue
        mod.append(s)

    addrs = sorted({s["addr"] for s in mod})
    open(os.path.join(out, "all_addrs.txt"), "w").write("\n".join(f"{a:x}" for a in addrs))

    by = defaultdict(list)
    for s in mod: by[s["file"]].append(s)
    json.dump({k:v for k,v in by.items()}, open(os.path.join(out, "all_by_file.json"), "w"), indent=1)

    for path, fns in by.items():
        rel = re.sub(r"^[A-Za-z]:[\\/]", "", path.replace("\\","/")).lstrip("/")
        dst = os.path.join(out, "src", rel)
        os.makedirs(os.path.dirname(dst), exist_ok=True)
        with open(dst, "w") as f:
            f.write(f"// Reconstructed stub for {path}\n// {len(fns)} functions\n\n")
            for fn in sorted(fns, key=lambda x: x["line"] or 0):
                f.write(f"// 0x{fn['addr']:x}  line {fn['line']}\n")
                f.write(f"// {fn['demangled']}\n")
                f.write(f"// extern \"C\" void {fn['mangled']}();\n\n")
    print(f"[+] indexed {len(subs)} total, {len(mod)} project-owned, {len(by)} source files")
    print(f"[+] subprograms.json / all_addrs.txt / all_by_file.json / src/ under {out}")

if __name__ == "__main__":
    main()
