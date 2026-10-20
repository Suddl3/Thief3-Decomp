#!/usr/bin/env python3
"""Lead only: run a swarm of opencode workers (any model opencode serves), lanes refilled until dry.

    python tools/agent/swarm.py run --prefix m1 --lanes match=44,class=20 [--model opencode/minimax-m3.1-flash-free]
    python tools/agent/swarm.py status                   # build/agent/swarm/status.json, summed
    touch build/agent/swarm/pause-<kind>                 # start no more workers of a kind (a checkpoint)
    touch build/agent/drain                              # matching: the queue closes (next.py), lanes end

The Workflow tool runs Claude agents; this runs `opencode run --auto -m <model>` processes, one a lane,
each a worker with the same one-file protocols:

  match   tools/agent/worker.md over the matching queue, a band at a time: the queue first (FILTERS of
          the first band), then the functions earlier workers deferred (`--only-deferred`), then stop.
  class   tools/agent/classer.md: classes the units still declare themselves (classwork.py next).
  name    tools/agent/namer.md over a task list (--name-tasks, a JSON list of class lists).

A worker ends with a JSON line (the protocols say which); a worker that handled nothing counts as dry,
and three dry workers in a row end that band. Each worker's whole output is kept in
build/agent/swarm/<prefix>/<id>.log. The lead integrates and checks as with any batch
(docs/agent-workflow.md, "The lead's loop").
"""
import argparse
import json
import os
import re
import shutil
import subprocess
import sys
import threading
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
STATE = ROOT / "build" / "agent" / "swarm"
PY = ".venv/Scripts/python"
DRY_LIMIT = 3
LIMITED = re.compile(r"Rate limit exceeded|rate.?limit|429|Too Many Requests", re.I)
BACKOFF = STATE / "backoff.json"   # shared by every swarm on the machine: one provider, one limit


def backoff_until() -> float:
    try:
        return json.loads(BACKOFF.read_text(encoding="utf-8"))["until"]
    except (OSError, ValueError, KeyError):
        return 0.0


def back_off() -> float:
    """The provider refused a request: every lane waits, twice as long as last time (5 to 40 minutes);
    the wait resets once a worker gets through."""
    try:
        data = json.loads(BACKOFF.read_text(encoding="utf-8"))
    except (OSError, ValueError):
        data = {}
    now = time.time()
    if data.get("until", 0) > now:
        return data["until"]
    delay = min(max(data.get("delay", 150) * 2, 300), 2400)
    BACKOFF.write_text(json.dumps({"until": now + delay, "delay": delay}), encoding="utf-8")
    return now + delay


def through() -> None:
    try:
        if BACKOFF.is_file() and json.loads(BACKOFF.read_text(encoding="utf-8")).get("until", 0) < time.time():
            BACKOFF.unlink()
    except (OSError, ValueError):
        pass

MATCH_BANDS = [
    {"letter": "q", "filters": "--min-size 1", "n": 3, "count": 1, "cap": 10},
    {"letter": "d", "filters": "--only-deferred", "n": 4, "count": 1, "cap": 8},
]


def opencode() -> str:
    found = shutil.which("opencode") or str(Path.home() / ".opencode" / "bin" / "opencode")
    return found


def cpu_load() -> float:
    """The machine's CPU load in percent (Windows: wmic; elsewhere the 1-minute load average)."""
    try:
        if os.name == "nt":
            out = subprocess.run(["wmic", "cpu", "get", "loadpercentage"], capture_output=True, text=True,
                                 timeout=30).stdout
            values = [int(x) for x in re.findall(r"\d+", out)]
            return sum(values) / len(values) if values else 0.0
        return 100.0 * os.getloadavg()[0] / (os.cpu_count() or 1)
    except (OSError, subprocess.SubprocessError, ValueError):
        return 0.0


class Swarm:
    def __init__(self, args):
        self.args = args
        self.dir = STATE / args.prefix
        self.dir.mkdir(parents=True, exist_ok=True)
        self.lock = threading.Lock()
        self.counter = 0
        self.band = next(i for i, b in enumerate(MATCH_BANDS) if b["letter"] == args.band)  # the band in use
        self.dry = {"match": 0, "class": 0, "name": 0}
        self.done = {"match": False, "class": False, "name": False}
        self.tally = {"workers": 0, "failed": 0, "matched": 0, "deferred": 0, "classes": 0, "givenup": 0,
                      "named": 0, "running": 0}
        self.tasks = json.loads(Path(args.name_tasks).read_text(encoding="utf-8")) if args.name_tasks else []
        self.load = 0.0                     # the CPU load, averaged over the last minute
        if args.max_cpu:
            threading.Thread(target=self.watch_cpu, daemon=True).start()

    def watch_cpu(self) -> None:
        samples = []
        while True:
            samples = (samples + [cpu_load()])[-4:]
            self.load = sum(samples) / len(samples)
            time.sleep(15)

    # -- prompts -----------------------------------------------------------------------------
    def prompt(self, kind: str):
        with self.lock:
            if self.done[kind] or (STATE / f"pause-{kind}").exists():
                return None
            self.counter += 1
            wid = f"{self.args.prefix}-{kind[0]}{self.counter:04d}"
            if kind == "match":
                b = MATCH_BANDS[self.band]
                text = (f"Read tools/agent/worker.md and follow it exactly. ID={wid} FILTERS={b['filters']} "
                        f"N={b['n']} COUNT={b['count']} CAP={b['cap']} PY={PY}")
            elif kind == "class":
                text = (f"Read tools/agent/classer.md and follow it exactly. ID={wid}\n\nSettle 3 classes, one after "
                        f"the other, then report. Claim each with:\n    {PY} tools/agent/classwork.py next --id {wid} "
                        f"--max-units {self.args.max_units}")
            else:
                if not self.tasks:
                    self.done[kind] = True
                    return None
                task = self.tasks.pop(0)
                text = (f"Read tools/agent/namer.md and follow it exactly. ID={wid} CLASSES={','.join(task)}\n\n"
                        f"Write only build/scratch/names/{wid}.json; do not edit any other file.")
            text += ("\n\nWork from the repository root (the current directory); run the tools with the shell. "
                     "Never search or list the repository at large (no `grep -r`, `find`, `ls` of build/, src/ or "
                     "ghidra/, no reading the tools' source): the protocol and the tools' output give you what "
                     "you need, and a search over this tree costs every other worker its CPU. Read only the files "
                     "the tools name. End with the JSON line your protocol asks for, on a line of its own.")
            return wid, text

    # -- one worker ----------------------------------------------------------------------------
    def run_one(self, kind: str, wid: str, text: str) -> None:
        log = self.dir / f"{wid}.log"
        cmd = [opencode(), "run", "--auto", "-m", self.args.model, "--title", wid, text]
        env = dict(os.environ, T3_AGENT_ID=wid)
        start = time.time()
        with self.lock:
            self.tally["running"] += 1
        try:
            with open(log, "w", encoding="utf-8", errors="replace") as out:
                proc = subprocess.run(cmd, cwd=ROOT, env=env, stdout=out, stderr=subprocess.STDOUT,
                                      timeout=self.args.timeout, stdin=subprocess.DEVNULL)
            code = proc.returncode
        except subprocess.TimeoutExpired:
            code = "timeout"
        except OSError as e:
            code = f"error: {e}"
        finally:
            with self.lock:
                self.tally["running"] -= 1
        output = log.read_text(encoding="utf-8", errors="replace") if log.is_file() else ""
        report = last_json(output)
        handled = 0
        if report is None and LIMITED.search(output[-2000:]):
            until = back_off()
            with self.lock:
                self.tally["limited"] = self.tally.get("limited", 0) + 1
                self.note(f"{wid}: rate limited; every lane waits until {time.strftime('%H:%M', time.localtime(until))}")
                self.save()
            return
        if report is not None:
            through()
        with self.lock:
            self.tally["workers"] += 1
            if report is None:
                self.tally["failed"] += 1
            if kind == "match":
                m, d = report_list(report, "matched"), report_list(report, "deferred")
                self.tally["matched"] += m
                self.tally["deferred"] += d
                handled = m + d
            elif kind == "class":
                c, g = report_list(report, "done"), report_list(report, "givenup")
                self.tally["classes"] += c
                self.tally["givenup"] += g
                handled = c + g
            else:
                handled = 1 if report is not None else 0
                self.tally["named"] += handled
            if handled:
                self.dry[kind] = 0
            elif report is not None and code == 0 and (kind != "match" or report.get("empty")):
                # it finished and found nothing (a matcher's claim printed "empty"): the source is dry
                self.dry[kind] += 1
                if self.dry[kind] >= DRY_LIMIT:
                    if kind == "match" and self.band + 1 < len(MATCH_BANDS):
                        self.band += 1
                        self.dry[kind] = 0
                        self.note(f"match: band {MATCH_BANDS[self.band - 1]['letter']} is dry; "
                                  f"on to {MATCH_BANDS[self.band]['letter']}")
                    else:
                        self.done[kind] = True
                        self.note(f"{kind}: dry; its lanes end")
            self.note(f"{wid}: {code}, {handled} handled in {int(time.time() - start)}s "
                      f"({json.dumps(report)[:160] if report else 'no report'})")
            self.save()

    def lane(self, kind: str) -> None:
        while True:
            if (ROOT / "build" / "agent" / "stop-swarm").exists():
                return
            wait = backoff_until() - time.time()
            if wait > 0:
                time.sleep(min(wait, 60) + (hash(threading.current_thread().name) % 30))
                continue
            if self.args.max_cpu and self.load > self.args.max_cpu:
                # the machine is busy enough: start no worker until the running ones bring it down
                time.sleep(45 + (hash(threading.current_thread().name) % 30))
                continue
            p = self.prompt(kind)
            if p is None:
                if self.done[kind]:
                    return
                time.sleep(30)  # paused
                continue
            self.run_one(kind, *p)

    def note(self, line: str) -> None:
        stamp = time.strftime("%H:%M:%S")
        with open(self.dir / "swarm.log", "a", encoding="utf-8") as f:
            f.write(f"{stamp} {line}\n")
        print(f"{stamp} {line}", flush=True)

    def save(self) -> None:
        data = dict(self.tally, band=MATCH_BANDS[self.band]["letter"], done=self.done, load=round(self.load),
                    at=time.time())
        (self.dir / "status.json").write_text(json.dumps(data, indent=1), encoding="utf-8")


def report_list(report, key: str) -> int:
    if not report:
        return 0
    v = report.get(key)
    return len(v) if isinstance(v, list) else int(v) if isinstance(v, (int, float)) else 0


def last_json(text: str):
    """The last JSON object on a line of its own (or in a ``` block) in a worker's output."""
    for line in reversed([l.strip().strip("`") for l in text.splitlines()]):
        if line.startswith("{") and line.endswith("}"):
            try:
                return json.loads(line)
            except ValueError:
                continue
    m = list(re.finditer(r"\{[^{}]*\"id\"[^{}]*\}", text))
    for x in reversed(m):
        try:
            return json.loads(x.group(0))
        except ValueError:
            continue
    return None


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="command", required=True)
    s = sub.add_parser("run")
    s.add_argument("--prefix", required=True)
    s.add_argument("--lanes", default="match=44,class=20", help="kind=count,...")
    s.add_argument("--model", default="opencode/minimax-m3.1-flash-free")
    s.add_argument("--timeout", type=int, default=5400, help="seconds a worker may run")
    s.add_argument("--max-units", type=int, default=16)
    s.add_argument("--name-tasks")
    s.add_argument("--band", default="q", help="the matching band to start on: q (the queue) or d (deferred)")
    s.add_argument("--max-cpu", type=float, default=0, help="start no worker while the CPU load is above this")
    s.add_argument("--stagger", type=float, default=2.0, help="seconds between starting lanes")
    sub.add_parser("status")
    args = ap.parse_args()
    if args.command == "status":
        for path in sorted(STATE.glob("*/status.json")):
            print(path.parent.name, path.read_text(encoding="utf-8"))
        return
    sw = Swarm(args)
    lanes = []
    for part in args.lanes.split(","):
        kind, n = part.split("=")
        lanes += [kind] * int(n)
    sw.note(f"{len(lanes)} lanes ({args.lanes}), {args.model}")
    threads = []
    for kind in lanes:
        t = threading.Thread(target=sw.lane, args=(kind,), daemon=True)
        t.start()
        threads.append(t)
        time.sleep(args.stagger)
    for t in threads:
        t.join()
    sw.note(f"all lanes ended: {json.dumps(sw.tally)}")
    sw.save()


if __name__ == "__main__":
    main()
