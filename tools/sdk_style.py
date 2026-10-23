#!/usr/bin/env python3
"""Formatting of T3SDK's own C++ (the loader, the public headers, the mods, the mod template), by sdk/.clang-format.

    python tools/sdk_style.py          # list the files clang-format would change; exit 1 if any
    python tools/sdk_style.py --fix    # reformat them in place

The matching decompilation (src/, include/) is not touched: it keeps its own layout. The rules
clang-format cannot check (names, comments, spacing inside functions) are in docs/cpp-style.md.
"""

import argparse
import os
import shutil
import subprocess
import sys
from pathlib import Path
from typing import List, Optional

ROOT = Path(__file__).resolve().parent.parent
STYLE = ROOT / "sdk" / ".clang-format"
TREES = [ROOT / "sdk" / "loader", ROOT / "sdk" / "include", ROOT / "sdk" / "mods", ROOT / "templates" / "mod" / "src"]
SUFFIXES = {".c", ".cpp", ".h", ".hpp"}


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


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--fix", action="store_true", help="reformat the files in place")
    args = parser.parse_args()

    tool = clang_format()
    if not tool:
        sys.exit("clang-format not found: install LLVM, or set CLANG_FORMAT to its path")
    files = sources()
    if args.fix:
        subprocess.run([tool, f"--style=file:{STYLE}", "-i", *map(str, files)], check=True)
        print(f"formatted {len(files)} files")
        return

    changed = []
    for f in files:
        out = subprocess.run([tool, f"--style=file:{STYLE}", str(f)], check=True, capture_output=True).stdout
        if out != f.read_bytes():
            changed.append(f.relative_to(ROOT).as_posix())
    for f in changed:
        print(f"needs formatting: {f}")
    if changed:
        sys.exit(f"{len(changed)} of {len(files)} files need formatting: python tools/sdk_style.py --fix")
    print(f"{len(files)} files formatted")


if __name__ == "__main__":
    main()
