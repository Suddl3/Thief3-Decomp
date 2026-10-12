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
//   tasks: [['ClassA', 'ClassB'], ...], the classes or units of each task
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
const queue = (A.tasks || []).map((items, i) => ({ id: `${PREFIX}-${String(i + 1).padStart(3, '0')}`, items }))

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
const tally = { workers: 0, classes: 0, functions: 0, fields: 0, split: 0, failed: [] }
const short = s => s.replace(/^Game\//, '').replace(/\.cpp$/, '')

phase('Name')
log(`${queue.length} ${KIND.toLowerCase()} tasks, ${LANES} at a time, ids ${PREFIX}-*, ${MODEL} at ${EFFORT} effort`)

async function lane() {
  while (queue.length) {
    const task = queue.shift()
    const r = await agent(
      `Read tools/agent/namer.md and follow it exactly. ID=${task.id} ${KIND}=${task.items.join(',')}\n\n` +
      `Work from the repository root. Write only build/scratch/names/${task.id}.json; do not edit any other file.`,
      { label: `${task.id} ${short(task.items[0])}${task.items.length > 1 ? ` +${task.items.length - 1}` : ''}`,
        phase: 'Name', agentType: 'general-purpose', model: MODEL, effort: EFFORT, schema: REPORT })
    if (!r) {
      // Lost to an error: its classes or units go back in halves, then one each.
      if (task.items.length > 1) {
        const half = Math.ceil(task.items.length / 2)
        queue.push({ id: `${task.id}a`, items: task.items.slice(0, half) })
        queue.push({ id: `${task.id}b`, items: task.items.slice(half) })
        tally.split++
        log(`${task.id}: lost; queued again in two halves`)
      } else {
        tally.failed.push(`${task.id} ${task.items[0]}`)
        log(`${task.id}: lost (${task.items[0]})`)
      }
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
