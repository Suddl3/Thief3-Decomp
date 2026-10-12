export const meta = {
  name: 't3-match',
  description: 'Keep a fixed number of t3-matcher workers on the matching queue, one model for every band, refilling each slot as it frees, and stamp families as matches land',
  whenToUse: 'The lead runs matching with one cheap model at a steady width (docs/agent-workflow.md, "Batch w10"): two runs of 10 lanes make 20 workers. Then: python tools/agent/sweep.py "<prefix>-*".',
  phases: [
    { title: 'Match', detail: 'workers claim, match and defer through tools/agent; a stamp helper runs between them' },
  ],
}

// args: {
//   prefix: 'y1a',                      worker ids are <prefix>-<band letter><nnn>; never reuse a prefix
//   lanes: 10,                          workers at a time (a workflow runs 16 at most; two runs make 20)
//   workers: 120,                       workers this run starts in all (it ends sooner when every band is empty)
//   model: 'haiku', effort: 'medium',   set the effort: a worker otherwise inherits the lead's
//   python: '.venv/Scripts/python',
//   bands: [{letter: 'u', filters: '--min-size 80 --max-size 159', n: 6, count: 1, cap: 10, share: 3}, ...],
//                                       share: how many of every round of workers take this band
//   stampEvery: 10,                     a stamp helper after every this many workers (0: none)
// }
const A = args || {}
const PREFIX = A.prefix || 'ym'
const LANES = A.lanes || 10
const TOTAL = A.workers || 100
const MODEL = A.model || 'haiku'
const EFFORT = A.effort || 'medium'
const PY = A.python || '.venv/Scripts/python'
const STAMP_EVERY = A.stampEvery === undefined ? 10 : A.stampEvery
const BANDS = A.bands || [
  { letter: 'u', filters: '--min-size 80 --max-size 159', n: 6, count: 1, cap: 10, share: 3 },
  { letter: 'x', filters: '--min-size 160 --max-size 319 --by-class', n: 4, count: 1, cap: 10, share: 1 },
]

const REPORT = {
  type: 'object',
  properties: {
    agent: { type: 'string' },
    matched: { type: 'array', items: { type: 'string' } },
    deferred: { type: 'array', items: { type: 'object', properties: {
      addr: { type: 'string' }, best: { type: 'number' }, why: { type: 'string' } }, required: ['addr'] } },
    needs: { type: 'array', items: { type: 'string' } },
    idioms: { type: 'array', items: { type: 'string' } },
    empty: { type: 'boolean', description: 'true when a claim printed "empty": true' },
  },
  required: ['agent', 'matched', 'deferred'],
}
const STAMPED = {
  type: 'object',
  properties: { stamped: { type: 'number' }, failed: { type: 'number' }, skipped: { type: 'number' },
                note: { type: 'string' } },
  required: ['stamped', 'failed'],
}

// The order workers take bands in: each round holds every band `share` times.
const round = BANDS.flatMap(b => Array.from({ length: b.share || 1 }, () => b))
const empty = new Set()
const counters = {}
const tally = { workers: 0, matched: 0, deferred: 0, stamped: 0, lost: 0 }
const byBand = {}
const needs = new Map()
let started = 0
let sinceStamp = 0
let stamping = false

phase('Match')
log(`up to ${TOTAL} workers, ${LANES} at a time, ids ${PREFIX}-*, ${MODEL} at ${EFFORT} effort; bands ` +
    BANDS.map(b => `${b.letter} (${b.filters}) x${b.share || 1}`).join(', '))

function nextBand() {
  for (let i = 0; i < round.length; i++) {
    const b = round[(started + i) % round.length]
    if (!empty.has(b.letter)) return b
  }
  return null
}

async function stamp() {
  stamping = true
  sinceStamp = 0
  try {
    const r = await agent(
      `From the repository root, run exactly this one command and nothing else: ${PY} tools/agent/clusters.py stamp\n` +
      'It prints JSON whose "summary" holds the counts of stamped, failed and skipped. Return those counts; ' +
      'if the command fails, return zeros and the last line of its error as note.',
      { label: `stamp after ${tally.workers}`, phase: 'Match', model: 'haiku', effort: 'low', schema: STAMPED })
    if (r) {
      tally.stamped += r.stamped || 0
      log(`stamp: ${r.stamped} stamped, ${r.failed} failed${r.note ? ` (${r.note})` : ''}`)
    }
  } catch (e) {
    log(`stamp: ${String(e).slice(0, 80)}`)
  }
  stamping = false
}

async function lane() {
  while (started < TOTAL) {
    if (STAMP_EVERY && sinceStamp >= STAMP_EVERY && !stamping) {
      await stamp()
      continue
    }
    const b = nextBand()
    if (!b) return
    started++
    counters[b.letter] = (counters[b.letter] || 0) + 1
    const id = `${PREFIX}-${b.letter}${String(counters[b.letter]).padStart(3, '0')}`
    let r = null
    try {
      r = await agent(
        `Read tools/agent/worker.md and follow it exactly. ID=${id} FILTERS=${b.filters} N=${b.n} ` +
        `COUNT=${b.count} CAP=${b.cap} PY=${PY}`,
        { label: id, phase: 'Match', agentType: 't3-matcher', model: MODEL, effort: EFFORT, schema: REPORT })
    } catch (e) {
      log(`${id}: ended without a report (${String(e).slice(0, 80)})`)
    }
    sinceStamp++
    if (!r) {
      tally.lost++
      continue
    }
    const band = byBand[b.letter] || (byBand[b.letter] = { workers: 0, matched: 0, deferred: 0 })
    const matched = (r.matched || []).length
    const deferred = (r.deferred || []).length
    tally.workers++
    tally.matched += matched
    tally.deferred += deferred
    band.workers++
    band.matched += matched
    band.deferred += deferred
    if (r.empty && !matched && !deferred) {
      empty.add(b.letter)
      log(`band ${b.letter}: the queue is empty; no more workers for it`)
    }
    for (const x of r.needs || []) needs.set(x, (needs.get(x) || 0) + 1)
    log(`${id}: ${matched} matched, ${deferred} deferred (total ${tally.matched} matched, ${tally.deferred} deferred, ` +
        `${tally.workers} workers)`)
  }
}
await parallel(Array.from({ length: LANES }, () => () => lane()))
if (STAMP_EVERY) await stamp()
const top = m => [...m.entries()].sort((a, b) => b[1] - a[1]).slice(0, 15).map(([k, n]) => (n > 1 ? `${n}x ` : '') + k)
return { prefix: PREFIX, sweep: `python tools/agent/sweep.py "${PREFIX}-*"`, ...tally, byBand,
         emptyBands: [...empty], needs: top(needs) }
