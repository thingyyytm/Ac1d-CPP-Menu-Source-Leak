#!/usr/bin/env python3
"""
clean.py — scrub Ghidra decompiler artifacts out of the stitched tree.

Operates in-place on every .c/.cc/.cpp/.h/.hpp under HoldableTemplate-master/.../cpp.

Transforms:
  * `std::__ndk1::` -> `std::`
  * ugly `basic_string_view<char,_std::__ndk1::char_traits<char>_>` -> `std::string_view`
  * ugly `basic_string<char,_std::__ndk1::char_traits<char>,_std::__ndk1::allocator<char>_>` -> `std::string`
  * `(**(code **)PTR_<Name>_<hex>)(args)` -> `orig_<Name>(args)`
  * `PTR_<Name>_<hex>` -> `orig_<Name>` (when used as address)
  * tpidr_el0 / __stack_chk_fail prelude+epilogue blocks dropped
  * `/* WARNING: ... */` ghidra warning banners dropped
  * `undefined4`/`undefined8`/`undefined1` -> `uint32_t`/`uint64_t`/`uint8_t`
  * `code *` -> `void *`  (ghidra's function-pointer placeholder)
  * `in_x8`, `unaff_x8` register vars -> dropped where safe (declarations)
  * `concatenate` operator synthetics folded away
  * trailing `/* WARNING: Removing unreachable block ... */` dropped
"""
import os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CPP  = os.path.join(ROOT, "HoldableTemplate-master", "app", "src", "main", "cpp")

NDK = r"std::__ndk1::"
BSV = r"basic_string_view<char,_std::__ndk1::char_traits<char>_>"
BSTR = r"basic_string<char,_std::__ndk1::char_traits<char>,_std::__ndk1::allocator<char>_>"

def clean(src: str) -> str:
    s = src

    # 1) obvious namespace & STL noise
    s = s.replace("std::__ndk1::", "std::")
    # ghidra leaves a bare "__ndk1" as a stand-in type when it couldn't resolve the templated inner — treat as opaque
    s = re.sub(r"\b__ndk1\b", "void", s)
    s = re.sub(r"basic_string_view<char,\s*_?std::char_traits<char>_?>", "std::string_view", s)
    s = re.sub(r"basic_string<char,\s*_?std::char_traits<char>,\s*_?std::allocator<char>_?>", "std::string", s)
    s = re.sub(r"basic_string_view<char,_std::char_traits<char>_>", "std::string_view", s)
    s = re.sub(r"basic_string<char,_std::char_traits<char>,_std::allocator<char>_>", "std::string", s)

    # 2) WARNING banners
    s = re.sub(r"^\s*/\*\s*WARNING:[^*]*\*/\s*\n", "", s, flags=re.M)

    # 3) ghidra undefined types
    s = re.sub(r"\bundefined8\b", "uint64_t", s)
    s = re.sub(r"\bundefined4\b", "uint32_t", s)
    s = re.sub(r"\bundefined2\b", "uint16_t", s)
    s = re.sub(r"\bundefined7\b", "uint64_t", s)
    s = re.sub(r"\bundefined5\b", "uint64_t", s)
    s = re.sub(r"\bundefined6\b", "uint64_t", s)
    s = re.sub(r"\bundefined3\b", "uint32_t", s)
    s = re.sub(r"\bundefined1?\b", "uint8_t",  s)
    # 1b) residual mangled names in comments carry __ndk1 - leave the mangled line but strip from live code only.
    # (comments start with // ; keep as-is for traceability)

    # 4) code * -> void (*)()  (keep as void* for simplicity)
    s = re.sub(r"\bcode\s*\*\s*\*", "void **", s)
    s = re.sub(r"\bcode\s*\*",       "void *",  s)

    # 5) PTR_<Name>_<hex> indirect-call pattern:
    #    (**(void **)PTR_Foo_012bd080)(a,b)   ->  orig_Foo(a,b)
    s = re.sub(
        r"\(\*\*\(void\s*\*\*\)\s*PTR_([A-Za-z_][A-Za-z0-9_]*?)_[0-9a-fA-F]+\)",
        r"orig_\1", s)
    #    plain `PTR_Foo_hex` reference  ->  orig_Foo
    s = re.sub(r"\bPTR_([A-Za-z_][A-Za-z0-9_]*?)_[0-9a-fA-F]{4,}\b", r"orig_\1", s)

    # 6) stack canary prelude / epilogue
    #    long lVar?; lVar? = tpidr_el0; local_?? = *(long *)(lVar?+0x28);
    s = re.sub(
        r"\n\s*long\s+\w+;\s*\n\s*\w+\s*=\s*tpidr_el0;\s*\n\s*\w+\s*=\s*\*\(long\s*\*\)\s*\(\s*\w+\s*\+\s*0x28\s*\);",
        "", s)
    #    tail: if (local_?? != *(long *)(... + 0x28)) __stack_chk_fail();
    s = re.sub(
        r"\n\s*if\s*\(\s*\w+\s*!=\s*\*\(long\s*\*\)\s*\(\s*\w+\s*\+\s*0x28\s*\)\s*\)\s*\{?\s*\n?\s*__stack_chk_fail\(\s*\);?\s*\}?\s*",
        "", s)
    s = re.sub(r"\n\s*return;\s*\n(\s*\})", r"\n\1", s)   # dangling empty return before }

    # 7) register-magic locals (declaration-only, unused by cleanup)
    s = re.sub(r"\n\s*(?:undefined8|uint64_t|long)\s+(?:in|unaff)_\w+;\n", "\n", s)

    # 8) DAT_<hex> / FUN_<hex> uniform rename
    s = re.sub(r"\bDAT_([0-9a-fA-F]{4,})\b", r"g_data_\1", s)
    s = re.sub(r"\bFUN_([0-9a-fA-F]{4,})\b", r"sub_\1",    s)

    # 9) collapse Ghidra "LAB_<hex>:" labels into comments (they rarely compile)
    s = re.sub(r"^(\s*)LAB_([0-9a-fA-F]+):", r"\1// label \2:", s, flags=re.M)

    # 10) ghidra "concatenate" synthetic calls
    s = re.sub(r"\bconcatenate\s*\(", "/*concat*/ (", s)

    # 12) drop now-dead `long lVar?;` / `uint64_t uVar?;` whose only use was the stack canary
    def drop_dead_locals(block: str) -> str:
        # for each simple `TYPE name;` decl, if `name` doesn't appear elsewhere in the function body, drop it
        return re.sub(
            r"\n(\s*)((?:long|uint64_t|uint32_t|uint8_t|int)\s+(\w+));",
            lambda m: "" if block.count(m.group(3)) <= 1 else m.group(0),
            block)
    # apply drop_dead_locals per {...} function body (simple heuristic)
    def per_func(m):
        body = m.group(0)
        return drop_dead_locals(body)
    s = re.sub(r"\{[^{}]*\}", per_func, s)

    # 13) blank-line squeeze
    s = re.sub(r"\n{3,}", "\n\n", s)

    return s

def walk():
    changed = 0
    for root, _, files in os.walk(CPP):
        for fn in files:
            if not fn.endswith((".c",".cc",".cpp",".h",".hpp")): continue
            p = os.path.join(root, fn)
            try:    orig = open(p, encoding="utf-8", errors="replace").read()
            except: continue
            new = clean(orig)
            if new != orig:
                open(p, "w", encoding="utf-8").write(new)
                changed += 1
    print(f"[clean] scrubbed {changed} files under {CPP}")

if __name__ == "__main__":
    walk()
