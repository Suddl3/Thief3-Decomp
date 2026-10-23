<script lang="ts">
  // Where the game is, updates, and the developer tools; the tools' own paths
  // under Advanced. Changes are saved as they are made. Also the first-run
  // setup screen (`setup`), prefilled from detection.
  import { onMount } from "svelte";
  import Icon from "$components/Icon.svelte";
  import PathField from "$components/PathField.svelte";
  import Toggle from "$components/Toggle.svelte";
  import UpdatesCard from "$components/UpdatesCard.svelte";
  import { api, emptyConfig, launcherVersion, type Candidate, type Config, type Detected } from "$lib/api";
  import { app, guard, saveConfig } from "$lib/app.svelte";
  import { ago, bytes } from "$lib/format";
  import { mods } from "$lib/mods.svelte";

  let { setup = false }: { setup?: boolean } = $props();

  let draft = $state<Config>({ ...(app.config ?? emptyConfig) });
  let detected = $state<Detected | null>(null);
  let detecting = $state(false);
  let gameOk = $state(false);
  let godotOk = $state(false);
  let pythonOk = $state(false);
  let rootOk = $state(false);
  let version = $state("");
  let savesFound = $state<Candidate[]>([]);
  let savesAuto = $state("");

  const ready = $derived(gameOk && pythonOk && rootOk);
  /** The bundled tools need nothing from the player: Advanced opens by itself only when one is missing. */
  const toolsOk = $derived(pythonOk && rootOk);

  async function detect() {
    detecting = true;
    detected = (await guard(api.detectAll())) ?? null;
    detecting = false;
    if (!detected) return;
    // Fill empty fields with the first candidate; never overwrite a choice.
    draft.gameDir ??= detected.games[0]?.path ?? null;
    draft.godot ??= detected.godots[0]?.path ?? null;
    draft.sdkRoot ??= detected.sdkRoots[0]?.path ?? null;
    draft.python ??= detected.pythons[0]?.path ?? null;
  }

  onMount(() => {
    if (setup || !app.config?.gameDir) void detect();
    void launcherVersion().then((v) => (version = v));
    if (!setup)
      void guard(api.savesInfo()).then((info) => {
        savesFound = info?.candidates.filter((c) => c.exists) ?? [];
        savesAuto = info && info.folder?.source !== "Settings" ? (info.folder?.path ?? "") : "";
      });
  });

  const indexUrlOk = $derived(!draft.modIndexUrl || /^https:\/\/[^\s/?#]+/.test(draft.modIndexUrl));

  // Saved a moment after the last change (a path is typed a key at a time).
  $effect(() => {
    if (setup) return;
    const next = JSON.stringify(draft);
    if (next === JSON.stringify(app.config) || !indexUrlOk) return;
    const timer = setTimeout(() => {
      if (draft.modIndexUrl !== app.config?.modIndexUrl) mods.index = null; // the Mods tab reads the new index
      void guard(saveConfig({ ...draft, setupComplete: true }));
    }, 600);
    return () => {
      clearTimeout(timer);
    };
  });

  async function finishSetup() {
    await guard(saveConfig({ ...draft, setupComplete: true }));
    app.page = "play";
  }

  const gameCheck = async (path: string) => {
    const r = await api.checkGame(path);
    return { ok: r.ok, message: r.message, detail: r.steam ? "Steam install" : undefined };
  };
  const godotCheck = async (path: string) => {
    const r = await api.checkGodot(path);
    return { ok: r.ok, message: r.message, detail: r.version ? `Godot ${r.version}` : undefined };
  };
  const pythonCheck = async (path: string) => {
    const r = await api.checkPython(path);
    return { ok: r.ok, message: r.message, detail: r.version ? `Python ${r.version}` : undefined };
  };
  const rootCheck = async (path: string) => {
    const r = await api.checkSdkRoot(path);
    return { ok: r.ok, message: r.message, detail: r.sdkBuilt ? "SDK built" : "SDK not built yet" };
  };
  const projectCheck = (path: string) => Promise.resolve({ ok: true, message: `Maps are exported to ${path}.` });
  const savesCheck = async (path: string) => {
    const r = await api.savesInfo(path);
    if (!r.exists) return { ok: false, message: "There is no folder here." };
    const { count, size, newest } = r.summary;
    return {
      ok: true,
      message: `${count.toString()} saves, ${bytes(size)}.`,
      detail: newest ? `newest ${ago(newest)}` : undefined,
    };
  };
</script>

<div class="page narrow" class:setup>
  {#if setup}
    <div class="welcome">
      <img src="/icon.svg" alt="" width="56" height="56" />
      <div>
        <h1>Welcome, taffer.</h1>
        <p class="muted">Check where the game is, then continue.</p>
      </div>
    </div>
  {:else}
    <h1 class="heading">Settings</h1>
  {/if}

  <div class="body">
    <section class="card group">
      <h2>Your game</h2>
      <PathField
        label="Thief: Deadly Shadows"
        bind:value={draft.gameDir}
        bind:ok={gameOk}
        hint="The folder with System and Content in it."
        candidates={detected?.games}
        check={gameCheck}
        action={{ label: "Get Thief: Deadly Shadows on Steam", href: "https://store.steampowered.com/app/6980/" }}
      />
    </section>

    {#if !setup}
      <section class="card group">
        <h2>General</h2>
        <label class="switch">
          <span class="grow">
            <strong>Developer tools</strong>
            <span class="muted">Every T3SDK setting, building T3SDK, and diagnostics.</span>
          </span>
          <Toggle checked={draft.developer} label="Developer tools" onchange={(on) => (draft.developer = on)} />
        </label>
      </section>

      <UpdatesCard bind:autoCheck={draft.autoUpdateCheck} />
    {/if}

    <details class="card group advanced" open={setup ? !toolsOk : undefined}>
      <summary
        ><span class="chevron"><Icon name="chevron" size={16} /></span>
        <h2>Advanced</h2>
        <span class="muted">The launcher's tools. It ships with its own.</span></summary
      >
      <PathField
        label="T3SDK folder"
        bind:value={draft.sdkRoot}
        bind:ok={rootOk}
        hint="The T3SDK tools; a T3SDK checkout works too."
        candidates={detected?.sdkRoots}
        check={rootCheck}
        action={{ label: "Get T3SDK", href: "https://github.com/Veradictus/Thief3-Decomp" }}
      />
      <PathField
        label="Python"
        bind:value={draft.python}
        bind:ok={pythonOk}
        directory={false}
        hint="Runs the T3SDK tools; any Python 3.10+ works."
        candidates={detected?.pythons}
        check={pythonCheck}
        action={{ label: "Get Python", href: "https://www.python.org/downloads/" }}
      />
      <PathField
        label="Godot"
        bind:value={draft.godot}
        bind:ok={godotOk}
        directory={false}
        optional
        hint="Godot 4.7 or newer, for Map Studio. Not needed to play."
        candidates={detected?.godots}
        check={godotCheck}
        action={{ label: "Get Godot", href: "https://godotengine.org/download/" }}
      />
      {#if !setup}
        <PathField
          label="Map export folder"
          bind:value={draft.projectDir}
          optional
          hint="Where Map Studio exports maps. Empty: inside the T3SDK folder."
          check={projectCheck}
        />
        <PathField
          label="Saves folder"
          bind:value={draft.savesDir}
          optional
          hint={`For save backups. Empty: found by itself${savesAuto ? ` (${savesAuto})` : ""}.`}
          candidates={savesFound}
          check={savesCheck}
        />
        <div class="field">
          <div class="row">
            <h3 class="grow">Mod index</h3>
            {#if !indexUrlOk}<span class="badge err"><Icon name="alert" size={13} />Not an https:// address</span>{/if}
          </div>
          <p class="muted hint">The list of mods Browse shows. Empty: T3SDK's.</p>
          <input
            type="text"
            spellcheck="false"
            placeholder="https://veradictus.github.io/Thief3-Decomp/modindex/index.json"
            value={draft.modIndexUrl ?? ""}
            oninput={(e) => (draft.modIndexUrl = e.currentTarget.value.trim() || null)}
          />
        </div>
        <div class="row">
          <button class="btn small ghost" onclick={detect} disabled={detecting}>
            <Icon name="search" size={14} />{detecting ? "Searching…" : "Search for everything again"}
          </button>
          <button
            class="btn small ghost"
            onclick={() => saveConfig({ ...(app.config ?? emptyConfig), setupComplete: false })}
            >Run the first-time setup again</button
          >
        </div>
      {/if}
    </details>

    {#if !setup}
      <p class="faint about">
        T3SDK Launcher {version}. A fan project, not affiliated with the owners of the Thief series. It changes the game
        only while it runs, and keeps the originals of any file it replaces.
      </p>
    {/if}
  </div>

  {#if setup}
    <div class="actions">
      <button class="btn ghost" onclick={detect} disabled={detecting}>
        <Icon name="search" />{detecting ? "Searching…" : "Search again"}
      </button>
      <div class="grow"></div>
      <button class="btn ghost" onclick={() => saveConfig({ ...draft, setupComplete: true })}>Skip for now</button>
      <button class="btn primary" onclick={finishSetup} disabled={!ready}>Continue<Icon name="chevron" /></button>
    </div>
  {/if}
</div>

<style>
  /* The first run is one short task: it sits in the middle of the window, and scrolls when it grows. */
  .page.setup > :first-child {
    margin-top: auto;
  }

  .page.setup > :last-child {
    margin-bottom: auto;
  }

  .welcome {
    display: flex;
    gap: 16px;
    align-items: center;
    margin-bottom: 16px;
  }

  .welcome p {
    margin-top: 4px;
  }

  .heading {
    margin-bottom: 16px;
  }

  .body {
    display: grid;
    gap: 14px;
  }

  .group {
    display: grid;
    gap: 12px;
    padding: 16px 18px;
  }

  /* The path fields inside a group: no card of their own. */
  .group :global(.field.card) {
    padding: 0;
    border: 0;
    background: none;
  }

  .switch {
    display: flex;
    align-items: center;
    gap: 14px;
    cursor: pointer;
  }

  .switch .grow {
    display: grid;
    gap: 1px;
  }

  .switch .muted,
  .hint {
    font-size: 13px;
  }

  summary {
    display: flex;
    align-items: center;
    gap: 10px;
    cursor: pointer;
    list-style: none;
  }

  summary::-webkit-details-marker {
    display: none;
  }

  .chevron {
    display: grid;
    color: var(--muted);
    transition: transform 0.18s cubic-bezier(0.2, 0.8, 0.2, 1);
  }

  details[open] .chevron {
    transform: rotate(90deg);
  }

  summary:hover .chevron {
    color: var(--text);
  }

  .advanced[open] {
    gap: 14px;
  }

  .field {
    display: grid;
    gap: 6px;
  }

  .about {
    font-size: 12.5px;
    padding: 0 4px 8px;
  }

  .actions {
    display: flex;
    gap: 8px;
    align-items: center;
    margin-top: 12px;
    padding-top: 12px;
    border-top: 1px solid var(--line);
  }
</style>
