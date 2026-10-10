#!/usr/bin/env python3
"""Lead only: give each game class one declaration, in include/Game/<Class>.h, and move the units onto it.

    python tools/agent/headers.py stats                 # which classes get a header, and why the others do not
    python tools/agent/headers.py build [--classes A,B] # write the headers and move the units onto them
    python configure.py && ninja                        # then compare the report with the previous one

integrate.py copies each accepted function's declarations into its unit, so a class has one
declaration per unit using it, each with the members that unit's functions needed. `build`:

  1. takes the classes with methods in src/ or declared by two units or more (not the ones
     include/Core/ or a package header defines), and every class those need complete;
  2. gives each one declaration: the units' own when they all declare it alike, else their
     merge (classdecl.merge: the union of their members, fields placed by offset, measured in
     each unit by MSVC itself with that unit's declarations). Bitfields or several fields to a
     line, declared differently, are left to the lead;
  3. writes include/Game/<Class>.h: the class, the headers its bases, fields held by value and
     inline bodies need (an include cycle leaves its classes out), forward declarations with
     each class's own keyword (MSVC decorates `class` and `struct` differently), and the free
     declarations its inline bodies call or its fields use, copied from a unit. A header must
     compile on its own;
  4. moves each unit onto the headers: the class's definition, and the unit's copies of what a
     header carries, give way to an #include, and the unit is compiled and compared with its
     current object, function by function (code bytes, relocations and their targets). A unit
     whose bytes would change keeps its own declaration of the classes that change them (found
     by trying them one at a time); build/agent/headers-report.json lists them. A header no
     unit uses is not kept: every header in the tree is one the build compiles.
"""

import argparse
import collections
import json
import os
import re
import sys
import tempfile
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
from typing import Dict, List, Optional, Set, Tuple

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))

import classdecl  # noqa: E402
import coff  # noqa: E402
import integrate  # noqa: E402
from common import Project  # noqa: E402

GAME_DIR = "Game"
GUARD = "GAME_{}_H"


class UnitDecls:
    """A unit's text, its declaration items and the classes they define."""

    def __init__(self, source: str, text: str):
        self.source = source
        self.text = text
        head, self.blocks = integrate.parse_unit(text)
        self.items = integrate.items(head)
        self.classes: Dict[str, Tuple[int, classdecl.ClassDecl]] = {}
        for i, item in enumerate(self.items):
            d = classdecl.parse(item)
            if d is not None and d.name not in self.classes:
                self.classes[d.name] = (i, d)

    def head(self) -> str:
        return "".join(self.items)


def load_units(p: Project) -> Dict[str, UnitDecls]:
    out = {}
    for path in sorted((p.src_dir / GAME_DIR).glob("*.cpp")):
        source = f"{GAME_DIR}/{path.name}"
        out[source] = UnitDecls(source, path.read_text(encoding="utf-8", errors="replace"))
    return out


def cflags(p: Project, source: str) -> List[str]:
    return p.configure.UNITS.get(source, {}).get("cflags", p.configure.CFLAGS)


def measure(p: Project, unit: UnitDecls, workdir: Path) -> Optional[str]:
    """Fill the unit's classes' layouts from a compiled probe; an error message on failure."""
    decls = [d for _, d in unit.classes.values()]
    if not decls:
        return None
    text, order = classdecl.probe_source(unit.head(), decls)
    path = workdir / (unit.source.replace("/", "_") + ".probe.cpp")
    path.write_text(text, encoding="utf-8")
    obj = path.with_suffix(".obj")
    ok, log = p.compile(path, obj, cflags(p, unit.source))
    if not ok:
        return " / ".join(log.splitlines()[:2])
    classdecl.read_probe(obj.read_bytes(), decls, order)
    return None


# -- comparing objects ---------------------------------------------------------------------
LOCAL_LABEL = re.compile(r"^\$[A-Z]+\d+$")  # MSVC's numbered labels ($T: an EH table): the number moves


def code_of(obj: coff.Coff) -> Dict[str, Tuple[bytes, Tuple]]:
    """Every defined symbol in a code section, and the EH tables: its bytes and its relocations
    (offset, type, target). A target that is a numbered label stands for its own contents."""
    def target(sym: Optional[coff.Symbol], depth: int = 0):
        if sym is None:
            return "?"
        if LOCAL_LABEL.match(sym.name) and sym.defined and depth < 3:
            start, end = obj.extent(sym)
            data = obj.section(sym.section).data[start:end]
            return ("label", data, tuple((r.offset - start, r.type, target(obj.slots[r.symbol], depth + 1))
                                         for _, r in obj.relocations(sym.section, start, end)))
        return sym.name

    out = {}
    for s in obj.symbols:
        if not s.defined or s.is_section or s.name.startswith("$"):
            continue
        sec = obj.section(s.section)
        if sec is None:
            continue
        if not sec.is_code and not s.name.startswith(("__ehfuncinfo$", "__unwindtable$", "__tryblocktable$",
                                                       "__catchsym$", "__ehhandler$")):
            continue
        start, end = obj.extent(s)
        relocs = tuple((r.offset - start, r.type, target(obj.slots[r.symbol]))
                       for _, r in obj.relocations(s.section, start, end))
        out[s.name] = (sec.data[start:end], relocs)
    return out


def same_code(old: Path, new: Path) -> Optional[str]:
    """None when every function of the old object is the same in the new one, else the first difference."""
    a, b = code_of(coff.Coff.load(old)), code_of(coff.Coff.load(new))
    for name, (data, relocs) in a.items():
        if name not in b:
            return f"{name} is gone"
        if b[name][0] != data:
            return f"{name}: code differs"
        if b[name][1] != relocs:
            return f"{name}: references differ"
    return None


# -- merging and writing -------------------------------------------------------------------
def variants(units: Dict[str, UnitDecls]) -> Dict[str, Dict[str, classdecl.ClassDecl]]:
    """class name -> {unit: its declaration there}."""
    out: Dict[str, Dict[str, classdecl.ClassDecl]] = collections.defaultdict(dict)
    for source, u in units.items():
        for name, (_, d) in u.classes.items():
            out[name][source] = d
    return out


def method_classes(units: Dict[str, UnitDecls]) -> Set[str]:
    """Classes with a method defined in src/."""
    out = set()
    for u in units.values():
        for block in u.blocks.values():
            code = block.split("\n", 1)[1] if "\n" in block else block
            m = re.search(r"^[^\n(]*?\b([A-Za-z_]\w*)::~?[A-Za-z_]\w*\s*\(", code, re.M)
            if m:
                out.add(m.group(1))
    return out


STORAGE_OTHERS = ("anon:", "bitfield:", "multi:")
DECLARATOR_AFTER_BODY = re.compile(r"\}\s*[A-Za-z_]\w*\s*(?:\[[^\]]*\])?\s*;\s*$")


def by_value_types(d: classdecl.ClassDecl) -> Set[str]:
    """Names a declaration needs complete: bases, fields held by value, and everything inline bodies use."""
    out = set(classdecl.IDENT.findall(d.bases))
    for m in d.members:
        if m.kind == "field" and "*" not in m.type and "&" not in m.type:
            out |= set(classdecl.IDENT.findall(m.type))
        if m.body or (m.kind == "other" and not m.key.startswith("access:")):
            out |= set(classdecl.uses(m.text))
    return out


def lays_out_others(d: classdecl.ClassDecl) -> bool:
    """Whether members merge() cannot place take room: bitfields, `int a, b;`, anonymous unions."""
    return any(m.kind == "other" and (m.key.startswith(STORAGE_OTHERS)
                                      or DECLARATOR_AFTER_BODY.search(classdecl.normal(m.text)))
               for m in d.members)


def kinds_of(units: Dict[str, "UnitDecls"]) -> Dict[str, str]:
    """Each class's keyword (class or struct), the commonest among its definitions, else its forward
    declarations: MSVC writes it into decorated names (V, U), so a forward declaration must agree."""
    votes: Dict[str, collections.Counter] = collections.defaultdict(collections.Counter)
    forward: Dict[str, collections.Counter] = collections.defaultdict(collections.Counter)
    for u in units.values():
        for name, (_, d) in u.classes.items():
            votes[name][d.kind] += 1
        for item in u.items:
            m = re.match(r"^\s*(class|struct)\s+([A-Za-z_]\w*)\s*;", classdecl.normal(item))
            if m:
                forward[m.group(2)][m.group(1)] += 1
    out = {n: c.most_common(1)[0][0] for n, c in forward.items()}
    out.update({n: c.most_common(1)[0][0] for n, c in votes.items()})
    return out


def package_index(p: Project) -> Dict[str, Tuple[str, str]]:
    """What include/Core/ and the package headers define -> (header, kind: class, struct, union,
    enum, typedef or define)."""
    out: Dict[str, Tuple[str, str]] = {}
    for h in sorted(p.include_dir.glob("*/*.h")):
        if h.parent.name == GAME_DIR:
            continue
        rel = h.relative_to(p.include_dir).as_posix()
        text = h.read_text(encoding="utf-8", errors="replace")
        found = [(m.group(2), m.group(1)) for m in re.finditer(
            r"^\s*(?:template\s*<[^>]*>\s*)?(class|struct|union|enum)\s+(?:[A-Z][A-Z0-9_]*\s+)?([A-Za-z_]\w*)\s*[:{]",
            text, re.M)]
        found += [(m.group(1), "typedef") for m in re.finditer(
            r"^\s*typedef\b[^;{]*?\b([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;", text, re.M)]
        found += [(m.group(1), "define") for m in re.finditer(r"^\s*#\s*define\s+([A-Za-z_]\w*)", text, re.M)]
        for name, kind in found:
            out.setdefault(name, (rel, kind))
    return out


def free_name(item: str) -> Optional[str]:
    """The name a free declaration declares: a function, an extern variable, an enum or a typedef."""
    bare = classdecl.normal(item)
    if not bare or bare.startswith("#") or classdecl.parse(item) is not None:
        return None
    if re.match(r"^(?:class|struct|union)\s+\w+\s*;$", bare) or bare.startswith("template"):
        return None
    m = re.match(r"^enum\s+([A-Za-z_]\w*)\s*\{", bare)
    if m:
        return m.group(1)
    pointer = re.search(r"\(\s*\*\s*([A-Za-z_]\w*)\s*\)", bare)
    if bare.startswith("typedef"):
        m = pointer or re.search(r"\b([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;$", bare)
        return m.group(1) if m else None
    if "{" in bare:
        return None
    if pointer:
        return pointer.group(1)
    if "(" in bare:
        m = re.search(r"([A-Za-z_]\w*)\s*\(", bare)
    else:
        m = re.search(r"([A-Za-z_]\w*)\s*(?:\[[^\]]*\])*\s*;$", bare)
    return m.group(1) if m else None


def free_index(units: Dict[str, "UnitDecls"]) -> Dict[str, str]:
    """name -> the first unit's free declaration of it."""
    out: Dict[str, str] = {}
    for u in units.values():
        for item in u.items:
            name = free_name(item)
            if name:
                out.setdefault(name, item)
    return out


class Plan:
    """A header to write: its class, what it includes and forward-declares, the free declarations it carries."""

    def __init__(self, name: str, decl: classdecl.ClassDecl, verbatim: bool, note: str):
        self.name, self.decl, self.verbatim, self.note = name, decl, verbatim, note
        self.needs: Set[str] = set()      # Game headers it includes
        self.carries: List[str] = []      # free declarations, as one unit wrote them
        self.text = ""

    def body(self) -> str:
        return self.decl.text if self.verbatim else classdecl.write(self.decl)


def plan_headers(units: Dict[str, UnitDecls], var: Dict[str, Dict[str, classdecl.ClassDecl]], wanted: Set[str],
                 measured: Set[str], packages: Dict[str, Tuple[str, str]]) -> Tuple[Dict[str, Plan], Dict[str, str]]:
    """({class: plan}, {class: why it has no header})."""
    kinds = kinds_of(units)
    frees = free_index(units)
    skipped: Dict[str, str] = {}
    plans: Dict[str, Plan] = {}
    for name in sorted(wanted):
        decls = list(var[name].values())
        unique: Dict[str, classdecl.ClassDecl] = {}
        for s, d in var[name].items():
            unique.setdefault(classdecl.normal(d.text), d)
        note = f"declared by {len(decls)} unit{'s' if len(decls) != 1 else ''}"
        if len(unique) == 1:
            plans[name] = Plan(name, next(iter(unique.values())), True, note)
            continue
        if any(lays_out_others(d) for d in unique.values()):
            skipped[name] = "bitfields or several fields to a line, declared differently: merge by hand"
            continue
        ready = {k: d for k, d in unique.items()
                 if any(s in measured for s, x in var[name].items() if classdecl.normal(x.text) == k)}
        if not ready:
            skipped[name] = "not measured"
            continue
        try:
            merged = classdecl.merge(list(ready.values()))
        except classdecl.Conflict as e:
            skipped[name] = str(e)
            continue
        merged.kind = kinds.get(name, merged.kind)
        plans[name] = Plan(name, merged, False, note)
    # what each needs complete, and the cycles that rules out
    for name, plan in plans.items():
        plan.needs = (by_value_types(plan.decl) & set(var)) - set(packages) - {name}
    changed = True
    while changed:
        changed = False
        for name in list(plans):
            missing = plans[name].needs - set(plans)
            if missing:
                skipped[name] = f"needs {sorted(missing)[0]}, which has no header"
                del plans[name]
                changed = True
    for scc in cycles({n: p.needs for n, p in plans.items()}):
        for name in scc:
            skipped[name] = f"its header and {len(scc) - 1} others would include each other"
            plans.pop(name, None)
    changed = True
    while changed:
        changed = False
        for name in list(plans):
            if plans[name].needs - set(plans):
                skipped[name] = "needs a class in an include cycle"
                del plans[name]
                changed = True
    for name, plan in plans.items():
        plan.text = header_text(plan, set(plans), kinds, frees, packages)
    return plans, skipped


def cycles(graph: Dict[str, Set[str]]) -> List[List[str]]:
    """The strongly connected components of more than one node (Tarjan, iterative)."""
    index: Dict[str, int] = {}
    low: Dict[str, int] = {}
    stack: List[str] = []
    on: Set[str] = set()
    out: List[List[str]] = []
    counter = 0
    for root in sorted(graph):
        if root in index:
            continue
        work = [(root, iter(sorted(graph.get(root, ()))))]
        index[root] = low[root] = counter
        counter += 1
        stack.append(root)
        on.add(root)
        while work:
            node, children = work[-1]
            advanced = False
            for child in children:
                if child not in graph:
                    continue
                if child not in index:
                    index[child] = low[child] = counter
                    counter += 1
                    stack.append(child)
                    on.add(child)
                    work.append((child, iter(sorted(graph.get(child, ())))))
                    advanced = True
                    break
                if child in on:
                    low[node] = min(low[node], index[child])
            if advanced:
                continue
            work.pop()
            if work:
                low[work[-1][0]] = min(low[work[-1][0]], low[node])
            if low[node] == index[node]:
                scc = []
                while True:
                    x = stack.pop()
                    on.discard(x)
                    scc.append(x)
                    if x == node:
                        break
                if len(scc) > 1:
                    out.append(scc)
    return out


def header_text(plan: Plan, headers: Set[str], kinds: Dict[str, str], frees: Dict[str, str],
                packages: Dict[str, Tuple[str, str]]) -> str:
    body = plan.body()
    inline_uses = set()
    for m in plan.decl.members:
        if m.body:
            inline_uses |= set(classdecl.uses(m.text))
    used = set(classdecl.uses(body))
    # free declarations the class's text names (an inline body's callee, a field's enum)
    carried = []
    for n in sorted(used - headers - set(packages) - {plan.name}):
        if n in frees and (n in inline_uses or frees[n].lstrip().startswith(("enum", "typedef"))):
            carried.append(frees[n])
    plan.carries = carried
    used |= {i for f in carried for i in classdecl.uses(f)}
    complete = by_value_types(plan.decl) | {i for f in carried if f.lstrip().startswith(("enum", "typedef"))
                                             for i in classdecl.uses(f)}
    includes = set()
    forward = set()
    for n in used - {plan.name}:
        if n in headers and n in complete:
            includes.add(f"{GAME_DIR}/{n}.h")
        elif n in packages:
            where, kind = packages[n]
            if kind in ("class", "struct", "union") and n not in complete:
                forward.add((kind, n))
            else:
                includes.add(where)
        elif n in kinds:
            forward.add((kinds[n], n))
    guard = GUARD.format(plan.name.upper())
    lines = [f"// {plan.name}: {plan.note}.",
             "// Generated by tools/agent/headers.py from the units that declare it; edit it here.",
             f"#ifndef {guard}", f"#define {guard}", ""]
    lines += [f'#include "{i}"' for i in sorted(includes, key=lambda i: (i.startswith(GAME_DIR), i))]
    if includes:
        lines.append("")
    lines += [f"{kind} {n};" for kind, n in sorted(forward, key=lambda x: x[1])]
    if forward:
        lines.append("")
    for f in carried:
        lines.append(f.strip("\n"))
    if carried:
        lines.append("")
    lines.append(body.strip("\n"))
    lines += ["", f"#endif // {guard}", ""]
    return "\n".join(lines)


def compile_alone(p: Project, plans: Dict[str, Plan], work: Path, jobs: int) -> Dict[str, str]:
    """{class: the first error} for headers that do not compile on their own."""
    def one(name: str) -> Optional[str]:
        path = work / "alone" / f"{name}.cpp"
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(f'#include "{GAME_DIR}/{name}.h"\n', encoding="utf-8")
        ok, log = p.compile(path, path.with_suffix(".obj"), p.configure.CFLAGS)
        if ok:
            return None
        return next((re.sub(r"^.*?\(\d+\) : ", "", line.strip()) for line in log.splitlines() if "error" in line),
                    "does not compile")
    failed = {}
    with ThreadPoolExecutor(jobs) as pool:
        for name, err in zip(plans, pool.map(one, plans)):
            if err:
                failed[name] = err
    return failed


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("command", choices=("stats", "build"))
    ap.add_argument("--classes", default="", help="only these classes and what they need (comma-separated)")
    ap.add_argument("--jobs", type=int, default=os.cpu_count() or 8)
    args = ap.parse_args()
    if os.environ.get("T3_AGENT_ID"):
        sys.exit("headers.py is the lead's")
    p = Project()
    units = load_units(p)
    work = Path(tempfile.mkdtemp(prefix="t3headers-", dir=p.state_dir("tmp")))
    packages = package_index(p)
    var = variants(units)
    with_methods = method_classes(units)
    wanted = {n for n, v in var.items() if (len(v) >= 2 or n in with_methods) and n not in packages}
    if args.classes:
        wanted &= set(args.classes.split(","))
    todo = list(wanted)  # and every class those need complete, from any unit
    while todo:
        for d in var.get(todo.pop(), {}).values():
            for x in by_value_types(d):
                if x in var and x not in wanted and x not in packages:
                    wanted.add(x)
                    todo.append(x)
    # measure the units whose declarations of a wanted class differ
    differing = {s for n in wanted for s in var[n] if len({classdecl.normal(d.text) for d in var[n].values()}) > 1}
    errors: Dict[str, str] = {}
    with ThreadPoolExecutor(args.jobs) as pool:
        for source, err in zip(sorted(differing), pool.map(lambda s: measure(p, units[s], work), sorted(differing))):
            if err:
                errors[source] = err
    print(f"{len(units)} units; {len(wanted)} classes to give a header; {len(differing)} units measured, "
          f"{len(errors)} could not be")
    plans, skipped = plan_headers(units, var, wanted, set(differing) - set(errors), packages)
    if args.command == "build":
        game = p.include_dir / GAME_DIR
        game.mkdir(parents=True, exist_ok=True)
        for name, plan in plans.items():
            (game / f"{name}.h").write_text(plan.text, encoding="utf-8", newline="\n")
        failed = compile_alone(p, plans, work, args.jobs)
        while failed:
            for name, err in failed.items():
                skipped[name] = f"does not compile alone: {err[:120]}"
                plans.pop(name, None)
                (game / f"{name}.h").unlink()
            failed = {n: "includes a header that does not compile"
                      for n, plan in plans.items() if plan.needs - set(plans)}
            for name in failed:
                skipped[name] = failed[name]
                plans.pop(name)
                (game / f"{name}.h").unlink()
            failed = {}
    print(f"{len(plans)} headers ({sum(1 for x in plans.values() if x.verbatim)} as every unit declares them, "
          f"{sum(1 for x in plans.values() if not x.verbatim)} merged); {len(skipped)} classes without one:")
    reasons = collections.Counter(re.sub(r"[A-Z][a-z]+_[0-9A-Fa-f]{8}\w*|0x[0-9A-Fa-f]+|'[^']*'|\[.*?\]", "#", why)[:90]
                                  for why in skipped.values())
    for why, n in reasons.most_common(14):
        print(f"  {n:5} {why}")
    if args.command == "build":
        migrate_all(p, units, plans, work, args.jobs)


def migrate_all(p: Project, units: Dict[str, UnitDecls], plans: Dict[str, Plan], work: Path, jobs: int) -> None:
    """Move each unit onto the headers whose classes it declares, keeping its bytes; then drop the
    headers no unit uses."""
    game = p.include_dir / GAME_DIR

    def closure(n: str) -> Set[str]:
        out, todo = set(), [n]
        while todo:
            for x in plans[todo.pop()].needs:
                if x not in out:
                    out.add(x)
                    todo.append(x)
        return out

    def migrate(u: UnitDecls) -> Tuple[str, Optional[str], Set[str]]:
        """(source, new text or None, classes kept local)."""
        candidates = {n for n in u.classes if n in plans}
        if not candidates:
            return u.source, None, set()
        old_obj = p.main / "build" / p.version / "src" / u.source.replace(".cpp", ".obj")
        if not old_obj.is_file():
            return u.source, None, candidates

        def compose(use: Set[str]) -> Optional[str]:
            local = set(u.classes) - use
            # a header bringing in a class the unit keeps would define it twice
            use = {n for n in use if not ((closure(n) | {n}) & local)}
            if not use:
                return None
            provided = set()
            for n in set(use).union(*(closure(n) for n in use)):
                provided |= {integrate.normal(f) for f in plans[n].carries}
            items = []
            for item in u.items:
                d = classdecl.parse(item)
                if d is not None and d.name in use:
                    continue
                if integrate.normal(item) in provided:
                    continue
                items.append(item)
            includes = [f'#include "{GAME_DIR}/{n}.h"\n' for n in sorted(use)]
            head = [i for i in items if classdecl.normal(i).startswith("#")]
            rest = [i for i in items if not classdecl.normal(i).startswith("#")]
            text = integrate.HEADER.format(unit=u.source) + "".join(head) + "".join(includes)
            if rest:
                text += "\n" + "\n".join(r.rstrip("\n") + "\n" for r in rest)
            text += "\n" + "\n".join(b.rstrip("\n") + "\n" for _, b in sorted(u.blocks.items()))
            return text

        def check(use: Set[str], tag: str) -> Optional[str]:
            text = compose(use)
            if text is None:
                return None
            path = work / tag / u.source
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_text(text, encoding="utf-8")
            obj = path.with_suffix(".obj")
            ok, _ = p.compile(path, obj, cflags(p, u.source))
            return text if ok and same_code(old_obj, obj) is None else None

        text = check(candidates, "all")
        if text is not None:
            return u.source, text, set()
        good = {n for n in sorted(candidates) if check({n}, f"one_{n}") is not None}
        while good:
            text = check(good, "good")
            if text is not None:
                return u.source, text, candidates - good
            good.discard(sorted(good)[-1])
        return u.source, None, candidates

    with ThreadPoolExecutor(jobs) as pool:
        results = list(pool.map(migrate, units.values()))
    moved, kept_local = 0, collections.defaultdict(list)
    used: Set[str] = set()
    for source, text, kept in results:
        if text is not None:
            (p.src_dir / source).write_text(text, encoding="utf-8", newline="\n")
            moved += 1
            for n in re.findall(r'#include "Game/(\w+)\.h"', text):
                used |= {n} | closure(n)
        for n in kept:
            kept_local[n].append(source)
    for name in set(plans) - used:  # every header in the tree is one the build compiles
        (game / f"{name}.h").unlink()
    report = {"headers": len(used), "units moved": moved,
              "kept local": {n: sorted(v) for n, v in sorted(kept_local.items())}}
    (p.state / "headers-report.json").write_text(json.dumps(report, indent=1) + "\n", encoding="utf-8")
    print(f"{len(used)} headers in use, {len(set(plans) - used)} unused ones dropped; {moved} units moved onto them; "
          f"{sum(len(v) for v in kept_local.values())} declarations kept local in {len(kept_local)} classes")


if __name__ == "__main__":
    main()
