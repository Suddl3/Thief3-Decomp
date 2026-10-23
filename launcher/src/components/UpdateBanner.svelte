<script lang="ts">
  // "Update 0.3.0" in the top bar while a newer launcher is available; it opens
  // Settings, whose Updates card installs it.
  import { app } from "$lib/app.svelte";
  import { updater } from "$lib/update.svelte";

  const update = $derived(updater.update);
</script>

{#if update && (!updater.dismissed || updater.installing)}
  <button
    class="pill"
    title={`Launcher ${update.version} is available (you have ${update.currentVersion})`}
    onclick={() => (app.page = "settings")}
  >
    <span class="dot"></span>{updater.installing ? "Updating…" : `Update ${update.version}`}
  </button>
{/if}

<style>
  .pill {
    display: inline-flex;
    align-items: center;
    gap: 7px;
    height: 30px;
    padding: 0 12px;
    border-radius: 99px;
    border: 1px solid #6b5327;
    background: #1f1a10;
    color: var(--accent-2);
    font-size: 12.5px;
    font-weight: 600;
    cursor: pointer;
    white-space: nowrap;
  }

  .pill:hover {
    background: #2a2213;
  }

  .dot {
    width: 7px;
    height: 7px;
    border-radius: 50%;
    background: var(--accent);
  }
</style>
