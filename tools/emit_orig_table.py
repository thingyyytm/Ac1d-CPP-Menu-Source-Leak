#!/usr/bin/env python3
"""
emit_orig_table.py — scan cleaned source for every `orig_<Name>(...)` call,
infer the arity from the call site, and emit Include/orig_table.h with each
trampoline declared as a properly-typed function pointer (void* args, void
return — safe default; cast at call site when a return value matters). Then
prepend `#include "orig_table.h"` to every file that references one.
"""
import os, re
from collections import defaultdict

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CPP  = os.path.join(ROOT, "HoldableTemplate-master", "app", "src", "main", "cpp")
INC  = os.path.join(CPP, "Include", "orig_table.h")

CALL = re.compile(r"\borig_([A-Za-z_][A-Za-z0-9_]*)\s*\(([^()]*)\)")
NAME = re.compile(r"\borig_([A-Za-z_][A-Za-z0-9_]*)\b")

def arity_of(args: str) -> int:
    args = args.strip()
    if not args: return 0
    # split by top-level commas (no nested parens inside the slice because CALL excludes them)
    return len([a for a in args.split(",") if a.strip()])

def scan():
    arities = defaultdict(set)
    bare    = set()
    files   = []
    for r, _, fs in os.walk(CPP):
        for fn in fs:
            if not fn.endswith((".c",".cc",".cpp",".h",".hpp")): continue
            p = os.path.join(r, fn)
            if p == INC: continue
            txt = open(p, encoding="utf-8", errors="replace").read()
            touched = False
            for m in CALL.finditer(txt):
                arities[m.group(1)].add(arity_of(m.group(2)))
                touched = True
            for m in NAME.finditer(txt):
                bare.add(m.group(1)); touched = True
            if touched: files.append(p)
    return arities, bare, files

def emit_header(arities, bare):
    os.makedirs(os.path.dirname(INC), exist_ok=True)
    with open(INC, "w", encoding="utf-8") as f:
        f.write("// Auto-generated: Dobby trampoline table.\n")
        f.write("// Each orig_<Name> is the saved original written by DobbyHook.\n")
        f.write("// Arity inferred from call sites; args/return are void* — cast if you need a typed return.\n")
        f.write("#pragma once\n\n#include <cstdint>\n\n")
        f.write("extern \"C\" {\n")
        for n in sorted(bare):
            ars = arities.get(n, {0})
            # pick the maximum observed arity (ghidra tends to pass stable arg count)
            a = max(ars)
            params = ", ".join(["void *"] * a) if a else "void"
            f.write(f"extern void (*orig_{n})({params});\n")
        f.write("}\n")

def prepend_include(files):
    line = '#include "orig_table.h"\n'
    for p in files:
        txt = open(p, encoding="utf-8", errors="replace").read()
        if '#include "orig_table.h"' in txt: continue
        lines = txt.splitlines(keepends=True)
        i = 0
        while i < len(lines) and (lines[i].startswith("//") or lines[i].strip() == ""):
            i += 1
        lines.insert(i, line)
        open(p, "w", encoding="utf-8").write("".join(lines))

if __name__ == "__main__":
    arities, bare, files = scan()
    emit_header(arities, bare)
    prepend_include(files)
    print(f"[+] {len(bare)} orig_ trampolines typed, prepended include into {len(files)} files")
