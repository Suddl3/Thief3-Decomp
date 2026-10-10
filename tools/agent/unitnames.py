#!/usr/bin/env python3
"""Lead only: name the units integrate.py calls Unsorted_<address> after the class most of their code is.

    python tools/agent/unitnames.py plan       # which units would take which names
    python tools/agent/unitnames.py apply      # rename them (git mv), in splits.txt and configure.py too
    python configure.py && ninja               # the report then lists the units by their new names

integrate.py puts the members of a class known only by a placeholder, and free functions, in
<Category>/Unsorted_<start>.cpp: one per chunk of the split, as the game compiled neighbours
together. A unit whose code is mostly one class's (75% of its bytes or more) takes the class's
name when the exe knows it as a class: a real name, or a placeholder named after its vtable
(Class_<table>), not one named after a single function. It becomes `<Class>.cpp`, or
`<Class>_2.cpp`, `<Class>_3.cpp`... in address order when the name is taken
(on a case-blind disk too). Only the name changes: the unit keeps its functions and its ranges,
and a new function in those ranges still goes to it. A placeholder class's unit attracts no
other member of the class (integrate.py routes those by address); a real class's unit takes the
class's new members, as integrate.py has always done with `<Class>.cpp`. Run it after an
integration: units integrate.py makes start out unsorted again.
"""

import argparse
import collections
import os
import re
import subprocess
import sys
from pathlib import Path
from typing import Dict, List, Tuple

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))

import integrate  # noqa: E402
from common import FUNCTION_MARKER, Project, atomic_write  # noqa: E402

UNSORTED = re.compile(r"^Unsorted_[0-9A-Fa-f]{8}(?:_\d+)?\.cpp$")
CLASS_OF = re.compile(r"^\?\?(?:[0-9]|_[A-Z])([A-Za-z_]\w*)@@|^\?[A-Za-z_]\w*@([A-Za-z_]\w*)@@")
SHARE = 0.75


def dominant(p: Project, path: Path, sizes: Dict[int, int]) -> Tuple[str, float, int]:
    """(class, its share of the unit's code bytes, the unit's first address); "" for free functions."""
    by_class: Dict[str, int] = collections.Counter()
    first = None
    for m in FUNCTION_MARKER.finditer(path.read_text(encoding="utf-8", errors="replace")):
        address = int(m.group(1), 16)
        first = address if first is None else min(first, address)
        c = CLASS_OF.match(m.group(2).strip())
        by_class[(c.group(1) or c.group(2)) if c else ""] += sizes.get(address, 1)
    if not by_class:
        return "", 0.0, 0
    cls, n = by_class.most_common(1)[0]
    return cls, n / sum(by_class.values()), first or 0


def plan(p: Project) -> List[Tuple[str, str]]:
    """[(unit, new unit)] relative to src/, in address order."""
    sizes = {s.address: s.size for s in p.functions}
    code_end = max(s.address + s.size for s in p.functions)

    def known(cls: str) -> bool:
        """A real name, or a placeholder named after a vtable (past the code): a class the exe knows as
        one, not the stand-in for one function's class."""
        m = re.match(r"^[A-Za-z]+_([0-9A-Fa-f]{8})$", cls)
        return m is None or int(m.group(1), 16) >= code_end

    taken = {x.name.lower() for x in (p.src_dir / "Game").glob("*.cpp")}
    picks = []
    for path in (p.src_dir / "Game").glob("*.cpp"):
        if not UNSORTED.match(path.name):
            continue
        cls, share, first = dominant(p, path, sizes)
        if cls and share >= SHARE and known(cls):
            picks.append((first, path.name, cls))
    out = []
    for _, name, cls in sorted(picks):
        new, n = f"{cls}.cpp", 1
        while new.lower() in taken:
            n += 1
            new = f"{cls}_{n}.cpp"
        taken.add(new.lower())
        out.append((f"Game/{name}", f"Game/{new}"))
    return out


def apply(p: Project, renames: List[Tuple[str, str]]) -> None:
    splits = p.splits_txt.read_text(encoding="utf-8")
    configure = (p.main / "configure.py").read_text(encoding="utf-8")
    for old, new in renames:
        splits, n = re.subn(rf"^{re.escape(old)}:$", f"{new}:", splits, flags=re.M)
        if n != 1:
            sys.exit(f"{old}: {n} splits.txt entries")
        configure = configure.replace(f'"{old}"', f'"{new}"')
        path = p.src_dir / old
        text = path.read_text(encoding="utf-8")
        if text.startswith(integrate.HEADER.format(unit=old)):
            text = integrate.HEADER.format(unit=new) + text[len(integrate.HEADER.format(unit=old)):]
        subprocess.run(["git", "mv", str(path), str(p.src_dir / new)], cwd=p.main, check=True)
        atomic_write(p.src_dir / new, text)
    atomic_write(p.splits_txt, splits)
    atomic_write(p.main / "configure.py", configure)


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("command", choices=("plan", "apply"))
    args = ap.parse_args()
    if os.environ.get("T3_AGENT_ID"):
        sys.exit("unitnames.py is the lead's")
    p = Project()
    renames = plan(p)
    classes = collections.Counter(Path(new).stem.rsplit("_", 1)[0] if re.search(r"_\d+$", Path(new).stem)
                                  else Path(new).stem for _, new in renames)
    print(f"{len(renames)} units take the name of their class ({len(classes)} classes)")
    if args.command == "plan":
        for old, new in renames[:40]:
            print(f"  {old} -> {new}")
        return
    apply(p, renames)
    print("renamed; next: python configure.py && ninja")


if __name__ == "__main__":
    main()
