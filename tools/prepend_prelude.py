#!/usr/bin/env python3
"""Prepend `#include "recon_prelude.h"` to every mod cpp/h in the stitched tree,
replacing the earlier bare `#include "orig_table.h"` line (prelude pulls it in)."""
import os

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CPP  = os.path.join(ROOT, "HoldableTemplate-master", "app", "src", "main", "cpp")

OLD = '#include "orig_table.h"'
NEW = '#include "recon_prelude.h"'

# Skip vendored externs and the single-header libraries
SKIP = ("/extern/", "/Include/httplib.h", "/Include/json.hpp",
        "/Include/recon_prelude.h", "/Include/orig_table.h")

def should_skip(p: str) -> bool:
    pp = p.replace("\\","/")
    return any(k in pp for k in SKIP)

changed = 0
for r, _, fs in os.walk(CPP):
    for fn in fs:
        if not fn.endswith((".c",".cc",".cpp",".h",".hpp")): continue
        p = os.path.join(r, fn)
        if should_skip(p): continue
        txt = open(p, encoding="utf-8", errors="replace").read()
        if NEW in txt: continue
        if OLD in txt:
            txt = txt.replace(OLD, NEW, 1)
        else:
            # insert after leading // header comments / blank lines
            lines = txt.splitlines(keepends=True)
            i = 0
            while i < len(lines) and (lines[i].startswith("//") or lines[i].strip()==""):
                i += 1
            lines.insert(i, NEW + "\n")
            txt = "".join(lines)
        open(p, "w", encoding="utf-8").write(txt)
        changed += 1
print(f"[+] prelude installed into {changed} files")
