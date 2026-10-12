export const meta = {
  name: 't3-names',
  description: 'Run naming workers (tools/agent/namer.md) over tasks of classes or units, a fixed number at a time, refilling each slot as it frees',
  whenToUse: 'The lead runs a naming wave (docs/agent-workflow.md, "Naming pass") over tasks from build/agent/lead-tools/name_tasks.py or name_unit_tasks.py, then applies the plans in build/scratch/names/.',
  phases: [
    { title: 'Name', detail: 'each worker reads its packets and writes build/scratch/names/<ID>.json' },
  ],
}

// args: {
//   prefix: 'w2a',                      worker ids are <prefix>-<nnn>; never reuse a prefix
//   kind: 'CLASSES',                    or 'UNITS': what a task lists (namer.md has both)
//   tasks: [['ClassA', 'ClassB'], ...], the classes or units of each task; or, for a long list of units,
//   queue: 'build/scratch/names/queue-ua.json', sizes: [8, 7, ...]   the file (a JSON list of unit lists) and
//                                       each task's number of units: a worker's UNITS is then `@<file>:<n>`,
//                                       which classinfo.py --units reads
//   lanes: 10,                          workers at a time (a workflow runs 16 at most; two runs make 20)
//   model: 'haiku',                     the pilot's verdict: Haiku names more per token than Sonnet
//   effort: 'medium',                   set it: a worker otherwise inherits the lead's effort, and at the
//                                       highest a Haiku worker writes past the output limit and takes
//                                       three times as long
// }
const A = args || {}
const PREFIX = A.prefix || 'nw'
const KIND = A.kind === 'UNITS' ? 'UNITS' : 'CLASSES'
const LANES = A.lanes || 10
const MODEL = A.model || 'haiku'
const EFFORT = A.effort || 'medium'
const ident = i => `${PREFIX}-${String(i + 1).padStart(3, '0')}`
const queue = A.queue
  ? (A.sizes || []).map((size, i) => ({ id: ident(i), n: i + 1, from: 0, to: size, items: [`@${A.queue}:${i + 1}`] }))
  : (A.tasks || []).map((items, i) => ({ id: ident(i), items }))

const REPORT = {
  type: 'object',
  properties: {
    id: { type: 'string' },
    classes: { type: 'number', description: 'classes named' },
    functions: { type: 'number', description: 'functions named' },
    fields: { type: 'number', description: 'fields named' },
    skipped: { type: 'number', description: 'placeholders left' },
  },
  required: ['id', 'functions'],
}
const tally = { workers: 0, classes: 0, functions: 0, fields: 0, split: 0, failed: [], unreported: [] }
const short = s => s.replace(/^Game\//, '').replace(/\.cpp$/, '')

phase('Name')
log(`${queue.length} ${KIND.toLowerCase()} tasks, ${LANES} at a time, ids ${PREFIX}-*, ${MODEL} at ${EFFORT} effort`)

function work(task) {
  return agent(
    `Read tools/agent/namer.md and follow it exactly. ID=${task.id} ${KIND}=${task.items.join(',')}\n\n` +
    `Work from the repository root. Write only build/scratch/names/${task.id}.json; do not edit any other file.`,
    { label: task.n ? `${task.id} units ${task.from}-${task.to}`
        : `${task.id} ${short(task.items[0])}${task.items.length > 1 ? ` +${task.items.length - 1}` : ''}`,
      phase: 'Name', agentType: 'general-purpose', model: MODEL, effort: EFFORT, schema: REPORT })
}

// A task lost to an error goes back in halves, then one class or unit each.
function requeue(task) {
  if (task.n && task.to - task.from > 1) {
    const mid = task.from + Math.ceil((task.to - task.from) / 2)
    const piece = (id, from, to) => ({ id, n: task.n, from, to, items: [`@${A.queue}:${task.n}[${from}:${to}]`] })
    queue.push(piece(`${task.id}a`, task.from, mid), piece(`${task.id}b`, mid, task.to))
  } else if (!task.n && task.items.length > 1) {
    const half = Math.ceil(task.items.length / 2)
    queue.push({ id: `${task.id}a`, items: task.items.slice(0, half) })
    queue.push({ id: `${task.id}b`, items: task.items.slice(half) })
  } else {
    tally.failed.push(`${task.id} ${task.items[0]}`)
    log(`${task.id}: lost (${task.items[0]})`)
    return
  }
  tally.split++
  log(`${task.id}: lost; queued again in two halves`)
}

async function lane() {
  while (queue.length) {
    const task = queue.shift()
    let r = null
    try {
      r = await work(task)
    } catch (e) {
      // The worker ended without its report (its plan is usually written): the lane goes on.
      tally.unreported.push(task.id)
      log(`${task.id}: ended without a report (${String(e).slice(0, 80)})`)
      continue
    }
    if (!r) {
      requeue(task)
      continue
    }
    tally.workers++
    tally.classes += r.classes || 0
    tally.functions += r.functions || 0
    tally.fields += r.fields || 0
    log(`${task.id}: ${r.classes || 0} classes, ${r.functions || 0} functions, ${r.fields || 0} fields ` +
        `(total ${tally.functions} functions, ${tally.workers} workers, ${queue.length} tasks queued)`)
  }
}
await parallel(Array.from({ length: LANES }, () => () => lane()))
return { prefix: PREFIX, plans: `build/scratch/names/${PREFIX}-*.json`, ...tally }
