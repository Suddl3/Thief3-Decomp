#!/usr/bin/env python3
"""Lead only: how much of the matched code reads as code, by the names it uses.

    python tools/agent/readability.py [--json FILE] [--history]

Byte-matching proves a function compiles to the game's code; it says nothing
about whether anyone can read it. This counts the names the decompilation uses:

  functions   the matched functions in src/ (their `// FUNCTION:` names): named,
              or a placeholder (`FUN_<address>`, a `VirtualN`/`UnknownN` slot,
              the constructor or destructor of a placeholder class); and
              whether the class a method belongs to is named
  classes     the headers in include/Game: named after the class, or a
              placeholder (a name that carries an address, `Class_10E4AC78`)
  fields      the members those headers declare: named, or `UnknownXX`/`PadXX`
  slots       the virtual functions they declare: named, or `VirtualN`

A function is readable when both it and its class are named. --json writes the
counts; --history also appends them, with the date, to
build/agent/readability-history.jsonl.
"""
import argparse
import datetime
import json
import re
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
from common import Project  # noqa: E402

FUNCTION_LINE = re.compile(r"^// FUNCTION: 0x[0-9A-Fa-f]{8} (\S+)", re.M)
ADDRESS_NAME = re.compile(r"[0-9A-Fa-f]{8}")  # a name that carries an address is a placeholder
PLACEHOLDER_METHOD = re.compile(r"^(?:FUN_[0-9A-Fa-f]{8}|Virtual\d+|Unknown\d+)$")
PLACEHOLDER_FIELD = re.compile(r"^(?:Unknown|Pad|Unk|Field)_?[0-9A-Fa-f]+$", re.I)
FIELD = re.compile(r"^\s+(?!virtual|typedef|friend|enum|class|struct|union|public|private|protected|return|using)"
                   r"[A-Za-z_][\w:<>,\*&\s]*?[\s\*&](\w+)(?:\[[^\]]*\])*\s*(?::\s*\d+)?;\s*(?://.*)?$", re.M)
VIRTUAL = re.compile(r"^\s+virtual\b[^;(]*?(~?\w+)\s*\(", re.M)


def placeholder_class(name: str) -> bool:
    return bool(ADDRESS_NAME.search(name))


def split_name(decorated: str):
    """(function name, class name or None, special) of an MSVC decorated name."""
    m = re.match(r"^\?\?(?:_[GE]|[01])(\w+)@@", decorated)  # ??0C, ??1C, ??_GC, ??_EC
    if m:
        return None, m.group(1), True
    m = re.match(r"^\?([^@?]+)@(?:([^@]+)@)*@", decorated)
    if m:
        parts = decorated[1:].split("@@", 1)[0].split("@")
        return parts[0], (parts[1] if len(parts) > 1 else None), False
    m = re.match(r"^(\w+)::(~?\w+)$", decorated)  # Class::Method, as symbols.txt writes hand names
    if m:
        return m.group(2), m.group(1), False
    return decorated.lstrip("_"), None, False


def measure(p: Project) -> dict:
    functions = {"total": 0, "named": 0, "placeholder": 0, "placeholder_class": 0, "readable": 0}
    for unit in sorted(p.src_dir.rglob("*.cpp")):
        for decorated in FUNCTION_LINE.findall(unit.read_text(encoding="utf-8", errors="replace")):
            name, cls, special = split_name(decorated)
            functions["total"] += 1
            name_ok = special or not PLACEHOLDER_METHOD.match(name or "")
            class_ok = cls is None or not placeholder_class(cls)
            functions["named" if name_ok and not (special and not class_ok) else "placeholder"] += 1
            functions["placeholder_class"] += cls is not None and not class_ok
            functions["readable"] += name_ok and class_ok
    classes = {"total": 0, "named": 0}
    fields = {"total": 0, "named": 0}
    slots = {"total": 0, "named": 0}
    for header in sorted((p.include_dir / "Game").glob("*.h")):
        classes["total"] += 1
        classes["named"] += not placeholder_class(header.stem)
        text = header.read_text(encoding="utf-8", errors="replace")
        for name in VIRTUAL.findall(text):
            slots["total"] += 1
            slots["named"] += not re.match(r"^Virtual\d+$", name)
        for name in FIELD.findall(text):
            fields["total"] += 1
            fields["named"] += not PLACEHOLDER_FIELD.match(name) and not placeholder_class(name)
    return {"functions": functions, "classes": classes, "fields": fields, "slots": slots}


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--json", help="write the counts to this file")
    ap.add_argument("--history", action="store_true", help="append them to build/agent/readability-history.jsonl")
    args = ap.parse_args()
    p = Project()
    m = measure(p)
    f = m["functions"]

    def pct(a: int, b: int) -> str:
        return f"{100 * a / b:5.1f}%" if b else "  n/a"

    print(f"functions  {f['total']:6}  readable {f['readable']:6} {pct(f['readable'], f['total'])}  "
          f"named {f['named']:6} {pct(f['named'], f['total'])}  on a placeholder class {f['placeholder_class']:6}")
    for key in ("classes", "fields", "slots"):
        c = m[key]
        print(f"{key:<10} {c['total']:6}  named {c['named']:6} {pct(c['named'], c['total'])}")
    if args.json:
        Path(args.json).write_text(json.dumps(m, indent=1) + "\n", encoding="utf-8")
    if args.history:
        entry = dict(m, date=datetime.date.today().isoformat())
        with open(p.state / "readability-history.jsonl", "a", encoding="utf-8") as out:
            out.write(json.dumps(entry) + "\n")


if __name__ == "__main__":
    main()
