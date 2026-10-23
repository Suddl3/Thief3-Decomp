<script lang="ts">
  // The Mods tab's three parts: your mods, the mod index, and Map Studio.
  import Icon from "./Icon.svelte";
  import { app, type ModsTab } from "$lib/app.svelte";
  import { mods } from "$lib/mods.svelte";

  const updates = $derived(mods.index?.updates.length ?? 0);
  const parts: { tab: ModsTab; label: string; icon: string }[] = [
    { tab: "installed", label: "My mods", icon: "puzzle" },
    { tab: "browse", label: "Browse", icon: "search" },
    { tab: "maps", label: "Map Studio", icon: "map" },
  ];
</script>

<div class="tabs" role="tablist">
  {#each parts as part (part.tab)}
    <button
      role="tab"
      aria-selected={app.modsTab === part.tab}
      class:active={app.modsTab === part.tab}
      onclick={() => (app.modsTab = part.tab)}
    >
      <Icon name={part.icon} size={15} />{part.label}
      {#if part.tab === "browse" && updates}<span class="count">{updates}</span>{/if}
    </button>
  {/each}
</div>

<style>
  .tabs {
    display: inline-flex;
    align-self: center;
    gap: 2px;
    padding: 4px;
    margin-bottom: 16px;
    border-radius: 99px;
    border: 1px solid var(--line);
    background: var(--panel);
  }

  .tabs button {
    display: inline-flex;
    align-items: center;
    gap: 8px;
    height: 32px;
    padding: 0 14px;
    border: 0;
    border-radius: 99px;
    background: none;
    color: var(--muted);
    cursor: pointer;
  }

  .tabs button:hover {
    color: var(--text);
  }

  .tabs button.active {
    color: var(--text);
    background: var(--panel-3);
  }

  .tabs button.active :global(svg) {
    color: var(--accent-2);
  }

  .count {
    min-width: 19px;
    height: 19px;
    padding: 0 6px;
    border-radius: 99px;
    background: var(--accent);
    color: var(--accent-ink);
    font-size: 11.5px;
    font-weight: 700;
    display: inline-grid;
    place-items: center;
  }
</style>
