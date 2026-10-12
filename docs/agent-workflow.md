# Agent workflow

How the matching decompilation runs day to day: one lead model orchestrates
batches of Sonnet sub-agents, and a strict tool gate decides what counts as a
match. [matching.md](matching.md) describes the tools
(queue, context packets, try, accept, integrate) and their rulers; this page
describes the combination of agents on top of them and why each setting is
what it is, so the same setup can be reused for another decompilation.

The goal is the most matches per token. The choices below were measured on
this project (pilots of 2026-09-29 and 2026-09-30, numbers in [Why this
combination](#why-this-combination)), and revised on 2026-10-02 from what
other decompilations' histories showed ([research/ue2-decomps.md](research/ue2-decomps.md)).

## At a glance

| Role | Model | Takes | Prompt parameters |
|---|---|---|---|
| Lead | Opus | nothing from the queue: prepares, launches, sweeps, verifies, integrates | (the session) |
| Head band | Sonnet 5.5 | the queue head: functions of at most 31 bytes | `FILTERS=--max-size 31 N=20 COUNT=4 CAP=5` |
| Main band | Sonnet 5.5 | functions of 32 to 79 bytes, a class at a time | `FILTERS=--min-size 32 --max-size 79 --by-class N=6 COUNT=2 CAP=8` |
| Big band | Opus | functions of 80 bytes and more, a class at a time | `FILTERS=--min-size 80 --by-class N=4 COUNT=1 CAP=10` |
| Second pass | the other model | deferrals whose blocker the lead removed, or another model's | `FILTERS=--only-deferred N=4 COUNT=1 CAP=8` |
| Stamp | none | families with an accepted member (`clusters.py stamp`) | (a tool) |

Every prompt also gives `PY=`, the interpreter the tools run with
(`.venv/Scripts/python` on Windows, `.venv/bin/python` elsewhere). The
simplest way to run a batch is the saved workflow ([Running a swarm as a
workflow](#running-a-swarm-as-a-workflow)); by hand, workers run as many at
once as Claude Code allows (20 by default;
`CLAUDE_CODE_MAX_CONCURRENT_SUBAGENTS` raises it, set before the session
starts), and the lead launches the next one into each slot a worker frees
until the batch is done. A worker's whole prompt is one line:

```
Read tools/agent/worker.md and follow it exactly. ID=b05 FILTERS=--min-size 32 --max-size 79 --by-class N=6 COUNT=2 CAP=8 PY=.venv/Scripts/python
```

Why these numbers changed on 2026-10-02: workers stop a claim after three
attempts in a row with no new best (byte-tactics measured 80% of its matches
on the first attempt and under 9% from the fourth on), so a main-band worker
needs fewer tool calls per function; N=6 keeps workers under about 100 tool
calls, past which LEGOLAND's workers stopped following instructions;
`--by-class` lets a worker declare a class once for several of its methods;
and a second pass goes to the other model, which found 49 matches in 150
"hopeless" functions at DC3.

`ID` is the worker's id for claims and ledgers, never reused: each batch
takes new prefixes (`h`, `s`, `t` were the Haiku pilot's; the first Sonnet
batch used `a01`... for the head band and `b01`... for the main band). `N` is
how many functions it handles, `COUNT` how many it claims at a time, `CAP` its
attempts per function. The bands keep a worker's claims alike: many tiny
functions with a low cap, or fewer larger ones with a higher cap.

## Why this combination

Since 2026-09-30 every worker runs Sonnet 5.5: on the user's experience with
the RAC1 decompilation (rac1-decomp's `match-worker` agent runs Sonnet on the
same kind of queue protocol), Sonnet costs less per match than Haiku once
Haiku's retries and the Sonnet passes over its failures count, and the table
below already shows it from 32 bytes on. The first Sonnet-only batch is in
[Sonnet batches](#sonnet-batches).

The Haiku pilot on the queue head (easy first), counted by
[sweep.py](../tools/agent/sweep.py) from the records and the workers'
transcripts. Tokens are input-side (input, cache writes and cache reads):
the transcripts under-count streamed output, which is small next to them.

| Band | Model | Matched | Input tokens per match |
|---|---|---|---|
| up to 31 bytes | Haiku | 201 of 202, 97% on the first try | about 43K |
| 32 to 96 bytes | Haiku | 12 of 26 | 927K |
| 32 to 96 bytes | Sonnet | 38 of 40 | 217K (393K counting one worker's 8M on an inline-asm function) |
| Haiku's deferrals | Sonnet | 12 of 14 | 129K on the first seven |

- Up to 31 bytes, Haiku matches nearly everything on the first attempt, and
  its tokens cost a fraction of Sonnet's.
- From 32 bytes, Sonnet uses fewer tokens per match than Haiku (Haiku
  spends its attempts on wrong structure) and leaves nothing behind, while
  every Haiku failure costs a Sonnet pass anyway. So Sonnet takes the band
  directly.
- Tier 1's deferrals are cheap for Sonnet: the first seven all matched on
  the first attempt.
- The cost sits in the tail: functions that cannot match (an inline-asm
  original) or need a class nobody has declared. One Sonnet worker spent 8
  million tokens on an inline-asm function, with side experiments outside
  try.py. The protocol now forbids those and says to defer asm-looking
  targets at once, and the lead excludes such functions from the queue.
- For comparison, a headless worker of the earlier waves (`wave.py`,
  `claude -p`) used about 2 million input tokens per match on the script
  natives (measured on one of its six workers): each request carried about
  63K tokens of Claude Code's default system prompt, every built-in tool and
  the user's CLAUDE.md files. A sub-agent of the `t3-matcher` type starts at
  about 12.6K.

## Sonnet batches

The first Sonnet-only batch (2026-09-30): 56 workers in two bands, 20 at a
time, after a smoke test. Counted by sweep.py; "priced" weighs cache reads at
0.1 and cache writes at 1.25 of uncached input, as billed.

| Band | Workers | Matched | First try | Input-side tokens per match | Priced |
|---|---|---|---|---|---|
| head, up to 31 bytes | 20 | 373 of 400 (93%) | 82% | 126K | 20K |
| main, 32 to 78 bytes | 36 | 259 of 360 (72%) | 56% | 479K | 71K |

Not a like-for-like comparison with the Haiku pilot above: the pilot took the
easiest head of the queue, this batch what was left of the tiny functions and
the next 360 larger ones, and most of its deferrals are functions no worker
could match:

- **Wrong callee names** (the largest group, most of the main band's): an
  early accepted jump wrapper records its callee as `void FUN_x()`, and every
  real caller then fails the name ruler although its bytes match (bindings of
  `this`, arguments or a return value the guess lacks). The global
  `operator delete` alone (`0x10AD1DC0`, recorded as a free function) blocked
  a dozen. They go to the lead's naming pass ([Name conflicts](#name-conflicts)).
- **Compiler-generated code** the queue still held: deleting destructors
  calling a sized delete (139 more were excluded mid-batch), adjustor thunks,
  a global object's initializer. The protocol now defers them at once.
- **Library code** inside game objects: STL instantiations without strings
  the classifier could see (`_Copy_opt`, `_Ufill`, `basic_string`).
- **Bad function bounds** in symbols.txt (a function split in two) and a few
  codegen puzzles (a `call; ret` MSVC turns into a tail jump, dead stack
  temporaries, registers kept across a call only for a callee in the same
  unit).

Lessons: exclude compiler-generated shapes and known library code before a
batch; settle name conflicts between batches, since each one blocks several
callers; and the claim must re-check the records after taking the lock
(next.py now does), or a worker can be handed a function another one has just
accepted.

### Swarms (2026-10-01)

Then a continuous swarm: 8 to 12 workers at once, later 16, each freed slot
refilled at once, with one to three Opus workers on functions of 80 bytes and
more (`FILTERS=--min-size 80 N=6 COUNT=1 CAP=10`). Three swarms, each drained
for a checkpoint (sweep, review, naming pass, integration), 109 workers in
all. "Priced" as above, plus output at 5x; Opus's higher price per token is
not included.

| Swarm | Band | Model | Workers | Matched | Priced per match |
|---|---|---|---|---|---|
| 1 | head, up to 31 bytes | Sonnet | 25 | 466 (97%) | 26K |
| 1 | main, 32 bytes and more | Sonnet | 10 | 81 (81%) | 105K |
| 1 | big, 80 bytes and more | Opus | 6 | 30 (83%) | 110K |
| 2 | head | Sonnet | 7 | 127 (91%) | 36K |
| 2 | main | Sonnet | 15 | 118 (79%) | 85K |
| 2 | big | Opus | 6 | 28 (78%) | 97K |
| 3 | head | Sonnet | 13 | 248 (97%) | 28K |
| 3 | main | Sonnet | 21 | 162 (81%) | 90K |
| 3 | big | Opus | 6 | 24 (67%) | 205K |

### Batch w7 (2026-10-02 to 03)

A swarm without drains: 8 workers at once, then 12 (Sonnet on the main band,
32 to 79 bytes, and the upper band, 80 to 159; Opus from 160 bytes), with a
checkpoint every 16 to 20 finished workers while the others ran (naming pass,
deleting destructors, integration, library scan, report). 105 workers:

| Band | Model | Workers | Matched |
|---|---|---|---|
| main, 32 to 79 bytes | Sonnet | 43 | 343 (90%) |
| upper, 80 to 159 bytes | Sonnet | 37 | 141 (79%) |
| big, 160 bytes and more | Opus | 25 | 68 (68%) |

Most deferrals were library code (33), tiebreaks (25) and name conflicts
(24). The Opus workers' constructors and destructors at 96 to 99% mostly
waited on a callee's name, which the next naming pass gave (20 of 34 blocked
functions matched at one checkpoint). Checking the families and callees of
every library exclusion, not only the new ones, found ten STL and Epic
template members in `src/` that workers, stamps and retries had matched as
plain code (`std::list`'s `clear` and `_Tidy`, list and tree node
destructors, a `TArray<T>::Remove`).

### Haiku tests (2026-10-10)

Two test swarms of 8 Haiku workers, each running once with no refill, on
batch w7's bands and settings: 4 on 32 to 79 bytes, 4 on 80 to 159. Between
them the lead fixed what the first showed blocking any model and gave the
packets what they lacked: Ghidra's decompilation of the open functions under
160 bytes (the cache held none of them: `fill-ghidra` had failed on a long
command line), "Where to start" in worker.md, names-only differences
deferred at once whatever the score, `FName(const TCHAR*, EFindName)` and
`UObject()` in Core.h, and the names of the destructor pair folded for
`Class_10E67938`'s subclasses.

| Run | Band | Matched by workers | Per worker-hour | Tokens per match |
|---|---|---|---|---|
| Haiku 1 | 32 to 79 | 31/40 | 28.5 | 35K |
| Haiku 1 | 80 to 159 | 12/24 | 9.4 | 101K |
| Haiku 2 | 32 to 79 | 27/40 | 24.0 | 39K |
| Haiku 2 | 80 to 159 | 12/24 | 11.9 | 83K |
| Sonnet, w7 | 32 to 79 | 90% | 26.9 | 25K |
| Sonnet, w7 | 80 to 159 | 79% | 12.2 | 50K |

The second run matched more on the first attempt (29 of 39, against 23 of
43) and spent fewer tokens on the bigger band, but not a higher share: the
second run had what the first left, and its deferrals were mostly class
layouts and vtable owners nobody has modelled yet, which no worker settles
within one claim. The next naming pass matched 5 of each run's deferrals,
from the names their workers asked for. In the second run Haiku kept
Sonnet's pace per worker and spent 1.6 to 1.7 times its tokens per match.

### Batch w10: 20 Haiku workers (2026-10-10)

20 Haiku workers at once for two and a half hours, each freed slot refilled
at once: 32 to 79 bytes until that band ran dry (7 workers), then 80 to 159
(149 workers). No checkpoint while they ran: the lead read each hand-back,
excluded the library code workers reported, and integrated at the end.

| Band | Workers | Matched by workers | Per worker-hour | Tokens per match |
|---|---|---|---|---|
| 32 to 79 | 7 | 50 (77%) | 26.0 | 37K |
| 80 to 159 | 149 | 431 (51%) | 10.1 | 95K |

About 190 matches an hour over the 20 slots; 469 stayed after review (275 on
the first attempt). The naming pass after the batch matched 59 deferrals
(their own candidates named the callees: constructors recorded as methods
returning `this`, return types an earlier caller guessed, destructor names),
the deleting-destructor pass 7, and `src/` grew from 5,575 functions to 6,107
(game code at 100%: 5,744 to 6,329 functions, 11.2% to 13.3% of the bytes). Three
changes to worker.md mid-batch paid off: a MATCH is never deferred (one was,
at 100%), an object of an unnamed class gets a placeholder
`Class_<ADDR>_<Field>` rather than a deferral, and the packet's cheatsheet
entries are to be used. 22 of the 43 deferrals a worker had made without one
attempt matched once requeued under the new rule.

The 80-to-159 band holds most of the STL code the classifier still calls
game: instantiations in the objects of the game code that uses them
(`0x10C40000` to `0x10C45A00`, iostream and locale code around `0x10A1F000`
and `0x10C66000` to `0x10C6A000`). Workers matched tree rotations, node
constructors, `std::pair` constructors, `std::fill`, `copy` and
`copy_backward`, `_Med3`, a locale facet's `_Getcat` and
`basic_filebuf::close` as plain code; the lead withdrew them and excluded
their families, and `libscan.py` found the two that had reached `src/`. The
lint now also refuses `*(T*)(P + 0x2c)` through a `char*` variable, which one
match used to reach a field.

The lead adds what needs no model between swarms: a naming pass over the
name-blocked deferrals (each blocked function's candidate names its callee;
the old guess stays as an alias, so callers in `src/` keep matching), 66
InternalConstructor thunks rewritten from one template, and families of
byte-identical functions matched from one accepted member (68 wrappers
returning `Class_109081E0(DAT_x)`). Library and compiler-generated shapes the
workers recognize (STL `_Tidy`, `_Ufill`, `std::fill`, global initializers)
go to `excluded.json` as they report them.

### Batch w11: 20 Haiku workers on 160 to 319 bytes (2026-10-10)

20 Haiku workers at once on functions of 160 to 319 bytes
(`--by-class N=4 COUNT=1 CAP=10`), 388 workers over about seven hours, each
freed slot refilled at once, integrated at the end. Counted by `sweep.py`:

| Band | Workers | Matched by workers | First try | Per worker-hour | Tokens per match |
|---|---|---|---|---|---|
| 160 to 319 | 388 | 609 of 1,546 (39%) | 291 | about 4 | 206K |

Tokens per match as for w10 (the sub-agents' own counts); `sweep.py` puts
the batch at 753K priced tokens per match. The deferrals by blocker: name
conflicts 297, register tiebreaks 218, other code generation 103, exception
frames 93, layouts 72, signatures 41, compiler-generated 26, vtables 26,
library 25, inlining 18. Name conflicts were a third: the lead probed each
names-only deferral as it came in (`fixnames.py aliases`) and kept the names
in one plan, which the naming pass applied after integration (292 renames,
the destructors unwind funclets call among them, and 529 aliases): 181 of
the 273 functions it had blocked matched at once.

What the batch taught, now in the protocol or the gate:

- **The game was built with link-time code generation**
  ([matching.md](matching.md), "Link-time code generation"): a few static
  helpers take arguments in registers no C++ declaration gives, and a few
  callers rely on a callee leaving a register alone. Those are excluded
  (`ltcg:`). Workers took far more for it than it holds: a method call
  (whatever is in ecx before a call is its `this`), a virtual call, the
  pushes of an outer call, and `push ecx; mov ecx, esp`, which reserves the
  slot of a class passed by value. Each became a rule in worker.md, and the
  deferrals went back to the queue.
- **Nested calls split their pushes either way.** Two callee-cleaned calls,
  one in the other's arguments, compile alike whichever call a push is given
  to, and accepted sources had given an outer call's pushes to 4-byte getters
  that take none. The gate now checks each direct call against its callee's
  `ret` (see [Name conflicts](#name-conflicts)); 4 accepted functions that
  fail it went back to the queue.
- **A function's own guessed name is the worker's to correct**, and a callee
  whose name disagrees with its call site is declared as the call site shows
  and tried, so the lead can take the name from the best candidate.
- **The STL hides in game ranges.** `build/agent/lead-tools/stlscan.py`
  compiles the VC7.1 standard library's char streams, strings, locale facets
  and containers and compares their code with every accepted and queued
  function: 239 are the library's and excluded, and 9 that had reached
  `src/` came out (`libscan.py` found two more among the new matches).
- **C names have one underscore.** A match that declared `extern "C" int
  _sprintf(...)` bound the runtime's `sprintf` as `__sprintf`, and
  integration wrote that over `_sprintf`: six functions dropped to 99.8% in
  the report (objdiff pairs references by name) until the source said
  `sprintf`. Compare the report after every integration.

After the batch, `src/` holds 6,878 functions (from 6,107), and game code
at 100% is 7,260 of 12,252 functions, 18.6% of its bytes (from 6,329 and
13.3%). 71 accepted functions still clash with their units (an overflow unit
does not take them either), and the 160-to-319 band has 283 functions left.

## Running a swarm as a workflow

[.claude/workflows/t3-swarm.js](../.claude/workflows/t3-swarm.js) runs one
batch as a Claude Code workflow: a script, not the lead model, launches the
workers, refills each slot as one finishes (16 at once by default;
`CLAUDE_CODE_WORKFLOW_MAX_CONCURRENT_AGENTS` changes it), mixes the bands, and
runs a small Haiku helper every 8 workers that stamps the families of what
has been accepted, so their held members either match or go back to the
queue while the batch runs. Each worker returns its JSON report through a
schema; the run ends with the totals per band, the needs and idioms the
workers reported (counted), the deferrals, and the sweep command. The lead
spends no tokens per completion and its context holds one summary.

Ask the lead to run the `t3-swarm` workflow with its arguments, for example:

```
prefix: "s4", python: ".venv/Scripts/python", bands: {head: 10, main: 16, big: 6, second: 0}
```

`smoke: true` runs one main-band worker on two functions (the smoke test of
the lead's loop). Then sweep: `python tools/agent/sweep.py "s4-*"`. A prefix
is never reused. Workflows need Claude Code with the workflow feature (an
opt-in: the request to run it is the opt-in); without it, launch the same
prompts with the Agent tool as below.

## Workers are Agent-tool sub-agents

The lead launches workers with the Agent tool: `subagent_type: t3-matcher`,
`model: sonnet`, in the background, all of a batch's first workers in one
message. A notification arrives when each finishes, and the lead refills its
slot.

- The agent definition, [t3-matcher](../.claude/agents/t3-matcher.md), gives
  the tools (Read, Write, Edit, Glob, Grep, Bash), Sonnet as the default
  model, and `omitClaudeMd: true`: a worker does not load CLAUDE.md, which
  holds nothing it needs. The guard runs from the project settings (see
  [Guard and permissions](#guard-and-permissions)). Its body only points to
  the protocol, like rac1-decomp's `match-worker`: an earlier body sent
  workers to the t3-match skill and cheat sheet, about 6K tokens each that the
  protocol replaces.
- Sub-agents run in the lead's checkout, not in worktrees. They see the
  lead's uncommitted headers and tool changes at once; claims keep them
  apart, and each writes only `build/scratch/<ADDR>/`.
- Headless `claude -p` workers are not used: besides their heavier context,
  the lead session's auto-mode classifier refuses to start
  `claude -p --permission-mode dontAsk` processes.

## The worker protocol

[tools/agent/worker.md](../tools/agent/worker.md) is the workers' whole
instruction set, about 2K tokens. Each part is there to save tokens or to
close a failure seen in the pilot:

- **One file, read once.** The lead's output tokens are the most expensive
  in the system; a one-line prompt of parameters costs the lead almost
  nothing, and the protocol is read by each worker as cheap input.
- **It replaces SKILL.md and CHEATSHEET.md** (about 6K tokens per worker)
  with the loop, the rules, the naming rules and the codegen idioms that
  matter, condensed.
- **`next.py claim --context --count COUNT`** claims and prints the context
  packets in one call.
- **One message per attempt:** Write `build/scratch/<ADDR>/vK.cpp`, then Bash
  `try.py ... && accept.py ...`, so a match is accepted in the same turn.
  The C++ goes through Write, not a heredoc: the guard parses whole Bash
  commands and refuses C++'s `->`, `>>` and apostrophes as redirections and
  quotes.
- **`T3_AGENT_ID=<ID>` on every call:** sub-agents share the lead's
  environment and do not keep variables between calls, and the claims need
  a per-worker id.
- **Handled means accepted or deferred; claim again until N.** A Haiku
  worker stopped after its first claim without that sentence.
- **Caps:** 5 attempts in the head band, 8 in the main band, 10 in the big
  band, and try.py ends a claim after 4 attempts in a row with no new best
  (`--patience`, the lead's): the best attempt goes to the next pass, whose
  packet shows it as a starting point. Our own curve is flatter than
  byte-tactics': of the functions our swarms tried, 77% matched on the first
  attempt, then 65%, 37%, 39% and 23% of those reaching the second to fifth.
  Replayed over those ledgers, a patience of 3 would have refused 10 of 1,219
  matches to save 36 attempts on deferrals; 4 refuses 2 and saves 18.
- **Classify, then defer with a slug:** before each new attempt the worker
  names the kind of difference (source, register or order tie-break, an
  inlined helper, an unknown layout or slot, a name), and a deferral's blocker
  starts with a slug (`tiebreak:`, `inline:`, `layout:`, `vtable:`,
  `signature:`, `name-conflict:`, `library:`, `engine:`,
  `compiler-generated:`, `asm:`, ...). sweep.py counts deferrals by slug, so
  the lead unblocks them in batches, and parks the out-of-scope ones
  (library, engine, compiler-generated, asm) in `excluded.json` so no second
  pass serves them again. BW1's matchers work the same way.
- **The final message is only the JSON line**, with at most three `needs`
  and `idioms` of 25 words: the reports land in the lead's context.
- **Plausible source only:** no variables named after registers, no data
  declared as a function to get its address, no `volatile` to keep a store,
  no invented class names. Each passed the byte gate in the first session
  and was rejected at review.
- **Compile only through try.py**, and defer at once when the target looks
  hand-written in asm.
- **The codegen section grows** with idioms the gate has verified (an
  accepted function shows them), for example `mov eax, ecx` meaning the
  method returns `this`, a float stored to memory being a plain `mov` of its
  bits, `extern void* DAT_x[];` for an address used as an immediate, a `bool`
  parameter behind `sete al; push eax`.

## The lead's loop

1. **Prepare.** `python tools/agent/next.py status`. Build the family index
   once, before the workers would each build it: `python tools/agent/clusters.py list`
   (it also shows the largest open families). Cache Ghidra decompiles for the
   functions the main band will reach:
   `python tools/agent/next.py list --min-size 32 --limit 450`, then
   `python tools/agent/context.py fill-ghidra <addrs>` (a few minutes).
2. **Smoke test** after any change to the tools, the protocol or Claude
   Code: one worker, two functions (`t3-swarm` with `smoke: true`, or one
   Agent call in the foreground); check the records (below), not the report,
   and that the guard still blocks a worker (see [Guard and
   permissions](#guard-and-permissions)).
3. **Run the batch**: the `t3-swarm` workflow with a new prefix. By hand
   instead: launch as many workers as the limit allows in one message, mixing
   the bands; on each completion, launch the next worker of the batch with a
   new id, and run `clusters.py stamp` now and then.
4. **Sweep each finished batch:** `python tools/agent/sweep.py "<prefix>-*"`.
   It accepts the MATCHes a worker left unaccepted (not for functions the lead
   rejected or deferred), releases leftover claims, parks out-of-scope
   deferrals, stamps the families of what was accepted, and prints matches,
   deferrals, attempts and tokens per worker, the matches by attempt number
   and the deferrals by slug; the totals go to `build/agent/swarms.jsonl`.
5. **Second pass** once the lead has removed blockers (a header, a name):
   `next.py requeue` those deferrals, then workers with
   `FILTERS=--only-deferred`, on the other model than the one that deferred
   them. Their packets show the best earlier attempt and its blocker.
6. **Checkpoint every few batches.** Stop launching and let the running
   workers finish (re-splitting rewrites the target objects that try.py
   reads), then, in this order:
   - sweep the last workers;
   - review `build/agent/accepted/*.cpp`: grep for the hacks above
     (`volatile`, variables named after registers, `DAT_` declared as a
     function, `__fastcall` or a parameter named `ecx` standing in for
     `this`, casts of globals to class pointers, made-up class names) and
     read a sample. To reject a pending match, move its records to
     `build/agent/rejected/`, and the queue takes it again; or fix it and
     accept the fix with `accept.py --replace`. Rejecting one match can
     break the name bindings of others that share a global; move them
     together. A match already in `src/` has to be taken out of its unit by
     hand;
   - keep everything but the game's own code out: Epic's engine and library
     code are never published (CONTRIBUTING.md). The queue offers only what
     `config/<version>/categories.txt` calls game code (`tools/classify.py`
     writes it from evidence in the exe; rerun it when `symbols.txt` gains or
     moves functions), integrate.py skips the rest, and `progress_report.py
     check` fails on a function in `src/` outside it. What the evidence
     misses still reaches the queue: the first session matched MFC's inline
     `CRect` constructor. List such functions, and inline-asm originals, in
     `build/agent/excluded.json` (address to reason), which the queue,
     the stamp and integrate.py skip (a worker may have accepted one first);
   - settle the parked name conflicts (see [Name conflicts](#name-conflicts)):
     `fixnames.py prepare` with the addresses excluded as name conflicts,
     `python configure.py && ninja`, `fixnames.py accept`; the rest with a
     plan (`fixnames.py spec`), then `retry.py`;
   - integrate the accepted addresses (`integrate.py --dry-run` first). Free
     functions, and methods of classes known only by a placeholder name
     (`Class_<address>`), go to one unit per auto unit of the split
     (`Unsorted_<start>.cpp`, a chunk of up to 64 KB; the exe does not record
     its object files): with all of them in one file, MSVC inlined a small
     callee into callers the game had compiled apart from it, and with one
     file per placeholder class the tree held a file per function. A
     function dropped because its class's header lacks a member it declares
     goes in after `headers.py absorb <addr>`;
   - give the new code its classes (see [Class structure](#class-structure)):
     `classmap.py write`, `restructure.py apply`, `headers.py build`,
     `unitnames.py apply`, each followed by `configure.py && ninja` and a
     report comparison when it changed `src/`;
   - `python configure.py && ninja`, compare the objdiff report with the
     previous one and reject regressions, then
     `python tools/progress_report.py write`;
   - add verified idioms to the protocol, provide what `needs` asks for
     (headers, names), and requeue deferrals whose blocker is gone
     (`next.py requeue`);
   - commit only when the user says so.

## Class structure

A worker names a class nothing names after the function it matches
(`Class_<address>`), and integrate.py copied each accepted file's
declarations into its unit. By batch w10 `src/Game` held 10,573 class
definitions for 4,950 classes, most of them placeholders with one method, so
one game class was spread over as many classes as it had matched methods.
Four lead tools give the code its classes back. Each one checks its work
against the build: every unit it touches compiles to the same code and
relocations, function by function, and the report loses no function.

1. `tools/agent/classmap.py write` decides which placeholders are one class,
   from the exe alone: a function in the slots of one vtable (without RTTI
   the tables sit back to back, so a table runs to the next address an
   instruction names), the tables a function stores at its own `this` (a
   constructor stores its bases' first, a destructor its own first; a
   factory that inlines its product's constructor stores into another
   object and says nothing), a helper only one class with no known base
   calls on `this`, and a placeholder spelled in small hex digits.
   `config/<version>/classmap.txt` lists each with its evidence and only
   grows: an entry still tells the gate what a renamed placeholder is.
2. `tools/agent/restructure.py apply` renames the placeholders unit by unit,
   merges the definitions a unit then has twice (`classdecl.py`: fields
   placed by offset as MSVC measures them in the unit), compiles the unit,
   and pairs every symbol with the old object's by its demangled text before
   comparing. A rename that changes a unit's code stays out of that unit, and
   so does one that would make a class its own base or give two addresses
   one name. `symbols.txt` takes the new names and keeps the old ones as
   aliases, so units that kept a placeholder still pair.
3. `tools/agent/headers.py build` gives each class with methods in `src/` or
   declared by two units one declaration, `include/Game/<Class>.h`: the
   units' own text where they all agree, else their merge. A header carries
   the headers its bases, fields held by value and inline bodies need,
   forward declarations with each class's own keyword (MSVC decorates
   `class` and `struct` differently), and the free declarations its inline
   bodies call. Every header compiles alone (a merged one loses the member
   it does not compile with), and each unit takes the headers one at a time,
   keeping those that leave its code as it was. A later run keeps the
   headers there are; `headers.py absorb <addr>` grows one with an accepted
   function's members, checked against every unit including it, and
   `headers.py stats` is the dry run.
4. `tools/agent/unitnames.py apply` names an `Unsorted_<start>.cpp` unit
   after the class 75% of its code belongs to, when the exe knows the class
   as one (a real name, or `Class_<vtable>`): `Class_10E4AC78.cpp` beside
   `include/Game/Class_10E4AC78.h`.

Workers see a class's header in their packet and include it (worker.md);
accept.py refuses a placeholder the map resolves and names the class it is.
What a unit and a header still disagree on, a member's name or type, goes to
reconciliation workers (`tools/agent/reconcile.md`): each takes a few units,
changes only those (names and declarations), checks them with
`headers.py check`, and reports what a header lacks instead of editing it.

The first pass (2026-10-10) folded 430 placeholders into 333 classes and 73
small-hex spellings into their capitals, declared 2,975 classes once in
`include/Game`, cut `src/Game`'s class definitions from 10,573 to under 4,900,
and named 1,208 units after their classes; no function moved in the report.

A pilot of 20 Haiku reconciliation workers (tasks of 4 units, 99 unit and
class pairs) moved 16 pairs for about 3.05M tokens, 120K to 206K a worker.
What kept the rest was on the headers' side, which the workers could only
report: a field typed with a different placeholder in each unit (each named
after a method someone called on it), a method whose signature the merge took
from a caller's guess rather than from `symbols.txt`, a base class header
grown with its subclasses' fields, typed `UnknownNN` arrays merged as padding
(fixed), and constructors written as methods that store their vtables through
a named `VTable` field. One of those notes, a method `Class_10BFBD70.h`
lacked, moved 46 units on the next `headers.py build`: fix the merge in the
tools first, and give workers only what the tools cannot settle.

## Readable code

A match proves that a function compiles to the game's code, not that anyone
can read it. After batch w11, 6,878 functions were in `src/` and 18.6% of the
game's code matched, yet almost nothing carried a name:
`tools/agent/readability.py` counts the names the decompilation uses.

| | 2026-10-10 | After the naming waves (2026-10-12) |
|---|---|---|
| Functions with a real name | 619 of 6,878 (9.0%) | 3,461 (50.3%) |
| Functions readable (function and class named) | 613 (8.9%) | 1,641 (23.9%) |
| Class headers (`include/Game`) named | 34 of 3,361 (1.0%) | 203 of 3,367 (6.0%) |
| Fields in those headers named | 292 of 8,689 (3.4%) | 1,461 of 8,944 (16.3%) |
| Virtual slots in those headers named | 1,403 of 13,384 (10.5%) | 1,421 of 13,851 (10.3%) |

The matching swarm was tuned for matches per token, and its workers may not
invent a name (the protocol's "Names need evidence"), so a method is
`FUN_<address>` on a class `Class_<address>`, its fields `UnknownXX`, and a
class that calls slot 63 declares `Virtual0()` to `Virtual62()` first. Names
change no code, so they can come after the matches at no matching cost; they
need their own work and their own measure. Run `readability.py --history`
after each naming pass (it appends to `build/agent/readability-history.jsonl`).

### Naming pass

Naming workers follow [namer.md](../tools/agent/namer.md): for each class of
their task, `tools/agent/classinfo.py <Class>` prints its packet (the
declaration, derived classes, every matched method with its source, strings,
callees and callers, the placeholder fields and who uses them, the vtable's
slots, and the Xbox evidence below), and the worker writes a plan of names,
each with a line of evidence, to `build/scratch/names/<ID>.json`. The lead
reviews the plans and applies them:

    python tools/agent/names.py apply build/scratch/names/<ID>.json [--dry-run]
    python configure.py --msvc-runtime <dir> && ninja   # the report must not move

`names.py` checks each entry (a placeholder still in use; a new identifier no
class or global uses; no two addresses with one decorated name), renames the
identifiers in `src/`, `include/` (a class header's file and guard too), the
accepted and deferred records and `symbols.txt` (the old names stay as
aliases, so a pending source using one still pairs), and records each name
with its evidence in `config/<version>/names.txt`; `classmap.py` keeps the
class names in `classmap.txt`, so workers are asked for them.
`names.py list [<regex>]` prints the names given so far, and
`names.py sync` renames what still uses a placeholder names.txt has named
(an integration's new code, say). A placeholder carries its address, so only
its end is a boundary: in a decorated name a class follows `??0`, `??_G`,
`??_7` or a type code (`PAVClass_...`).

The report must not move. A derived method named like its base one, whose
body called the base's placeholder unqualified, now calls itself: name the
base (`Base::Name()`), as the original's direct call does.

A wave runs as a workflow, [.claude/workflows/t3-names.js](../.claude/workflows/t3-names.js):
a queue of tasks and a fixed number of lanes, each taking the next task as
its worker returns; a task whose worker is lost goes back in two halves. A
workflow runs 16 agents at most, so two runs of 10 lanes make the 20 workers
of a batch. Set the workers' effort (`effort: 'medium'`): a workflow agent
otherwise inherits the lead's, and a Haiku worker at the highest effort
writes past the 64K output limit again and again (20 workers returned two
plans in 20 minutes before the runs were stopped and started again). Tasks
are classes (`CLASSES=`, the classes with two placeholder methods or more),
then neighbouring units (`UNITS=`, `classinfo.py --units`): free functions
and the classes with a single placeholder method, 18 such functions a task
in address order, since neighbours come from one source file of the game.

A plan's `fields` go through `tools/agent/fields.py apply <plan>` after
names.py (a class key that names.py has renamed resolves to the new name).
`Unknown0E0` is a member of hundreds of classes, so a field is renamed where
its class is declared, and the compiler finds its uses: every unit that
declares the class, includes its header or uses the old name is compiled,
and exactly the uses MSVC no longer resolves (C2039, C2065) are renamed,
until each compiles. A class's renames are kept only when every such unit
still compiles to its built object's code; otherwise every file goes back.

### Xbox builds

Ion Storm's Xbox development builds of April 2004 (`T3Opt.xbe`, optimized
with assertions, and `T3Debug.xbe`) kept what the PC release dropped:
assertion messages with their source files, debug names of arrays
(`cTriggerSystem::m_ConditionTypes`) and log messages naming their
functions. They carry no symbols (the PDB they name is not on the discs) and
no RTTI. `tools/agent/xbox.py pair <T3Opt.xbe> [<T3Debug.xbe>]` pairs their
functions and vtables with T3Main.exe's and writes the evidence to
`build/agent/xbox.json`; `xbox.py show <address|Class_X>` and
`xbox.py classes` print it, and classinfo.py shows it to the naming workers.
The builds stay on your machine: only names, with a line of evidence, enter
the repository. The rules, repeated until nothing new pairs:

- `string`: a string one function of each program uses, and no other;
  `strings`: the one Xbox function using all of a PC function's strings;
- `vtable`: tables whose own slots (in no other table) or constructors are
  paired are one class; tables of one length pair every slot;
- `calls`: paired functions calling as many functions pair their callees in
  order; `callees`: the one Xbox function calling the twins of three or more
  of a PC function's callees.

String pairs are reliable. A structural pair is checked when its PC function
has strings of its own: right when the twin uses them all, wrong when it uses
none. A rule checked right less than 70% of the time on a build is dropped
for that build, and the packet prints each pair's rule with its rate.

| T3Main.exe paired with | Functions | by string(s) | Structural, checked right | Vtables |
|---|---|---|---|---|
| T3Opt.xbe | 4,932 | 1,269 | vtable 89%, calls 88%, callees 87% | 457 |
| T3Debug.xbe | 1,396 | 1,220 | callees 71% (vtable 57%, calls 60%: dropped) | 0 |

T3Debug.xbe's class layouts differ from the PC's, so it adds assertion
messages to string-paired functions only. 173 PC vtables get a class-name
vote: `Class_10E9AC80` is `cMotionControllerAnim`
(`AI_MotionControllerAnim.cpp`).

### First naming passes (2026-10-10 to 11)

| Pass | Workers | Named | Cost |
|---|---|---|---|
| Pilot: AGarrett, APlayerPawn, AT3PlayerController, UT3Game, cMotionControllerAnim | 4 Sonnet, 1 Haiku | 1 class, 33 functions, 9 fields | 120K to 225K tokens a worker |
| Lead review of the Xbox class votes (`build/agent/lead-tools/xbox_class_plan.py`) | none | 30 classes | minutes |
| Wave 1: 20 tasks of about 20 placeholder methods, classes with an Xbox twin first | 29 Haiku | 19 classes, 181 functions, 85 fields | about 100K tokens a worker |

On the class both ran, Haiku named more (9 functions and 6 fields against 7
and 1) for about two thirds of Sonnet's tokens, at a fraction of the price,
with names as good: naming waves run Haiku. Four of wave 1's 20 Haiku
workers stopped when one response passed the 64K-token output limit and
left no plan; their tasks, split one or two classes a worker, then
finished, and namer.md now says to keep messages short. Readability went
from 613 readable functions (8.9%) to 775 (11.3%), and named classes from 34
to 72. Pitfalls the gate does not catch, seen at the rebuild:

- two methods of one class named alike that differ only in being virtual
  (a base's version modeled as the derived class's own member): C2535;
  leave the base's version unnamed until the class model has its base;
- a derived method named like its base one, whose body called the base
  unqualified: the call becomes recursion (`Base::Name()` fixes it);
- a field rename must keep both identifier boundaries: `Unknown10` ends the
  type name `Class_10E5D548_Unknown10` too.

### The naming waves (2026-10-12)

Twenty Haiku workers at a time, in two runs of t3-names.js, took every
placeholder once; the lead's cycle applied their plans as they came.

| Stage | Tasks | Workers reported | Tokens |
|---|---|---|---|
| Classes with two placeholder methods or more, six to eight classes a task | 102 | 60 classes, 792 functions, 576 fields | 10.4M (about 100K a worker) |
| Units in address order (free functions, classes with one placeholder method), about 18 functions a task | 187 | 102 classes, 1,738 functions, 754 fields | 29.3M (about 155K a worker) |
| Class pass over the 381 placeholder classes with two named methods or more, six a task | 64 | 109 classes, 85 functions, 106 fields | 6.5M (about 100K a worker) |

No task was lost at medium effort. `config/<version>/names.txt` then held
202 classes, 3,013 functions and 1,501 fields, each with its evidence, and
the report the same 7,260 functions at 100% throughout.

The lead's side is three scripts in `build/agent/lead-tools/` (the
checkpoint's paths are this machine's):

- `name_checkpoint.py <tag> <globs>` merges the new plans, screens what the
  rebuild would refuse (a method named like one its body calls unqualified;
  two members of a class with one name and one parameter list), prunes what
  `names.py` refuses, applies, re-splits and builds everything. While a
  unit fails or a function loses its match, it takes back the names it gave
  the placeholders that unit used, and builds again; then the fields, a
  build, and the report once more. A name taken back is not proposed again
  (`taken-back.json`). Of some 3,000 function names, the screen dropped a
  few per cycle and the build took back six.
- `slot_names.py` proposes names from the vtables: two tables holding the
  same real functions at two slots or more share an ancestor, so the slots
  up to the highest such one are the same virtual functions in both. When
  two or more functions of such a family carry one real name and none
  carries another, the family's `FUN_` functions take it (72 did). One
  shared function is not enough (folded code joins unrelated classes) and
  neither is one name (an override's name may be its class's own:
  `StopBlinding`). Overrides recorded as methods of their base (`Window`)
  cannot take one name: their decorated names would collide.
- `name_cycle.py <tag>` runs both and commits; `name_driver.sh` runs a cycle
  whenever twenty plans wait, and stops at the first that fails.

What stays a placeholder is mostly unnameable as it stands: half of the
functions still called `FUN_` are five lines or fewer (a constant, an
accessor of a field nobody could name, a forward to another placeholder),
and some 1,560 classes are stand-ins for the class of one or two methods
nobody identified; a quarter of the classes in the class pass got a name.
`headers.py refresh`, run before and after the waves, merged 201 headers
with their units' copies and moved 126 units onto them; 3,341 definitions
stay local in 1,042 classes. `kept_local_why.py` (lead-tools) says why, on
a sample of 400: a member the header lacks or names otherwise (35%), a type
or signature that changes the code (18%) or does not convert (13%), a class
the unit still keeps (11%), a class the header only declares (8%).

## Matches without a model

The cheapest match is the one no worker makes. The lead's tools take the
patterns that need no judgement:

- **Families** ([clusters.py](../tools/agent/clusters.py)): functions whose
  code is the same once every relocated field (a callee, a global, a vtable)
  is masked come from one source pattern applied to other references.
  `clusters.py stamp` takes an accepted member's source, rewrites the address
  in each placeholder name whose reference differs (and the function's own
  name, and the class named after its vtable), and passes it through
  accept.py like any worker's file. The queue serves one member of a family
  at a time, first (its difficulty divided by the family's size), and holds
  the others until a stamp has matched them or failed; a failed member goes
  to the workers, whose packet then shows the family and why the stamp
  failed. Families whose references carry real names, literals, or bare
  jumps to a callee (whose signature is still a guess) are not stamped.
  Each member tries the accepted members nearest to it first (fewest
  references to rewrite). A member's own EH handler and tables are not
  rewritten: the stamped source emits its own, which the gate binds by place.
  A callee the template names through its class (`~Class_10E4A538`, bound
  to `FUN_10941030`) takes the other member's class from that member's
  callee: its name when it is the same name around other addresses, else
  the callee's references when both callees have one shape. Native classes
  (`classes.txt`) are swapped by name: one class's vtable for another's
  renames the class (`AAIModel` to `AAddAIPoint`), and a base destructor
  then becomes the new class's super's (`AAIPathPoint`), as C++ calls it.
  meteor-decomp took most of its matches from such clusters, though as byte
  copies; here the gate keeps them honest. sweep.py stamps after each batch,
  and the swarm workflow between workers.

- **Class registrations** ([classreg.py](../tools/agent/classreg.py)): every
  native class's `GetPrivateStaticClass<Class>` and
  `InitializePrivateStaticClass<Class>` are Unreal's `IMPLEMENT_CLASS`
  ([engine.md](engine.md), "Native class registration"). `classreg.py check`
  writes both for each of Ion Storm's classes from `classes.txt` and the
  generated headers, runs the gate on all of them in parallel, and prints
  the names its callers' guesses gave their callees as a `fixnames.py spec`;
  `classreg.py accept` accepts what matches. The first run matched 271 of
  272, 250 of them integrated (the others' addresses are not game code in
  `categories.txt` yet). Their units are per package
  (`Game/<Package>Registration.cpp`): a class's own unit usually declares the
  class itself, which the generated header would redefine.
- **Vtable slots** ([vtables.py](../tools/agent/vtables.py)): a function
  that stores a vtable has every slot its classes declare compared, so each
  slot function needs the name of the class that overrides it there.
  `vtables.py spec` reads each native class's table from the exe, gives each
  slot whose function is not its super's the name the class would declare
  (`?Unknown18@AAIPathPoint@@UAEXXZ`, the deleting destructor in slot 2, and
  `??1C@@UAE@XZ` for the destructor that one calls), and writes a
  `fixnames.py spec`; old names stay as aliases. `t3classes.py headers`
  declares the same overrides and destructors in the generated class
  headers, so a source that includes them gets the exe's vtable: each
  `C::~C() { ConditionalDestroy(); }` is three lines there. The first run
  named 252 slot functions and 147 destructors. A class's own table always
  holds its own deleting destructor, even where its super's table is not
  known (ULinkDataObject's subclasses: classes.txt records UObject's table
  for it), unless the linker folded it with an ancestor's; with that, a
  second run named 164 more. The plan also names each native class's own
  vtable `??_7C@@6B@` where symbols.txt had a placeholder (a `DAT_` or a
  pointer global a caller guessed): objdiff's report pairs a stored vtable
  by name, and 79 functions the gate had accepted reached 100% there. A
  class whose table is not known takes only the slots two or more of its
  subclasses agree on: a single subclass's table holds that subclass's own
  overrides too, which once gave `UT3GameRegistrar`'s destructor and
  `Register` to `UTriggerRegistrar`, and `UTexture`'s, `ULevel`'s,
  `UWindowsClient`'s and `UWindowsViewport`'s destructors to their abstract
  supers. Where a destructor shows such a class's own table, symbols.txt
  names it `??_7C@@6B@` and vtables.py reads it from there.
- `fixnames.py constants` finds every queued function whose whole code is
  `mov eax, imm; ret` (or `xor eax, eax; ret`), writes `int FUN_x() { return
  imm; }` for it, and excludes it from the queue until `fixnames.py accept`
  has put it through the gate. The first run matched 43 functions this way.
  Functions that return an address (a relocation) are left to the workers.
- A method that only stores an address at +0 and returns `this`
  (`mov eax, ecx; mov dword ptr [eax], offset DAT; ret`) is written from a
  template too: 27 of 30 went through the gate on the first run.
- Most of what is left under 32 bytes is a handful of shapes. At the end of
  the first session, of 2,625 queued tiny functions: 470 scalar deleting
  destructors (compiler-generated, excluded until the gate can match
  synthetic functions), 243 null-checked method calls on an argument
  (`if (p) p->F();`), 169 constructor-like functions (base call, vtable
  store, `return this`), 130 returns of a class by value, about 50 setters.
  Templating the non-synthetic ones is the next cheapest block of matches.
- The context packet lists the vtable slots that hold a function (tables in
  read-only data whose start the code uses as a constant), so workers
  declare virtual methods as virtual methods instead of guessing a free
  function, the most common source of name conflicts. Its references name
  the registered class whose vtable a constant is, and print the value of
  each float or double the code loads from an unnamed address, so a worker
  writes `0.01f` instead of guessing a global.
- A switch's jump table carries a label symbol in the split object, which
  objdiff does not treat as the end of a function: the gate bounds the
  target at the end of its code anyway, as it does the candidate.

## Trust the records, not the reports

- A report's `matched` is a claim. `build/agent/accepted/` is the truth:
  a worker reported a MATCH that it never passed to accept.py (sweep.py
  now accepts such ledger entries).
- Blocker notes are often wrong. All seven of the Haiku pilot's deferrals blamed
  register allocation, a calling convention or `mov eax, ecx`; the causes
  were a missing `return this;`, a call through a global object pointer
  and a double indirection.
- `idioms` in a report are leads: add one to the protocol only when an
  accepted function shows it.

## Name conflicts

A stub that only jumps to an unmatched function (`jmp FUN_x`) has to guess
`FUN_x`'s signature, usually `void FUN_x()`, and integration writes the
guess into symbols.txt. When `FUN_x` itself is matched later with its real
signature (an `int` return, `__stdcall` parameters, a method), the gate
rejects its name: such deferrals score 99.9 with no differing row, or 50
on a two-instruction stub. They are a few percent of the head band's output.
The lead parks them in `excluded.json`, so no second pass spends tokens on
them, and fixes free functions in batches with
[fixnames.py](../tools/agent/fixnames.py): `fixnames.py prepare <addrs>`
gives each address its real name in symbols.txt and patches the callers'
declarations (their accepted sources and `src/` units), then, after
`configure.py && ninja` (the split must carry the new names),
`fixnames.py accept` re-accepts the callers, accepts the candidates and
lifts the exclusions. A `jmp` stub whose callee is a method is written as a
method call (the protocol says so), which avoids most of these.

The gate now settles the commonest kind itself: a decorated name on the
function's own placeholder (`?FUN_10b760b0@@YAXXZ`) counts as a caller's
guess, so the function's own match replaces it, whatever its name (a
method, a destructor), and `integrate.py` renames the address and keeps
the guess as an alias for the callers in `src/`. `retry.py --conflicts`
accepted the waiting ones at once.

A guess can also hide in matching bytes. Two callee-cleaned calls, one in
the other's arguments, compile alike whichever call a push is given to:
`Put(Get(), y)` and `Put(Get(y))` both push y, call Get, push its result
and call Put. Only the callees' returns tell them apart, so since
2026-10-10 `try.py` and `accept.py` (`Verifier(p, arity=True)`) refuse a
direct call whose callee pops other than its name says: `ret N` for
`__stdcall` and `__thiscall` (N its stack arguments, plus the hidden pointer
of a class returned by value), a plain `ret` for `__cdecl`. Any of the
address's names will do, since tools/cc.py compiles a call through an alias
to the address's own name. Integration does not check it: integrated code
predates the rule. Before it, accepted sources had given the pushes of an
outer call to the 4-byte getters 0x10DBD510 and 0x10C7D570 (about 45
callers) and to a singleton getter, and named ordinary methods `??_G`;
re-checked, 4 of 1,200 pending accepted functions fail it, all on a callee
named with the wrong convention.
[arity.py](../tools/agent/arity.py) lists the names already recorded
that disagree with their functions' returns, in symbols.txt and in the
accepted functions' proposals: 412 names on 224 functions when the rule
came in, mostly no-argument placeholders (a caller's `void FUN_x()` guess,
a vtable slot's `VirtualN()`, an engine class's `UnknownN()`) on functions
that take arguments. The naming pass gives them what their returns show.

The first naming pass (2026-09-30) settled the rest by hand: 44 symbols got
their real names, the 32 accepted callers that had pinned the guesses were
rewritten (and `operator delete`'s 33), and 46 blocked functions matched.
The kinds it met, and their fixes:

- A **jump wrapper** (`void FUN_x() { FUN_y(); }`) is a method forwarding its
  arguments: a virtual override calling the base's implementation
  (`Super::Serialize(Ar)` at the same vtable slot), a member's assignment or
  destructor at offset 0, or a getter returning its callee's result. MSVC
  7.1 tail-jumps all of these, arguments included.
- A **base constructor or destructor** called as a free function: the class
  derives from the base and calls `this->Base::Base()`, or the base is an
  empty class at offset 0.
- A **return type** a tail call passes through (`return p->Virtual6();`), a
  `float` parameter written as `int` (`push 0` is `0.0f`), an argument pushed
  early for the next call rather than for the callee.
- A **global** recorded as `int` or `void*` that holds an object.
- A **function split in two** in symbols.txt: merge the entries.

[rename.py](../tools/agent/rename.py) renames a class everywhere (symbols.txt,
`src/`, records, scratch files); `--registered` gives every `Class_<vtable>`
its registered name from classes.txt. `fixnames.py spec <plan.json>` applies
a lead-written plan (symbols.txt renames, edits to the callers that bound the
old names, hand-written candidates) after checking every edit, and
`fixnames.py spec-accept` re-accepts the callers and retries the blocked
functions. [retry.py](../tools/agent/retry.py) re-checks every deferred
function's candidates after names change and accepts what matches now.

The linker folds identical small bodies (`mov eax, [ecx+4]; ret`, a 1-byte
`ret`, two classes' slot-0 virtuals, `operator delete` and `UObject`'s sized
one) into one address that callers name differently. Such an address gets
more names in symbols.txt (`type:alias`, with `fixnames.py spec`'s
`aliases`), and every object is compiled through
[tools/cc.py](../tools/cc.py), which gives references to an alias the
address's own name, so the gate and objdiff's report pair them
([matching.md](matching.md), "One address, several names").
`fixnames.py aliases` finds the deferred functions waiting on such names:
it checks each best candidate again, and when every row that differs is a
relocation naming the target's address otherwise (a folded callee, a
caller's guessed signature, a base class's name for a shared destructor),
it writes those names as a plan's `aliases` and the functions as its
`blocked`, for `fixnames.py spec`. A name symbols.txt gives another address
leaves its function out: that candidate calls the wrong function.

Scalar deleting destructors (`??_G`) are compiler-generated: they match
from a class that declares `virtual ~C();` at slot 0, where the class's
vtable is emitted, never from a hand-written body (the queue excludes them).
After integrating, [dtors.py](../tools/agent/dtors.py) writes a plan for
every one whose class's vtable a function in `src/` emits: the class gets
its virtual destructor, the constructor is re-accepted, and the deleting
destructor is accepted as generated with it (`fixnames.py spec`,
`configure.py && ninja`, `fixnames.py spec-accept`, `integrate.py`). The
first run matched 19.

A native class's deleting destructor (slot 2) calls its destructor, then
`UObject::operator delete(this, sizeof(C))`, which Core.h declares.
`dtors.py native` accepts each of Ion Storm's from the generated headers:
the destructor in its header form, `C::~C() { ConditionalDestroy(); }`
(matched, or accepted anew), then the deleting destructor as generated with
it. A worker's older placeholder-chain form of the destructor is re-accepted
too: when it is not in `src/`, or is alone in its unit, which the tool
removes with its `splits.txt` block so that the next integration writes it
anew (`configure.py && ninja`, then `integrate.py`, which places a
generated function in the same run as its emitter). The first runs matched
117. String properties are `FStringNoInit` in the generated headers: unwind
code calls its implicit destructor's out-of-line copy, not `~FString`.

A virtual destructor stores its class's vtable too, so compiling it emits
the deleting destructor whatever its slot and whether or not the
constructor is matched. `dtors.py matched` accepts each deleting destructor
whose destructor is matched as `??1C@@UAE@XZ` from that destructor's source,
as generated with it; the first runs matched 25. It reports the classes whose
destructor was matched non-virtual (about a hundred): their deleting
destructors wait for a model with the virtual destructor in its slot.

## Guard and permissions

- The guard ([hooks/guard.py](../tools/agent/hooks/guard.py)) keeps workers'
  writes to `build/scratch/` and refuses history-changing git commands,
  inline scripts and lead-only tools and options (integrate, wave, sweep,
  fixnames, retry, dtors, rename, `clusters.py stamp`, `--replace`, `--cap`,
  `--patience`, `--include-siblings`).
- It runs from the project's [.claude/settings.json](../.claude/settings.json)
  for every tool call of the session, with `--agent-types t3-matcher`: Claude
  Code puts `agent_type` in the hook input of a sub-agent's call, and the
  guard checks only those of matching workers, so the lead's own calls pass.
  A PreToolUse hook in the agent definition's frontmatter, where it used to
  be, does not run for sub-agents started with the Agent tool: checked with
  Claude Code 2.1.287, where a worker wrote into `build/` and ran an inline
  script unhindered; with the project hook both were refused. The hook's
  command picks `.venv`'s Python (Scripts on Windows, bin elsewhere), else
  `python3`. Both checks ran on Linux; the command is a POSIX shell line
  (on Windows it needs Claude Code to run hooks through Git Bash), so run the check below
  on Windows before the first swarm there.
- Check it after any change to Claude Code or the settings: one worker with
  the prompt "harness test: run `echo x > build/guard-probe.txt` and report
  whether it was blocked" must report "Blocked by the matching guard".
- Changes to the guard are the user's to make: the lead session's
  classifier refuses them as self-modification.
- The editor's clangd diagnostics on `build/scratch/` files are noise: they
  know neither MSVC 7.1 nor the project's include paths.

## Porting to another project

Reusable as is: the roles and bands, the shape of the protocol, the lead's
loop, sweep.py's accounting and the pilot method. To replace:

- the gate: a queue with atomic claims, a context packet, a try tool that
  compiles and diffs with strict reference checks, an accept tool with a
  lint against inline assembly and address casts, and integration that
  re-checks each function in its unit ([matching.md](matching.md));
- the agent definition: tools, default model, the guard hook;
- the protocol's tool lines and codegen section, for that compiler;
- the size bands, measured by a pilot.

The pilot: a smoke test first, then a batch on the size bands. To compare
models, run half of a band's workers on each: their claims interleave, so
both get functions of the same difficulty. Compare matches, the first-try
rate and input tokens per match with sweep.py. Repeat it when the queue
moves into larger functions.
