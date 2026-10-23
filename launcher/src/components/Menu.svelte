<script lang="ts" module>
  export interface MenuItem {
    label: string;
    icon: string;
    run: () => void;
    danger?: boolean;
    disabled?: boolean;
  }
</script>

<script lang="ts">
  // The "…" button beside a main action: what is done less often, one click
  // away. Closes on a choice, a click elsewhere or Escape.
  import Icon from "./Icon.svelte";

  let { items, label = "More", large = false }: { items: MenuItem[]; label?: string; large?: boolean } = $props();

  let open = $state(false);
  let root = $state<HTMLElement>();

  $effect(() => {
    if (!open) return;
    const away = (e: PointerEvent) => {
      if (root && !root.contains(e.target as Node)) open = false;
    };
    const key = (e: KeyboardEvent) => {
      if (e.key === "Escape") open = false;
    };
    window.addEventListener("pointerdown", away);
    window.addEventListener("keydown", key);
    return () => {
      window.removeEventListener("pointerdown", away);
      window.removeEventListener("keydown", key);
    };
  });
</script>

<div class="menu" bind:this={root}>
  <button
    class="more"
    class:large
    aria-label={label}
    title={label}
    aria-haspopup="menu"
    aria-expanded={open}
    onclick={() => (open = !open)}><Icon name="more" size={large ? 20 : 16} /></button
  >
  {#if open}
    <div class="list" role="menu">
      {#each items as item (item.label)}
        <button
          role="menuitem"
          class:danger={item.danger}
          disabled={item.disabled}
          onclick={() => {
            open = false;
            item.run();
          }}><Icon name={item.icon} size={15} />{item.label}</button
        >
      {/each}
    </div>
  {/if}
</div>

<style>
  .menu {
    position: relative;
    flex: none;
  }

  .more {
    display: grid;
    place-items: center;
    width: 32px;
    height: 32px;
    border-radius: 50%;
    border: 1px solid var(--line-2);
    background: var(--panel-2);
    color: var(--muted);
    cursor: pointer;
  }

  .more.large {
    width: 46px;
    height: 46px;
  }

  .more:hover,
  .more[aria-expanded="true"] {
    color: var(--text);
    border-color: #474d57;
    background: var(--panel-3);
  }

  .list {
    position: absolute;
    right: 0;
    top: calc(100% + 6px);
    z-index: 20;
    min-width: 220px;
    padding: 5px;
    display: grid;
    border-radius: var(--radius);
    border: 1px solid var(--line-2);
    background: #1a1c20;
    box-shadow: 0 12px 32px #000b;
  }

  .list button {
    display: flex;
    align-items: center;
    gap: 10px;
    height: 34px;
    padding: 0 10px;
    border: 0;
    border-radius: var(--radius-sm);
    background: none;
    color: var(--text);
    cursor: pointer;
    text-align: left;
    white-space: nowrap;
  }

  .list button :global(svg) {
    color: var(--muted);
  }

  .list button:hover:not(:disabled) {
    background: var(--panel-3);
  }

  .list button.danger,
  .list button.danger :global(svg) {
    color: var(--err);
  }

  .list button:disabled {
    opacity: 0.45;
    cursor: default;
  }
</style>
