#!/usr/bin/env python3
"""
stitch.py — merge per-addr ghidra decomp outputs into per-source files.

Reads recon_out/mod_by_file.json (addr->source map) and recon_out/decomp/<hex>.c,
emits HoldableTemplate-master/app/src/main/cpp/<original_path> with every
mod function's decompiled body ordered by DWARF decl_line.
"""
import json, os, sys, re
from collections import defaultdict

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
BY_FILE = os.path.join(ROOT, "recon_out", "all_by_file.json")
DECOMP  = os.path.join(ROOT, "recon_out", "decomp")
DST_BASE = os.path.join(ROOT, "HoldableTemplate-master", "app", "src", "main", "cpp")

def map_src(path):
    """Pull just the Include/... or native-lib.cpp part out of the full DWARF path."""
    p = path.replace("\\", "/").lower()
    marker = "app/src/main/cpp/"
    i = p.find(marker)
    if i < 0: return None
    rel = path.replace("\\", "/")[i+len(marker):]
    return rel

def main():
    by = json.load(open(BY_FILE))
    written = 0
    for src, fns in by.items():
        rel = map_src(src)
        if not rel: continue
        fns = sorted(fns, key=lambda f: (f.get("line") or 0, f["addr"]))
        chunks = [f"// Reconstructed from libacid.so DWARF + Ghidra decomp",
                  f"// Original: {src}",
                  f"// Functions: {len(fns)}",
                  ""]
        for fn in fns:
            addr = fn["addr"]
            if not addr: continue
            dpath = os.path.join(DECOMP, f"{addr:x}.c")
            body = ""
            if os.path.exists(dpath):
                body = open(dpath, errors="replace").read()
            else:
                body = f"// no decomp for 0x{addr:x}\n"
            chunks.append(f"// ---- line {fn.get('line')}  addr 0x{addr:x} ----")
            chunks.append(f"// {fn['demangled']}")
            chunks.append(f"// mangled: {fn['mangled']}")
            chunks.append(body.rstrip() + "\n")
        dst = os.path.join(DST_BASE, rel)
        os.makedirs(os.path.dirname(dst), exist_ok=True)
        with open(dst, "w", encoding="utf-8") as f:
            f.write("\n".join(chunks))
        written += 1
        print(f"[+] {rel}  ({len(fns)} fns)")
    print(f"\n[done] stitched {written} files into {DST_BASE}")

if __name__ == "__main__":
    main()
