#!/usr/bin/env python3
"""Lead only: apply config/<version>/classmap.txt, so each placeholder class takes the name of the class it is.

    python tools/agent/restructure.py apply [--units Game/A.cpp,...] [--jobs N]
    python configure.py && ninja        # the split takes the new names; compare the report

classmap.py finds which placeholder classes are one class (`Class_<vtable>`). For each unit naming
one, `apply`:

  1. renames the placeholders in the unit's code (the `// FUNCTION:` lines follow in step 4);
  2. merges the definitions of a class the unit now defines twice or more into one
     (classdecl.merge, the fields measured in the unit as it was), where the last of them was,
     with a forward declaration where the first was when the code between names the class;
  3. compiles the unit and compares every function with the current object: code bytes and
     relocations, each symbol of the old object paired with the new one whose demangled text is
     the old one's (or one of its address's other names') with the classes renamed. A class
     whose rename changes the unit's bytes keeps its placeholder in that unit (found by trying
     the classes one at a time);
  4. updates symbols.txt: an address takes the name its defining unit compiles to now, and its
     other names stay as aliases (tools/cc.py points a reference to an alias at the address's
     name), so a unit that kept a placeholder still pairs with the rest.
A placeholder whose new names would give two addresses one name (two constructors of one
signature), or whose class a package header declares (include/<Package>/), keeps its name; both
are reported. Run it after classmap.py write, on a built tree (the comparison reads build/).
"""

import argparse
import collections
import copy
import json
import os
import re
import sys
import tempfile
import threading
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
from typing import Callable, Dict, List, Optional, Set, Tuple

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))

import classdecl  # noqa: E402
import coff  # noqa: E402
import headers  # noqa: E402
import integrate  # noqa: E402
from common import FUNCTION_MARKER, Project, atomic_write, demangle, fmt_addr  # noqa: E402

PLACEHOLDER = re.compile(r"\b(?:Class|Struct|Object)_[0-9A-Fa-f]{8}\b")
FRAGMENT = re.compile(r"((?:Class|Struct|Object)_[0-9A-Fa-f]{8})@")
EH_NAME = re.compile(r"^(__[A-Za-z]+\$)(\?.+?)(\$\d+)?$")  # __ehfuncinfo$<function>, __unwindfunclet$<function>$0
CLASS_KEY = re.compile(r"\b(?:class|struct|union|enum) ")
SYMBOL_LINE = re.compile(r"^(\S+) = (\.\w+):0x([0-9A-Fa-f]+);(.*)$")
_demangling = threading.Lock()  # common.demangle's cache is one file


def package_classes(p: Project) -> Set[str]:
    """Classes a package header declares (include/<Package>/, not include/Game/)."""
    out: Set[str] = set()
    for h in p.include_dir.glob("*/*.h"):
        if h.parent.name != headers.GAME_DIR:
            out |= set(re.findall(r"^\s*(?:class|struct)\s+(?:\w+\s+)?([A-Za-z_]\w*)\s*[:{]",
                                  h.read_text(encoding="utf-8", errors="replace"), re.M))
    return out


def substitute(name: str, renames: Dict[str, str]) -> Optional[str]:
    """A decorated name with its placeholder fragments renamed, or None when a back-reference
    would be due (a class would appear twice) and only the compiler can tell the name."""
    frags = {f for f in FRAGMENT.findall(name) if f in renames}
    if not frags:
        return name
    new = name
    for f in frags:
        new = new.replace(f + "@", renames[f] + "@")
    for t in {renames[f] for f in frags}:
        if new.count(t + "@") > 1:
            return None
    return new


def collisions(p: Project, mapping: Dict[str, str]) -> Dict[str, str]:
    """{placeholder: why} for renames that would give one name to two addresses."""
    taken = {s.name: s.address for s in p.symbols}
    predicted: Dict[str, Tuple[int, List[str]]] = {}
    bad: Dict[str, str] = {}
    for s in p.symbols:
        frags = sorted({f for f in FRAGMENT.findall(s.name) if f in mapping})
        if not frags:
            continue
        new = substitute(s.name, mapping) or s.name
        other = taken.get(new, s.address)
        if other == s.address and new in predicted and predicted[new][0] != s.address:
            other, frags = predicted[new][0], frags + predicted[new][1]
        if other != s.address:
            for f in frags:
                bad.setdefault(f, f"{new} would name {fmt_addr(s.address)} and {fmt_addr(other)}")
        predicted.setdefault(new, (s.address, frags))
    return bad


def own_bases(p: Project, mapping: Dict[str, str]) -> Dict[str, str]:
    """{placeholder: why} for renames that would make a class its own base, as some unit
    declares the classes: the map took a base's method for the derived class's, or the other
    way round."""
    head = re.compile(r"^\s*(?:class|struct)\s+([A-Za-z_]\w*)\s*:\s*([^{;]*)\{", re.M)
    bad: Dict[str, str] = {}
    for path in (p.src_dir / headers.GAME_DIR).glob("*.cpp"):
        for m in head.finditer(path.read_text(encoding="utf-8", errors="replace")):
            name = m.group(1)
            for base in classdecl.IDENT.findall(m.group(2)):
                if base in ("public", "private", "protected", "virtual"):
                    continue
                if mapping.get(name, name) == mapping.get(base, base) and (name in mapping or base in mapping):
                    for n in (name, base):
                        if n in mapping:
                            bad[n] = f"{name} derives from {base}: one class by the map"
    return bad


def renamer(renames: Dict[str, str], keep_markers: bool = True) -> Callable[[str], str]:
    """Rename whole identifiers; `// FUNCTION:` lines (decorated names) stay."""
    if not renames:
        return lambda text: text
    pattern = re.compile(r"\b(" + "|".join(sorted(map(re.escape, renames), key=len, reverse=True)) + r")\b")

    def apply(text: str) -> str:
        if not keep_markers:
            return pattern.sub(lambda m: renames[m.group(1)], text)
        return "".join(line if FUNCTION_MARKER.match(line) else pattern.sub(lambda m: renames[m.group(1)], line)
                       for line in text.splitlines(keepends=True))
    return apply


def renamed(d: classdecl.ClassDecl, rename: Callable[[str], str]) -> classdecl.ClassDecl:
    e = copy.deepcopy(d)
    e.name, e.bases, e.text = rename(e.name), rename(e.bases), rename(e.text)
    for m in e.members:
        m.name, m.key, m.text, m.type = rename(m.name), rename(m.key), rename(m.text), rename(m.type)
    return e


def transform(source: str, u: headers.UnitDecls, renames: Dict[str, str]) -> str:
    """The unit with `renames` applied, each class it now defines twice merged into one definition
    (classdecl.Conflict when a merge fails)."""
    rename = renamer(renames)
    items = [rename(i) for i in u.items]
    groups: Dict[str, List[Tuple[int, classdecl.ClassDecl]]] = collections.defaultdict(list)
    for name, (i, d) in u.classes.items():
        groups[renames.get(name, name)].append((i, d))
    for target, defs in groups.items():
        if len(defs) < 2:
            continue
        decls = [renamed(d, rename) for _, d in defs]
        if any(d.size < 0 or any(f.offset < 0 for f in d.fields()) for d in decls):
            raise classdecl.Conflict(f"{target}: its definitions could not be measured")
        merged = classdecl.merge(decls)
        merged.kind = collections.Counter(d.kind for d in decls).most_common(1)[0][0]
        at = sorted(i for i, _ in defs)
        first, last = at[0], at[-1]
        named_between = any(re.search(rf"\b{target}\b", items[k]) for k in range(first + 1, last) if k not in at)
        for k in at:
            items[k] = ""
        items[last] = classdecl.write(merged)
        if named_between:
            items[first] = f"{merged.kind} {target};\n"
    blocks = {a: rename(b) for a, b in u.blocks.items()}
    return integrate.compose(source, [i for i in items if i.strip()], blocks)


# -- pairing old and new objects -----------------------------------------------------------
def readable(p: Project, names: Set[str]) -> Dict[str, str]:
    """name -> its demangled text without class keys (an EH table or funclet: its function's, wrapped)."""
    parts = {}
    for n in names:
        m = EH_NAME.match(n)
        parts[n] = (m.group(1), m.group(2), m.group(3) or "") if m else ("", n, "")
    with _demangling:
        texts = demangle(p, sorted({b for _, b, _ in parts.values() if b.startswith("?")}))
    return {n: pre + CLASS_KEY.sub("", texts.get(b) or b) + suf for n, (pre, b, suf) in parts.items()}


def pair(p: Project, old: coff.Coff, new: coff.Coff, renames: Dict[str, str],
         names_of: Dict[str, List[str]]) -> Tuple[Dict[str, str], List[str]]:
    """({old name: new name} for every symbol of `old`, the old names nothing in `new` pairs with)."""
    def names(obj: coff.Coff) -> Set[str]:
        return {s.name for s in obj.symbols if not s.is_section and not s.name.startswith("$")}
    olds, news = names(old), names(new)
    out = {n: n for n in olds & news}
    lost, fresh = olds - news, news - olds
    if not lost:
        return out, []
    rename = renamer(renames, keep_markers=False)
    texts = readable(p, fresh | lost | {x for n in lost for x in names_of.get(n, [n])})
    by_text: Dict[str, Set[str]] = collections.defaultdict(set)
    for n in fresh:
        by_text[texts[n]].add(n)
    unpaired = []
    for n in sorted(lost):
        found = set(by_text.get(rename(texts[n]), ()))
        if len(found) != 1:  # the unit compiles to another name of the address (cc.py made it this one)
            found = {m for x in names_of.get(n, [n]) for m in by_text.get(rename(texts[x]), ())}
        if len(found) == 1:
            out[n] = found.pop()
        else:
            unpaired.append(n)
    return out, unpaired


def compare(old: Path, new: Path, names: Dict[str, str]) -> Optional[str]:
    """None when each function of `old` is in `new` under its paired name with the same code and
    relocations (their targets paired too), else the first difference."""
    def mapped(t):
        if isinstance(t, tuple):
            return (t[0], t[1], tuple((o, ty, mapped(x)) for o, ty, x in t[2]))
        return names.get(t, t)
    a, b = headers.code_of(coff.Coff.load(old)), headers.code_of(coff.Coff.load(new))
    for name, (data, relocs) in a.items():
        other = names.get(name, name)
        if other not in b:
            return f"{name} is gone"
        if b[other][0] != data:
            return f"{name}: code differs"
        if b[other][1] != tuple((o, ty, mapped(t)) for o, ty, t in relocs):
            return f"{name}: references differ"
    return None


# -- a unit ---------------------------------------------------------------------------------
def process(p: Project, source: str, mapping: Dict[str, str], excluded: Set[str],
            names_of: Dict[str, List[str]], work: Path) -> Optional[dict]:
    """The unit renamed as far as its bytes allow: {source, text, names (old -> new, changed only),
    kept: {placeholder: why}}; None when it names no mapped placeholder."""
    path = p.src_dir / source
    text = path.read_text(encoding="utf-8")
    code = "".join(l for l in text.splitlines(keepends=True) if not FUNCTION_MARKER.match(l))
    present = {n for n in set(PLACEHOLDER.findall(code)) if n in mapping and n not in excluded}
    if not present:
        return None
    old_obj = p.main / "build" / p.version / "src" / source.replace(".cpp", ".obj")
    if not old_obj.is_file():
        return {"source": source, "text": None, "names": {}, "kept": {n: "no object to compare" for n in present}}
    u = headers.UnitDecls(source, text)
    unit_work = work / source.replace("/", "_")
    unit_work.mkdir(parents=True, exist_ok=True)
    state = {"measured": None}
    old = coff.Coff.load(old_obj)

    def attempt(rs: Set[str], tag: str) -> Tuple[Optional[Tuple[str, Dict[str, str]]], str]:
        renames = {n: mapping[n] for n in rs}
        targets = collections.Counter(renames.get(n, n) for n in u.classes)
        if any(c > 1 for c in targets.values()) and state["measured"] is None:
            state["measured"] = headers.measure(p, u, unit_work) or ""
        try:
            new_text = transform(source, u, renames)
        except classdecl.Conflict as e:
            return None, f"merge: {e}"
        out = unit_work / tag / Path(source).name
        out.parent.mkdir(parents=True, exist_ok=True)
        out.write_text(new_text, encoding="utf-8")
        obj = out.with_suffix(".obj")
        ok, log = p.compile(out, obj, headers.cflags(p, source))
        if not ok:
            first = next((l for l in log.splitlines() if "error" in l), log.splitlines()[0] if log else "")
            return None, "does not compile: " + re.sub(r"^.*?\(\d+\) : ", "", first.strip())[:200]
        names, unpaired = pair(p, old, coff.Coff.load(obj), renames, names_of)
        if unpaired:
            return None, f"{unpaired[0]} has no counterpart"
        diff = compare(old_obj, obj, names)
        if diff:
            return None, diff
        return (new_text, {k: v for k, v in names.items() if k != v}), ""

    result, why = attempt(present, "all")
    kept: Dict[str, str] = {}
    if result is None:
        groups: Dict[str, Set[str]] = collections.defaultdict(set)
        for n in present:
            groups[mapping[n]].add(n)
        good = []
        for target, members in sorted(groups.items()):
            r, w = attempt(members, f"one_{target}")
            if r is None:
                for n in members:
                    kept[n] = w
            else:
                good.append(target)
        while good:
            rs = set().union(*(groups[t] for t in good))
            result, why = attempt(rs, "good")
            if result is not None:
                break
            dropped = good.pop()
            for n in groups[dropped]:
                kept[n] = f"with the others: {why}"
        if not good:
            result = None
    return {"source": source, "text": result[0] if result else None, "names": result[1] if result else {},
            "kept": kept}


# -- symbols.txt ----------------------------------------------------------------------------
def update_symbols(p: Project, results: List[dict],
                   mapping: Dict[str, str]) -> Tuple[str, Dict[str, str], Dict[str, str]]:
    """(symbols.txt text, {unit: its text with the `// FUNCTION:` lines renamed}, conflicts {placeholder: why})."""
    lines = p.symbols_txt.read_text(encoding="utf-8").splitlines()
    where: Dict[str, int] = {}                 # name -> address
    primary_line: Dict[int, int] = {}          # address -> line index of its own name
    alias_lines: Dict[int, List[int]] = collections.defaultdict(list)
    for i, line in enumerate(lines):
        m = SYMBOL_LINE.match(line)
        if not m:
            continue
        address = int(m.group(3), 16)
        where.setdefault(m.group(1), address)
        if "type:alias" in m.group(4):
            alias_lines[address].append(i)
        else:
            primary_line.setdefault(address, i)
    own: Dict[int, str] = {}                   # address -> its new name
    more: Dict[int, Set[str]] = collections.defaultdict(set)
    origin: Dict[str, Set[str]] = collections.defaultdict(set)  # new name -> the placeholders behind it
    units: Dict[str, str] = {}

    def behind(name: str) -> Set[str]:
        return {f for f in FRAGMENT.findall(name) if f in mapping}

    for r in results:
        if not r or not r["text"]:
            continue
        text = r["text"]
        for old_name, new_name in r["names"].items():
            if old_name in where:
                more[where[old_name]].add(new_name)
                origin[new_name] |= behind(old_name)
        # the unit's own functions: their `// FUNCTION:` lines, and the name of their address
        edits = []
        for m in FUNCTION_MARKER.finditer(text):
            address = int(m.group(1), 16)
            current = lines[primary_line[address]].split(" ", 1)[0] if address in primary_line else ""
            compiled = m.group(2).strip()
            new_compiled = r["names"].get(current) if current else None
            if not new_compiled:
                continue
            if compiled == current:   # the unit compiles to the address's own name: the new one replaces it
                own[address] = new_compiled
            else:                     # it compiles to an alias: the own name follows by substitution
                sub = substitute(current, mapping)
                if sub and sub != current:
                    own[address] = sub
                    origin[sub] |= behind(current)
            if compiled:
                edits.append((m.start(2), m.end(2), " " + new_compiled))
        for start, end, new in reversed(edits):
            text = text[:start] + new + text[end:]
        units[r["source"]] = text
    # a name may stand for one address only
    conflicts: Dict[str, str] = {}
    claimed: Dict[str, int] = {}
    for address in sorted(set(own) | set(more)):
        for name in ({own[address]} if address in own else set()) | more[address]:
            other = where.get(name, claimed.get(name, address))
            if other != address:
                for f in origin.get(name) or {"?"}:
                    conflicts[f] = f"{name} would name {fmt_addr(address)} and {fmt_addr(other)}"
            claimed.setdefault(name, address)
    if conflicts:
        return "", {}, conflicts
    # rewrite: the address's own line takes its new name, every other name of it is an alias
    inserts: Dict[int, List[str]] = collections.defaultdict(list)
    drop: Set[int] = set()
    for address in sorted(set(own) | set(more)):
        if address not in primary_line:
            continue
        i = primary_line[address]
        m = SYMBOL_LINE.match(lines[i])
        current, section = m.group(1), m.group(2)
        aliases = {SYMBOL_LINE.match(lines[k]).group(1): k for k in alias_lines.get(address, [])}
        name = own.get(address, current)
        if name != current:
            lines[i] = name + lines[i][len(current):]
            if name in aliases:
                drop.add(aliases[name])
        wanted = ({current} | more[address]) - {name} - set(aliases)
        for alias in sorted(wanted):
            inserts[max([i] + alias_lines.get(address, []))].append(
                f"{alias} = {section}:{fmt_addr(address)}; // type:alias")
    out = []
    for i, line in enumerate(lines):
        if i not in drop:
            out.append(line)
        out.extend(inserts.get(i, []))
    return "\n".join(out) + "\n", units, conflicts


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("command", choices=("apply",))
    ap.add_argument("--units", default="", help="only these units (comma-separated, relative to src/)")
    ap.add_argument("--jobs", type=int, default=os.cpu_count() or 8)
    ap.add_argument("--dry-run", action="store_true", help="write the results under build/agent/tmp/ only")
    args = ap.parse_args()
    if os.environ.get("T3_AGENT_ID"):
        sys.exit("restructure.py is the lead's")
    p = Project()
    mapping = p.class_map()
    packaged = package_classes(p)
    checks = {"class of a package header": {n: f"{t} is declared by a package header"
                                            for n, t in mapping.items() if t in packaged},
              "a name for two addresses": collisions(p, mapping),
              "a class its own base": own_bases(p, mapping)}
    excluded: Dict[str, str] = {}
    for found in checks.values():
        excluded.update(found)
    print(f"{len(mapping)} placeholders mapped; {len(excluded)} keep their names ("
          + ", ".join(f"{len(v)} {k}" for k, v in checks.items()) + ")")
    names_of: Dict[str, List[str]] = {}
    by_address: Dict[int, List[str]] = collections.defaultdict(list)
    for s in p.symbols:
        by_address[s.address].append(s.name)
    for s in p.symbols:
        names_of[s.name] = by_address[s.address]
    readable(p, {n for n in names_of if FRAGMENT.search(n)})  # warm the demangling cache in one go
    sources = args.units.split(",") if args.units else sorted(
        f"{headers.GAME_DIR}/{x.name}" for x in (p.src_dir / headers.GAME_DIR).glob("*.cpp"))
    work = Path(tempfile.mkdtemp(prefix="t3restructure-", dir=p.state_dir("tmp")))
    results: Dict[str, Optional[dict]] = {}
    todo = sources
    for _ in range(3):
        with ThreadPoolExecutor(args.jobs) as pool:
            for source, r in zip(todo, pool.map(lambda s: process(p, s, mapping, set(excluded), names_of, work), todo)):
                results[source] = r
        symbols_text, units, conflicts = update_symbols(p, [r for r in results.values() if r], mapping)
        if not conflicts:
            break
        print(f"{len(conflicts)} placeholders give a name twice; again without them")
        excluded.update(conflicts)
        todo = [s for s, r in results.items() if r and set(conflicts) & set(PLACEHOLDER.findall(
            (p.src_dir / s).read_text(encoding="utf-8")))]
    else:
        sys.exit(f"still conflicting: {sorted(conflicts)[:5]}")
    out_src, out_symbols = p.src_dir, p.symbols_txt
    if args.dry_run:
        out_src, out_symbols = work / "src", work / "symbols.txt"
        print(f"dry run: {out_src}, {out_symbols}")
    for source, text in units.items():
        atomic_write(out_src / source, text)
    atomic_write(out_symbols, symbols_text)
    kept = collections.Counter()
    reasons = collections.Counter()
    renamed_units = 0
    for r in results.values():
        if not r:
            continue
        renamed_units += bool(r["text"])
        for n, why in r["kept"].items():
            kept[n] += 1
            reasons[re.sub(r"[A-Z][a-z]+_[0-9A-Fa-f]{8}\w*|\?\S+|0x[0-9A-Fa-f]+|'[^']*'", "#", why)[:80]] += 1
    report = {"excluded": excluded, "kept": {s: r["kept"] for s, r in results.items() if r and r["kept"]}}
    (p.state / "restructure-report.json").write_text(json.dumps(report, indent=1) + "\n", encoding="utf-8")
    print(f"{renamed_units} units renamed; {sum(kept.values())} renames left out in "
          f"{sum(1 for r in results.values() if r and r['kept'])} units")
    for why, n in reasons.most_common(10):
        print(f"  {n:5} {why}")
    print("next: python configure.py && ninja, then compare the report")


if __name__ == "__main__":
    main()
