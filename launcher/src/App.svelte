<script lang="ts">
  // The window: a bar with three tabs (Play, Mods, Settings) over the page.
  // Activity and every T3SDK setting open from the pages' menus; the running
  // task shows in the bar, and opens Activity.
  import { onMount } from "svelte";
  import DropOverlay from "$components/DropOverlay.svelte";
  import Icon from "$components/Icon.svelte";
  import UpdateBanner from "$components/UpdateBanner.svelte";
  import { api, inTauri } from "$lib/api";
  import { app, jobs, loadConfig, openPage, pending, refresh, running, type Page } from "$lib/app.svelte";
  import { startupUpdateCheck } from "$lib/update.svelte";
  import Mods from "./pages/Mods.svelte";
  import Play from "./pages/Play.svelte";
  import Sdk from "./pages/Sdk.svelte";
  import Settings from "./pages/Settings.svelte";
  import Tasks from "./pages/Tasks.svelte";

  const tabs: { page: Page; label: string }[] = [
    { page: "play", label: "Play" },
    { page: "mods", label: "Mods" },
    { page: "settings", label: "Settings" },
  ];

  onMount(() => {
    const start = new URLSearchParams(location.search).get("page");
    if (start) openPage(start);
    void loadConfig().then(refresh).then(startupUpdateCheck);
    // Pick up changes made outside the launcher (the game, Godot, a shell).
    const onFocus = () => void refresh();
    const timer = setInterval(() => {
      if (document.visibilityState === "visible") void refresh();
    }, 15000);
    window.addEventListener("focus", onFocus);
    return () => {
      clearInterval(timer);
      window.removeEventListener("focus", onFocus);
    };
  });

  const current = $derived(running());
</script>

{#if !app.config}
  <div class="loading"></div>
{:else if !app.config.setupComplete}
  <main class="setup"><Settings setup /></main>
{:else}
  <div class="shell">
    <header>
      <div class="brand">
        <img src="/icon.svg" alt="" width="28" height="28" />
        <span class="name">T3SDK</span>
      </div>
      <nav>
        {#each tabs as tab (tab.page)}
          <button class:active={app.page === tab.page} onclick={() => (app.page = tab.page)}>{tab.label}</button>
        {/each}
      </nav>
      <div class="grow"></div>
      {#if current}
        <button
          class="job"
          title="Show what it prints in Activity"
          onclick={() => {
            jobs.selected = current.key;
            app.page = "tasks";
          }}
        >
          <span class="spinner"></span>
          <span class="clip">{current.title}</span>
          {#if pending() > 1}<span class="faint">+{pending() - 1}</span>{/if}
        </button>
      {/if}
      <UpdateBanner />
      {#if !inTauri}<span class="badge info">Browser preview</span>{/if}
      <button
        class="link"
        title="Taffer Tavern, the community's Discord"
        onclick={() => api.openLink("https://discord.gg/eaJkC5C6WJ")}><Icon name="discord" size={18} /></button
      >
      <button
        class="link"
        title="Documentation"
        onclick={() => api.openLink("https://veradictus.github.io/Thief3-Decomp/")}
        ><Icon name="book" size={18} /></button
      >
    </header>

    <main>
      {#if app.page === "play"}<Play />
      {:else if app.page === "mods"}<Mods />
      {:else if app.page === "tasks"}<Tasks />
      {:else if app.page === "sdk"}<Sdk />
      {:else}<Settings />{/if}
    </main>
  </div>
{/if}

<DropOverlay />

<div class="toasts">
  {#each app.toasts as t (t.id)}
    <div class="toast" class:error={t.kind === "error"}>
      <Icon name={t.kind === "error" ? "alert" : "check"} />{t.text}
    </div>
  {/each}
</div>

<style>
  .shell {
    display: grid;
    grid-template-rows: auto minmax(0, 1fr);
    height: 100%;
  }

  header {
    display: flex;
    align-items: center;
    gap: 10px;
    height: 56px;
    padding: 0 18px;
    background: #111215;
    border-bottom: 1px solid var(--line);
  }

  .brand {
    display: flex;
    align-items: center;
    gap: 9px;
    margin-right: 18px;
  }

  .name {
    font-family: var(--font-display);
    font-size: 19px;
    font-weight: 600;
    letter-spacing: 0.05em;
  }

  nav {
    display: flex;
    gap: 4px;
  }

  nav button {
    height: 34px;
    padding: 0 16px;
    border: 0;
    border-radius: 99px;
    background: none;
    color: var(--muted);
    font-size: 14.5px;
    cursor: pointer;
  }

  nav button:hover {
    color: var(--text);
    background: var(--panel-2);
  }

  nav button.active {
    color: var(--accent-ink);
    background: var(--accent);
    font-weight: 600;
  }

  .link {
    display: grid;
    place-items: center;
    width: 34px;
    height: 34px;
    border: 0;
    border-radius: 50%;
    background: none;
    color: var(--muted);
    cursor: pointer;
  }

  .link:hover {
    color: var(--text);
    background: var(--panel-2);
  }

  main {
    min-width: 0;
    min-height: 0;
    overflow: hidden;
  }

  .setup {
    height: 100%;
    max-width: 980px;
    margin: 0 auto;
  }

  .job {
    display: inline-flex;
    align-items: center;
    gap: 8px;
    max-width: 280px;
    height: 30px;
    padding: 0 12px;
    border-radius: 99px;
    border: 1px solid var(--line-2);
    background: var(--panel-2);
    font-size: 12.5px;
    cursor: pointer;
  }

  .job:hover {
    background: var(--panel-3);
  }

  .clip {
    overflow: hidden;
    white-space: nowrap;
    text-overflow: ellipsis;
  }

  .spinner {
    width: 13px;
    height: 13px;
    border-radius: 50%;
    border: 2px solid #d6ab5240;
    border-top-color: var(--accent);
    animation: spin 0.8s linear infinite;
    flex: none;
  }

  @keyframes spin {
    to {
      transform: rotate(360deg);
    }
  }

  .toasts {
    position: fixed;
    right: 20px;
    bottom: 16px;
    display: flex;
    flex-direction: column;
    gap: 8px;
    z-index: 30;
    max-width: 420px;
  }

  .toast {
    display: flex;
    gap: 9px;
    align-items: flex-start;
    padding: 10px 14px;
    border-radius: var(--radius-sm);
    background: #1d2024;
    border: 1px solid var(--line-2);
    box-shadow: 0 8px 24px #0009;
    color: var(--text);
  }

  .toast :global(svg) {
    color: var(--ok);
    margin-top: 2px;
  }

  .toast.error {
    border-color: #6b3228;
    background: #231512;
  }

  .toast.error :global(svg) {
    color: var(--err);
  }
</style>
