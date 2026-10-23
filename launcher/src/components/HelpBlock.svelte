<script lang="ts">
  // Play's Help block: report a problem, collect the logs a report needs, and
  // T3SDK.log folded away for whoever wants to read it.
  import Icon from "./Icon.svelte";
  import { api } from "$lib/api";
  import { app, guard } from "$lib/app.svelte";
  import { collectLogs, reportProblem } from "$lib/diag";

  let log = $state<string[]>([]);
  let collecting = $state(false);
  let view = $state<HTMLPreElement>();

  async function load() {
    log = (await guard(api.readSdkLog(200))) ?? [];
    queueMicrotask(() => {
      if (view) view.scrollTop = view.scrollHeight;
    });
  }

  async function collect() {
    collecting = true;
    await collectLogs();
    collecting = false;
  }
</script>

<section class="card block">
  <h2>Help</h2>
  <p class="muted">Something wrong? Tell us what you were doing, and attach the logs.</p>
  <div class="row">
    <button class="btn small" onclick={reportProblem}><Icon name="bug" size={14} />Report a problem</button>
    <button class="btn small ghost" onclick={collect} disabled={collecting}>
      <Icon name="download" size={14} />{collecting ? "Collecting…" : "Collect logs"}
    </button>
  </div>
  <details
    ontoggle={(e) => {
      if (e.currentTarget.open && app.config?.gameDir) void load();
    }}
  >
    <summary>T3SDK.log</summary>
    {#if log.length}
      <pre bind:this={view}>{log.join("\n")}</pre>
      <div class="row">
        <button class="btn small ghost" onclick={load}><Icon name="refresh" size={13} />Refresh</button>
        <button class="btn small ghost" onclick={() => guard(api.openLocation("log"))}
          ><Icon name="folder" size={13} />Open</button
        >
      </div>
    {:else}
      <p class="faint small">Empty until the game has run with T3SDK.</p>
    {/if}
  </details>
</section>

<style>
  .block {
    display: grid;
    gap: 12px;
    padding: 16px 18px;
    align-content: start;
  }

  details {
    border-top: 1px solid var(--line);
    padding-top: 10px;
    display: grid;
    gap: 8px;
  }

  summary {
    cursor: pointer;
    color: var(--muted);
  }

  summary:hover {
    color: var(--text);
  }

  pre {
    max-height: 260px;
    margin: 8px 0 0;
    padding: 10px 12px;
    background: #0b0c0e;
    border: 1px solid var(--line);
    border-radius: var(--radius-sm);
    font: 12px/1.55 var(--mono);
    color: #c9c4b8;
    overflow: auto;
    white-space: pre-wrap;
    overflow-wrap: anywhere;
  }

  .small {
    font-size: 12.5px;
  }
</style>
