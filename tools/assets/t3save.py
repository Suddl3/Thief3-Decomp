#!/usr/bin/env python3
"""Read, write and migrate Thief: Deadly Shadows saved games (.wgs).

A saved level is a whole Unreal package of the level as it was played, so a
map edit installed later does not reach the saves made before it.  `migrate`
applies a map edits file (t3-map-edits) to those saves too, with the names
the patched map gave its new actors, and only where the save still matches
the original map: an actor the player moved, took or destroyed keeps its
saved state.  See docs/assets.md, "Saved games".

Usage:
  t3save.py info <save.wgs>
      the header, the blocks and the package inside.
  t3save.py unpack <save.wgs> [-o out.pkg]
      write the package inside (default build/assets/saves/<name>.pkg).
  t3save.py pack <package> --like <save.wgs> -o <out.wgs>
      pack a package into a save, with the header of an existing one.
  t3save.py list [--saves DIR]
      the saved games and the levels each holds.
  t3save.py migrate <edits.json> [--saves DIR] [--source <.gmp>] [--dry-run]
      apply a map edits file to every save of its level.  Each save is
      backed up to build/assets/save-backup/<time>/ before it is replaced.

A .wgs file:

  0x00  16 bytes   the game's save file id
  0x10  u32        size of the blocks (the file from 0x104)
  0x14  u32        size of the package they unpack to
  0x18  u32        0
  0x1C  20 bytes   SHA-1 of the blocks, then of these 0x104 bytes with this
                   field zeroed; the game skips a save that does not match
  0x30  ...        zeros up to 0x104
  0x104 blocks     u32 unpacked size, u32 packed size, LZO1X data; the game
                   reads at most 0x4000 bytes of either into its buffers
"""

from __future__ import annotations

import argparse
import hashlib
import os
import shutil
import struct
import sys
from dataclasses import dataclass, field
from datetime import datetime
from pathlib import Path
from typing import Any, Dict, List, Optional, Tuple

sys.path.insert(0, str(Path(__file__).resolve().parent))
from t3common import BUILD_DIR, game_dir, resolve_map, run_cli  # noqa: E402
from t3pack import (BACKUP_DIR, EditsError, Patch, _load_names, apply_edits, check_source,  # noqa: E402
                    load_edits, original_source, verify_patch)
from upkg import Package, prop_value, struct_fields  # noqa: E402
from upkgwrite import LayoutError  # noqa: E402

HEADER_SIZE = 0x104
DIGEST_AT = 0x1C
BUFFER = 0x4000                   # the game's read buffer, for packed and unpacked blocks alike
LITERAL_BLOCK = BUFFER - 128      # unpacked bytes per literal-only block, so it packs into BUFFER
SAVES_DIR = BUILD_DIR / "saves"
SAVE_BACKUP_DIR = BUILD_DIR / "save-backup"
CURRENT_SAVE = "Current Save"     # the game's copy of the save being played
# How far a saved actor may have drifted (physics settling) and still count as untouched.
DRIFT = 1.0


class SaveError(ValueError):
    """A save file that does not read, or cannot be written."""


# --- LZO1X ---------------------------------------------------------------------------------

def lzo1x_decompress(src: bytes, size: int) -> bytes:
    """Unpack one LZO1X block of `size` bytes."""
    out = bytearray()
    ip = 0

    def literal(n: int) -> None:
        nonlocal ip
        if ip + n > len(src):
            raise SaveError("LZO literal run past the end of the block")
        out.extend(src[ip:ip + n])
        ip += n

    def match(distance: int, n: int) -> None:
        start = len(out) - distance
        if start < 0:
            raise SaveError("LZO match before the start of the block")
        # Byte by byte: a match may overlap the bytes it produces.
        for k in range(n):
            out.append(out[start + k])

    def run_length(t: int, mask: int) -> int:
        nonlocal ip
        # A zero count field continues in the next bytes: each zero byte adds 255.
        if t & mask == 0:
            t = mask
            while src[ip] == 0:
                t += 255
                ip += 1
            t += src[ip]
            ip += 1
            return t
        return t & mask

    # state: the literals copied after the last match (0, 1-3, or 4 for "4 or more").
    state = 0
    t = src[ip]
    if t > 17:
        ip += 1
        literal(t - 17)
        state = min(t - 17, 4)
    try:
        while True:
            t = src[ip]
            ip += 1
            if t < 16:
                if state == 0:
                    # A literal run: 3 + a length, which a zero opens to more bytes.
                    n = t if t else run_length(0, 15)
                    literal(n + 3)
                    state = 4
                    continue
                # A short match: 2 bytes close by after 1-3 literals, 3 bytes farther after 4 or more.
                distance = 1 + (t >> 2) + (src[ip] << 2) + (0x800 if state == 4 else 0)
                ip += 1
                match(distance, 3 if state == 4 else 2)
                n = t & 3
            elif t >= 64:
                distance = 1 + ((t >> 2) & 7) + (src[ip] << 3)
                ip += 1
                match(distance, (t >> 5) + 1)
                n = t & 3
            elif t >= 32:
                length = run_length(t, 31)
                v = src[ip] | src[ip + 1] << 8
                ip += 2
                match(1 + (v >> 2), length + 2)
                n = v & 3
            else:
                length = run_length(t, 7)
                v = src[ip] | src[ip + 1] << 8
                ip += 2
                distance = ((t & 8) << 11) + (v >> 2)
                # Distance 0 is the end of the stream.
                if distance == 0:
                    break
                match(distance + 0x4000, length + 2)
                n = v & 3
            if n:
                literal(n)
            state = n
    except IndexError as ex:
        raise SaveError("LZO block ends early") from ex
    if len(out) != size:
        raise SaveError(f"LZO block unpacks to {len(out)} bytes, not {size}")
    return bytes(out)


def lzo1x_literal(raw: bytes) -> bytes:
    """`raw` as one LZO1X block of literals: valid for any decoder, not smaller."""
    n = len(raw)
    if n <= 238:
        head = bytes([17 + n])
    else:
        # 0, then a zero byte per 255, then the rest: the run is 18 + that.
        zeros, rest = divmod(n - 18, 255)
        if rest == 0:
            zeros, rest = zeros - 1, 255
        head = b"\0" * (1 + zeros) + bytes([rest])
    return head + raw + b"\x11\0\0"


# --- .wgs files ------------------------------------------------------------------------

def save_digest(header: bytes, blocks: bytes) -> bytes:
    """The SHA-1 the game checks: the blocks, then the header with the digest zeroed."""
    h = bytearray(header[:HEADER_SIZE])
    h[DIGEST_AT:DIGEST_AT + 20] = bytes(20)
    return hashlib.sha1(bytes(blocks) + bytes(h)).digest()


@dataclass
class SaveFile:
    """A .wgs file read: its header and the package its blocks unpack to."""
    header: bytes
    package: bytes
    blocks: int = 0
    digest_ok: bool = True

    @staticmethod
    def read(data: bytes) -> "SaveFile":
        if len(data) < HEADER_SIZE:
            raise SaveError("too short for a save header")
        header = data[:HEADER_SIZE]
        packed, unpacked = struct.unpack_from("<II", header, 0x10)
        if packed != len(data) - HEADER_SIZE:
            raise SaveError(f"the header gives {packed} bytes of blocks; the file has {len(data) - HEADER_SIZE}")
        out = bytearray()
        p, count = HEADER_SIZE, 0
        while p < len(data):
            size, length = struct.unpack_from("<II", data, p)
            out += lzo1x_decompress(data[p + 8:p + 8 + length], size)
            p += 8 + length
            count += 1
        if len(out) != unpacked:
            raise SaveError(f"the blocks unpack to {len(out)} bytes; the header gives {unpacked}")
        digest_ok = save_digest(header, data[HEADER_SIZE:]) == header[DIGEST_AT:DIGEST_AT + 20]
        return SaveFile(header, bytes(out), count, digest_ok)

    @staticmethod
    def load(path: Path) -> "SaveFile":
        try:
            return SaveFile.read(path.read_bytes())
        except SaveError as ex:
            raise SaveError(f"{path}: {ex}") from ex

    def encode(self) -> bytes:
        """The file: literal-only blocks, the sizes and the digest filled in."""
        blocks = bytearray()
        for i in range(0, len(self.package), LITERAL_BLOCK):
            raw = self.package[i:i + LITERAL_BLOCK]
            packed = lzo1x_literal(raw)
            blocks += struct.pack("<II", len(raw), len(packed)) + packed
        header = bytearray(self.header)
        struct.pack_into("<II", header, 0x10, len(blocks), len(self.package))
        header[DIGEST_AT:DIGEST_AT + 20] = save_digest(header, blocks)
        return bytes(header) + bytes(blocks)


# --- finding saves ---------------------------------------------------------------------

def save_folders(explicit: Optional[str], game: Optional[Path]) -> List[Path]:
    """SaveGames folders: `explicit`, or every known place that exists (the
    game folder's save/, Documents, Public Documents; docs/launcher.md, "Saves")."""
    if explicit:
        return [Path(explicit)]
    places = []
    if game is not None:
        places.append(game / "save" / "SaveGames")
    for env in ("USERPROFILE", "PUBLIC"):
        root = os.environ.get(env)
        if root:
            places.append(Path(root) / "Documents" / "Thief - Deadly Shadows" / "SaveGames")
    return [p for p in places if p.is_dir()]


def level_saves(folders: List[Path], level: Optional[str] = None) -> List[Path]:
    """Every <Level>.wgs in the slots of `folders` ("Current Save" included)."""
    found = []
    for root in folders:
        for slot in sorted(root.iterdir(), key=lambda p: p.name.lower()):
            if not slot.is_dir():
                continue
            for f in sorted(slot.iterdir(), key=lambda p: p.name.lower()):
                if f.suffix.lower() == ".wgs" and (level is None or f.stem.lower() == level.lower()):
                    found.append(f)
    return found


# --- migration -------------------------------------------------------------------------

@dataclass
class Migration:
    """What migrate_package() did to one save: `patch` is None when the save
    needs nothing; `notes` say what was left as saved, and why."""
    patch: Optional[Patch]
    notes: List[str] = field(default_factory=list)


def _placement(pkg: Package, name: str) -> Optional[Tuple[Dict[str, float], Dict[str, int], Any]]:
    """An actor's Location, Rotation and DrawScale, or None when it does not parse."""
    e = next((e for e in pkg.exports if e.name == name and e.serial_size), None)
    a = pkg.read_actor(e) if e else None
    if a is None or a.parse_error:
        return None
    return (struct_fields(prop_value(a.properties, "Location")), struct_fields(prop_value(a.properties, "Rotation")),
            prop_value(a.properties, "DrawScale"))


def _untouched(saved: Tuple[Dict[str, float], Dict[str, int], Any],
               original: Tuple[Dict[str, float], Dict[str, int], Any]) -> bool:
    """Whether a saved actor still stands where the original map put it."""
    (sl, sr, ss), (ol, orot, os_) = saved, original
    near = all(abs(float(sl.get(k, 0)) - float(ol.get(k, 0))) <= DRIFT for k in "XYZ")
    return near and all(sr.get(k, 0) == orot.get(k, 0) for k in ("Pitch", "Yaw", "Roll")) and ss == os_


def added_names(original: Package, edits: Dict[str, Any], names=None) -> List[str]:
    """The names the patched map gives the edits' new actors."""
    if not edits.get("added"):
        return []
    patch = apply_edits(original, edits, names)
    return [patch.writer.export_view(i).name for i in patch.added]


def migrate_package(save: Package, original: Package, edits: Dict[str, Any], names=None,
                    new_names: Optional[List[str]] = None) -> Migration:
    """Apply map edits to a saved level: the edits the save does not have yet,
    on actors the player left as the original map has them."""
    if new_names is None:
        new_names = added_names(original, edits, names)
    refs = save.level_actors()
    if refs is None:
        raise EditsError("the save has no Level object")
    in_level = {save.exports[r - 1].name for r in refs if 0 < r <= len(save.exports)}
    taken = {e.name.lower() for e in save.exports}
    notes: List[str] = []
    todo: Dict[str, Any] = {**edits, "actors": {}, "added": [], "removed": []}

    for name, rec in edits["actors"].items():
        saved, first = _placement(save, name), _placement(original, name)

        # An actor that left the level in play (taken, destroyed) stays gone.
        if name not in in_level or saved is None:
            notes.append(f"{name}: not in this save's level; left as saved")
        elif first is None or not _untouched(saved, first):
            notes.append(f"{name}: moved since the map was loaded (or edited already); left as saved")
        else:
            todo["actors"][name] = rec

    kept_names = []
    for rec, name in zip(edits.get("added", []), new_names):
        # The save was made on the patched map, or migrated already.
        if name.lower() in taken:
            continue
        if rec["copy_of"] not in in_level:
            notes.append(f"{name} (a copy of {rec['copy_of']}): its original is not in this save; not added")
            continue
        todo["added"].append(rec)
        kept_names.append(name)

    for name in edits.get("removed", []):
        # Already out of the level (removed by an edit, or in play).
        if name in in_level:
            todo["removed"].append(name)

    if not (todo["actors"] or todo["added"] or todo["removed"]):
        return Migration(None, notes)
    return Migration(apply_edits(save, todo, names, added_names=kept_names), notes)


def _backup(path: Path, stamp: str, roots: List[Path]) -> Path:
    """Copy a save file into build/assets/save-backup/<stamp>/<slot>/."""
    root = next((r for r in roots if path.resolve().is_relative_to(r.resolve())), path.parent.parent)
    dest = SAVE_BACKUP_DIR / stamp / path.resolve().relative_to(root.resolve())
    dest.parent.mkdir(parents=True, exist_ok=True)
    shutil.copy2(path, dest)
    return dest


def migrate(edits: Dict[str, Any], original_path: Path, folders: List[Path], names=None, dry_run: bool = False,
            log=print) -> Tuple[int, int]:
    """Migrate every save of the edits' level; returns (saves changed, saves that failed)."""
    original = Package(original_path)
    new_names = added_names(original, edits, names)
    saves = level_saves(folders, edits["level"])
    if not saves:
        log(f"no saves of {edits['level']} in " + ", ".join(str(f) for f in folders))
        return 0, 0
    stamp = datetime.now().strftime("%Y-%m-%d_%H%M%S")
    changed = failed = 0
    for path in saves:
        label = f"{path.parent.name}/{path.name}"
        try:
            save = SaveFile.load(path)
            if not save.digest_ok:
                raise SaveError("its checksum does not match: the game would not load it either")
            pkg = Package(path.with_suffix(".pkg"), save.package)
            result = migrate_package(pkg, original, edits, names, new_names)
            if result.patch is None:
                log(f"{label}: up to date")
            else:
                data = result.patch.writer.write()
                problems = verify_patch(pkg, Package(path.with_suffix(".pkg"), data), result.patch)
                if problems:
                    raise EditsError("the migrated level does not check out:\n  " + "\n  ".join(problems))
                log(f"{label}: " + ("would change" if dry_run else "changed"))
                for c in result.patch.changes:
                    log(f"  {c}")
                if not dry_run:
                    backup = _backup(path, stamp, folders)
                    tmp = path.with_name(path.name + ".t3save.tmp")
                    tmp.write_bytes(SaveFile(save.header, data).encode())
                    os.replace(tmp, path)
                    log(f"  backup: {backup}")
                changed += 1
            for n in result.notes:
                log(f"  {n}")
        except (SaveError, EditsError, LayoutError, ValueError, EOFError, struct.error) as ex:
            log(f"{label}: FAILED, left as it was: {ex}")
            failed += 1
    return changed, failed


# --- CLI -----------------------------------------------------------------------------

def _game_or_none(explicit: Optional[str]) -> Optional[Path]:
    try:
        return game_dir(explicit)
    except SystemExit:
        return None


def cmd_info(args) -> None:
    path = Path(args.save)
    save = SaveFile.load(path)
    print(f"{path.name}: {path.stat().st_size:,} bytes, {save.blocks} blocks, package {len(save.package):,} bytes")
    print(f"  file id  {save.header[:16].hex()}")
    print(f"  checksum {'ok' if save.digest_ok else 'DOES NOT MATCH (the game skips this save)'}")
    pkg = Package(path.with_suffix(".pkg"), save.package)
    refs = pkg.level_actors()
    print(f"  package version {pkg.file_version}, licensee {pkg.licensee_version}, {len(pkg.names)} names, "
          f"{len(pkg.exports)} exports, " + (f"{len(refs)} actors in the level" if refs is not None else "no level"))


def cmd_unpack(args) -> None:
    path = Path(args.save)
    out = Path(args.output) if args.output else SAVES_DIR / f"{path.parent.name}_{path.stem}.pkg"
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(SaveFile.load(path).package)
    print(f"wrote {out}")


def cmd_pack(args) -> None:
    like = SaveFile.load(Path(args.like))
    out = Path(args.output)
    out.write_bytes(SaveFile(like.header, Path(args.package).read_bytes()).encode())
    print(f"wrote {out}")


def cmd_list(args) -> None:
    folders = save_folders(args.saves, _game_or_none(args.game_dir))
    if not folders:
        sys.exit("no SaveGames folder found: pass --saves")
    for f in folders:
        print(f)
        for path in level_saves([f]):
            print(f"  {path.parent.name}/{path.name}  {path.stat().st_size:,} bytes")


def cmd_migrate(args) -> None:
    edits = load_edits(args.edits)
    game = _game_or_none(args.game_dir)
    if args.source:
        src = Path(args.source)
    else:
        if game is None:
            sys.exit("game folder not found: pass --game-dir, set T3_GAME_DIR, or give --source")
        src = original_source(edits, resolve_map(game, edits["level"], ".gmp"), BACKUP_DIR)
    print(f"{src.name}: {check_source(edits, src)}")
    folders = save_folders(args.saves, game)
    if not folders:
        sys.exit("no SaveGames folder found: pass --saves")
    need_table = any("draw_scale" in a or a.get("gamesys") for a in list(edits["actors"].values()) + edits["added"])
    names = _load_names(game) if need_table else None
    changed, failed = migrate(edits, src, folders, names, args.dry_run)
    print(f"{changed} save(s) {'to change' if args.dry_run else 'changed'}" + (f", {failed} FAILED" if failed else ""))
    sys.exit(1 if failed else 0)


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--game-dir", help="game install folder (default: $T3_GAME_DIR or registry)")
    sub = ap.add_subparsers(dest="cmd", required=True)
    s = sub.add_parser("info", help="describe a save file")
    s.add_argument("save")
    s = sub.add_parser("unpack", help="write the package inside a save")
    s.add_argument("save")
    s.add_argument("-o", "--output")
    s = sub.add_parser("pack", help="pack a package into a save")
    s.add_argument("package")
    s.add_argument("--like", required=True, help="an existing save, for its header")
    s.add_argument("-o", "--output", required=True)
    s = sub.add_parser("list", help="the saved games and their levels")
    s.add_argument("--saves", help="SaveGames folder (default: every known place)")
    s = sub.add_parser("migrate", help="apply a map edits file to the saves of its level")
    s.add_argument("edits", help="edits file (t3-map-edits)")
    s.add_argument("--saves", help="SaveGames folder (default: every known place)")
    s.add_argument("--source", help="the original map the edits were made from (default: its backup or the game's)")
    s.add_argument("-n", "--dry-run", action="store_true", help="check and report, change nothing")
    args = ap.parse_args()
    try:
        {"info": cmd_info, "unpack": cmd_unpack, "pack": cmd_pack, "list": cmd_list,
         "migrate": cmd_migrate}[args.cmd](args)
    except (SaveError, EditsError, LayoutError) as ex:
        sys.exit(f"error: {ex}")


if __name__ == "__main__":
    run_cli(main)
