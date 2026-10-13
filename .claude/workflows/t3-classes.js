export const meta = {
  name: 't3-classes',
  description: 'Run class workers (tools/agent/classer.md): each claims classes the units still declare themselves and moves the units onto the class header, a fixed number at a time',
  whenToUse: 'The lead runs it after tools/agent/adopt.py apply has moved what needs no judgement (docs/agent-workflow.md, "One declaration per class"), then builds, compares the report and runs tools/agent/regroup.py.',
  phases: [
    { title: 'Classes', detail: 'each worker claims classes with tools/agent/classwork.py next and finishes each with done or giveup' },
  ],
}

// args: {
//   prefix: 'c1a',        worker ids are <prefix>-<nnn>; never reuse a prefix
//   lanes: 10,            workers at a time (a workflow runs 16 at most; several runs side by side make more)
//   workers: 40,          workers in all; each does `each` classes, then a fresh one takes its lane
//   each: 3,              classes a worker settles before it reports
//   maxUnits: 12,         a class more units than this declare is left for the lead
//   only: 'build/agent/classwork/only.txt',   optional: hand out only the classes this file lists
//   model: 'haiku', effort: 'medium'          set the effort: a worker otherwise inherits the lead's
// }
const A = args || {}
const PREFIX = A.prefix || 'cw'
const LANES = A.lanes || 10
const WORKERS = A.workers || 20
const EACH = A.each || 3
const MAX_UNITS = A.maxUnits || 12
const MODEL = A.model || 'haiku'
const EFFORT = A.effort || 'medium'
const PY = A.python || '.venv/Scripts/python'

const REPORT = {
  type: 'object',
  properties: {
    id: { type: 'string' },
    done: { type: 'array', items: { type: 'string' }, description: 'classes finished with done' },
    givenup: { type: 'array', items: { type: 'string' }, description: 'classes given up' },
  },
  required: ['id', 'done', 'givenup'],
}
const tally = { workers: 0, done: 0, givenup: 0, unreported: [] }
let next = 0
let dry = 0

phase('Classes')
log(`${WORKERS} workers, ${LANES} at a time, ${EACH} classes each, ids ${PREFIX}-*, ${MODEL} at ${EFFORT} effort`)

async function lane() {
  while (next < WORKERS && dry < LANES) {
    const id = `${PREFIX}-${String(++next).padStart(3, '0')}`
    let r = null
    try {
      r = await agent(
        `Read tools/agent/classer.md and follow it exactly. ID=${id}\n\n` +
        `Settle ${EACH} classes, one after the other, then report. Claim each with:\n` +
        `    ${PY} tools/agent/classwork.py next --id ${id} --max-units ${MAX_UNITS}` +
        `${A.only ? ` --only ${A.only}` : ''}\n` +
        `Work from the repository root.`,
        { label: id, phase: 'Classes', agentType: 'general-purpose', model: MODEL, effort: EFFORT, schema: REPORT })
    } catch (e) {
      tally.unreported.push(id)
      log(`${id}: ended without a report (${String(e).slice(0, 80)})`)
      continue
    }
    if (!r) continue
    tally.workers++
    tally.done += (r.done || []).length
    tally.givenup += (r.givenup || []).length
    if (!(r.done || []).length && !(r.givenup || []).length) dry++   // nothing left to hand out
    log(`${id}: ${(r.done || []).join(', ') || 'none'} done, ${(r.givenup || []).length} given up ` +
        `(total ${tally.done} done, ${tally.givenup} given up, ${tally.workers} workers)`)
  }
}
await parallel(Array.from({ length: LANES }, () => () => lane()))
return { prefix: PREFIX, ...tally }
