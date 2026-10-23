#!/usr/bin/env python3
"""Formatting of T3SDK's own C++ (the loader, the public headers, the mods, the mod template).

    python tools/sdk_style.py                 # list the files that need formatting; exit 1 if any
    python tools/sdk_style.py --fix           # format them in place
    python tools/sdk_style.py [--fix] FILE... # only these files
    python tools/sdk_style.py --comments [FILE...]  # control blocks with no comment above (not enforced)

Two passes: clang-format with sdk/.clang-format, then the blank lines clang-format cannot place
(docs/cpp-style.md, "Inside a function"): a control block (if, for, while, switch, do, __try) has
a blank line before it and after its closing brace, unless it opens or closes the block around
it. Comment lines right above a block stay with it; the blank line goes above them.

The matching decompilation (src/, include/) is not touched: it keeps its own layout. The rules no
tool checks (names, comments) are in docs/cpp-style.md too.
"""

import argparse
import os
import re
import shutil
import subprocess
import sys
from pathlib import Path
from typing import List, Optional

ROOT = Path(__file__).resolve().parent.parent
STYLE = ROOT / "sdk" / ".clang-format"
TREES = [ROOT / "sdk" / "loader", ROOT / "sdk" / "include", ROOT / "sdk" / "mods", ROOT / "templates" / "mod" / "src"]
SUFFIXES = {".c", ".cpp", ".h", ".hpp"}

# A statement that opens a control block, and a line that goes on with one (`} else {`).
CONTROL = re.compile(r"^\s*(?:if|for|while|switch|do|__try|try)\b")
CONTINUES = re.compile(r"^\s*\}\s*(?:else|__except|__finally|catch|while)\b")
# Lines after which a block may start without a blank line: the block's own opening, a label.
OPENS = re.compile(r"(?:\{|:)$")


def clang_format() -> Optional[str]:
    """$CLANG_FORMAT, clang-format on PATH, or LLVM's usual install folders."""
    candidates = [os.environ.get("CLANG_FORMAT"), shutil.which("clang-format")]
    candidates += [str(Path(p) / "clang-format.exe") for p in (
        os.path.expandvars(r"%ProgramFiles%\LLVM\bin"),
        os.path.expanduser(r"~\scoop\apps\llvm\current\bin"),
    )]
    return next((c for c in candidates if c and Path(c).is_file()), None)


def sources() -> List[Path]:
    return sorted(p for tree in TREES for p in tree.rglob("*") if p.suffix in SUFFIXES and p.is_file())


def code_of(line: str) -> str:
    """The line without string and character literals and without its // comment, for counting braces."""
    code = re.sub(r'"(?:\\.|[^"\\])*"', '""', line)
    code = re.sub(r"'(?:\\.|[^'\\])+'", "''", code)
    return code.split("//", 1)[0].strip()


def space_blocks(text: str) -> str:
    """Puts a blank line before each control block and after its closing brace (see the module comment)."""
    out: List[str] = []
    stack: List[bool] = []  # one entry per open brace: does it belong to a control block?
    pending = False  # a control statement has started; its `{` is still to come
    blank_after = False  # the previous line closed a control block

    for line in text.split("\n"):
        stripped = line.strip()
        code = code_of(stripped)
        continues = bool(CONTINUES.match(line))
        starts = bool(CONTROL.match(line)) and not continues

        if blank_after:
            blank_after = False
            ends_block = stripped.startswith("}") or re.match(r"(?:case\b|default\b|#)", stripped)
            if stripped and not ends_block and not continues:
                out.append("")

        if starts:
            # Comment lines right above the block belong to it: the blank line goes above them.
            top = len(out)
            while top > 0 and out[top - 1].strip().startswith("//"):
                top -= 1
            above = out[top - 1].strip() if top > 0 else ""
            if above and not OPENS.search(code_of(above)) and not above.startswith("#"):
                out.insert(top, "")

        out.append(line)
        if stripped.startswith("#"):
            continue

        if starts:
            pending = True
        closed_control = False
        for c in code:
            if c == "{":
                stack.append(pending or starts or continues)
                pending = False
                closed_control = False
            elif c == "}" and stack:
                closed_control = stack.pop()
        blank_after = closed_control

    return "\n".join(out)


def uncommented(text: str) -> List[int]:
    """Line numbers of control blocks with no comment right above them (docs/cpp-style.md, "Comments"),
    except a null check of what the line before assigned: `x = ...;` then `if (!x)`."""
    lines = text.split("\n")
    found = []
    for i, line in enumerate(lines):
        if not CONTROL.match(line) or CONTINUES.match(line):
            continue
        above = lines[i - 1].strip() if i > 0 else ""
        if above.startswith("//"):
            continue
        null_check = re.match(r"\s*if \(!?(\w+)\)", line)
        if null_check and re.search(rf"{null_check.group(1)}\s*=[^=]", above):
            continue
        found.append(i + 1)
    return found


def formatted(tool: str, path: Path) -> str:
    """The file as it should be: clang-format, then the blank lines around control blocks."""
    out = subprocess.run([tool, f"--style=file:{STYLE}", str(path)], check=True, capture_output=True).stdout
    return space_blocks(out.decode("utf-8"))


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--fix", action="store_true", help="format the files in place")
    parser.add_argument("--comments", action="store_true", help="list control blocks with no comment above them")
    parser.add_argument("files", nargs="*", type=Path, help="only these files (default: all of T3SDK's C++)")
    args = parser.parse_args()

    tool = clang_format()
    if not tool:
        sys.exit("clang-format not found: install LLVM, or set CLANG_FORMAT to its path")
    files = [f.resolve() for f in args.files] or sources()

    if args.comments:
        total = 0
        for f in files:
            for number in uncommented(f.read_text(encoding="utf-8")):
                print(f"{f.relative_to(ROOT).as_posix()}:{number}: control block without a comment")
                total += 1
        print(f"{total} control blocks without a comment")
        return

    changed = []
    for f in files:
        text = formatted(tool, f)
        if text.encode("utf-8") == f.read_bytes():
            continue
        if args.fix:
            f.write_bytes(text.encode("utf-8"))
        changed.append(f.relative_to(ROOT).as_posix())

    if args.fix:
        print(f"formatted {len(changed)} of {len(files)} files")
        return
    for f in changed:
        print(f"needs formatting: {f}")
    if changed:
        sys.exit(f"{len(changed)} of {len(files)} files need formatting: python tools/sdk_style.py --fix")
    print(f"{len(files)} files formatted")


if __name__ == "__main__":
    main()
