<script lang="ts">
  // Your mods, one row each, in load order (the first loads first; a later one
  // wins where two replace the same file): its switch, what it is, and a menu
  // to move it or remove it. The checks' issues sit under their mod, with
  // their fixes. Loose DLLs load after the packages, in name order; T3SDK's
  // own fix mods are on the Play page.
  import Icon from "$components/Icon.svelte";
  import Menu, { type MenuItem } from "$components/Menu.svelte";
  import Toggle from "$components/Toggle.svelte";
  import { api, type Issue, type ModPackage } from "$lib/api";
  import { app } from "$lib/app.svelte";
  import { isModFix } from "$lib/fixes";
  import { badges, issuesFor, listText, moveBy, moveTo } from "$lib/modlist";
  import {
    fix,
    mods,
    queueTextures,
    removeMod,
    setLooseEnabled,
    setOrder,
    setPackageEnabled,
    textureJobs,
  } from "$lib/mods.svelte";
  import Profiles from "./Profiles.svelte";

  const list = $derived(mods.list);
  const order = $derived(list?.packages.map((p) => p.id) ?? []);
  const general = $derived(issuesFor(list, null));
  const loose = $derived(list?.loose.filter((m) => !isModFix(m.name)) ?? []);
  const on = $derived((list?.packages.filter((p) => p.enabled).length ?? 0) + loose.filter((m) => m.enabled).length);
  const texturesBusy = $derived(textureJobs().length > 0);

  let confirming = $state<string | null>(null);

  const icon = (issue: Issue) => (issue.severity === "info" ? "copy" : "alert");

  function menu(p: ModPackage, i: number, count: number): MenuItem[] {
    const items: MenuItem[] = [];
    if (i > 0) {
      items.push({
        label: "Load first",
        icon: "upload",
        disabled: mods.busy,
        run: () => void setOrder(moveTo(order, p.id, 0)),
      });
      items.push({
        label: "Load earlier",
        icon: "upload",
        disabled: mods.busy,
        run: () => void setOrder(moveBy(order, p.id, -1)),
      });
    }
    if (i < count - 1)
      items.push({
        label: "Load later",
        icon: "download",
        disabled: mods.busy,
        run: () => void setOrder(moveBy(order, p.id, 1)),
      });
    if (p.homepage) {
      const page = p.homepage;
      items.push({ label: "Its page", icon: "link", run: () => api.openLink(page) });
    }
    items.push({ label: "Remove", icon: "trash", danger: true, disabled: mods.busy, run: () => (confirming = p.id) });
    return items;
  }
</script>

{#if list}
  <div class="row bar">
    <span class="muted grow">{on} of {list.packages.length + loose.length} on</span>
    <Profiles {list} />
  </div>

  {#if !list.sdk.installed && list.packages.some((p) => p.code && p.enabled)}
    <div class="note warn card">
      <Icon name="alert" />Code mods need T3SDK: install it on the Play page.
    </div>
  {/if}
  {#if app.overview?.running}
    <div class="note warn card"><Icon name="alert" />Close the game before changing mods.</div>
  {/if}
  {#if mods.notice}
    <div class="note err card">
      <Icon name="alert" />
      <div class="grow notice">
        <strong>{mods.notice.title}:</strong>
        {#each mods.notice.lines as line, i (i)}<span class="mono">{line}</span>{/each}
      </div>
      <button class="btn small ghost" onclick={() => (mods.notice = null)} aria-label="Dismiss">
        <Icon name="x" size={14} />
      </button>
    </div>
  {/if}
  {#if list.textures.bundles.length || list.textures.needed}
    <div class="note info card">
      <Icon name="box" />
      <span class="grow">
        {#if list.textures.bundles.length}
          The game's texture bundles wait for the old packs to come off first.
        {:else if list.textures.mods.length}
          New texture packs: {listText(list.textures.mods)}.
        {:else}
          No texture pack is on any more: the game's textures go back to the originals.
        {/if}
      </span>
      {#if texturesBusy}
        <span class="faint">Working…</span>
      {:else}
        <button
          class="btn small"
          onclick={() => {
            queueTextures(list.textures);
          }}>Apply now</button
        >
      {/if}
    </div>
  {/if}
  {#each general as issue, i (i)}
    <div class="note card {issue.severity}"><Icon name={icon(issue)} />{issue.message}</div>
  {/each}

  <div class="list card">
    {#each list.packages as p, i (p.id)}
      {@const issues = issuesFor(list, p.id)}
      <div class="mod" class:off={!p.enabled}>
        <div class="main">
          <Toggle
            checked={p.enabled}
            label={`Switch ${p.name} on or off`}
            disabled={mods.busy || !!p.error}
            onchange={(on) => setPackageEnabled(p.id, on)}
          />
          <div class="grow body">
            <div class="title">
              <h3>{p.name}</h3>
              {#if p.version}<span class="faint version">{p.version}</span>{/if}
            </div>
            <p class="muted desc">{p.description ?? listText(p.authors)}</p>
          </div>
          {#each badges(p) as b (b.key)}<span class="kind {b.key}" title={b.title}>{b.label}</span>{/each}
          {#if confirming === p.id}
            <span class="confirm">Remove it?</span>
            <button
              class="btn small danger"
              disabled={mods.busy}
              onclick={() => {
                confirming = null;
                void removeMod(p.id);
              }}>Remove</button
            >
            <button class="btn small ghost" onclick={() => (confirming = null)}>Keep</button>
          {:else}
            <Menu items={menu(p, i, list.packages.length)} label={`More for ${p.name}`} />
          {/if}
        </div>
        {#each issues as issue, k (k)}
          <div class="issue {issue.severity}">
            <Icon name={icon(issue)} size={13} />
            <span class="grow">{issue.message}</span>
            {#if issue.fix}
              {@const action = issue.fix.action}
              <button class="btn small" disabled={mods.busy} onclick={() => fix(action)}>{issue.fix.label}</button>
            {/if}
          </div>
        {/each}
      </div>
    {:else}
      <div class="empty">
        <h3>No mods yet</h3>
        <p>Add a <code>.t3mod</code> file, drop one on this window, or find one in Browse.</p>
        <p class="row center">
          <button class="btn small" onclick={() => (app.modsTab = "browse")}
            ><Icon name="search" size={14} />Browse mods</button
          >
        </p>
      </div>
    {/each}

    {#each loose as m (m.name)}
      <div class="mod" class:off={!m.enabled}>
        <div class="main">
          <Toggle
            checked={m.enabled}
            label={`Switch ${m.name} on or off`}
            disabled={mods.busy}
            onchange={(on) => setLooseEnabled(m.name, on)}
          />
          <div class="grow body">
            <div class="title"><h3>{m.name}</h3></div>
            <p class="faint desc">A DLL in System\mods</p>
          </div>
          <span class="kind loose">DLL</span>
        </div>
      </div>
    {/each}
  </div>
{:else}
  <p class="empty">{app.config?.gameDir ? "Reading the mods folder…" : "Set the game folder in Settings first."}</p>
{/if}

<style>
  .bar {
    margin-bottom: 12px;
  }

  /* The page scrolls, not the list: a row's menu is never cut off at the list's edge. */
  .list {
    flex: none;
  }

  .mod {
    padding: 12px 16px;
    border-top: 1px solid var(--line);
  }

  .mod:first-child {
    border-top: 0;
  }

  .main {
    display: flex;
    align-items: center;
    gap: 14px;
    min-width: 0;
  }

  .mod.off .body {
    opacity: 0.6;
  }

  .title {
    display: flex;
    align-items: baseline;
    gap: 8px;
    min-width: 0;
  }

  .title h3,
  .desc {
    overflow: hidden;
    white-space: nowrap;
    text-overflow: ellipsis;
  }

  .version {
    flex: none;
    font-size: 12px;
  }

  .desc {
    margin-top: 1px;
    font-size: 13px;
  }

  .kind {
    flex: none;
    padding: 0 8px;
    border-radius: 99px;
    border: 1px solid var(--line-2);
    font-size: 11.5px;
    line-height: 20px;
  }

  .kind.code {
    color: #c9a2ef;
    border-color: #4a3560;
    background: #1d1626;
  }

  .kind.content {
    color: var(--info);
    border-color: #2f4560;
    background: #121b26;
  }

  .kind.textures {
    color: #86c2b4;
    border-color: #2d5249;
    background: #13211d;
  }

  .kind.loose {
    color: var(--muted);
  }

  .confirm {
    color: #f4a595;
    font-size: 12.5px;
  }

  .issue {
    display: flex;
    align-items: center;
    gap: 7px;
    margin: 8px 0 0 58px;
    padding: 3px 4px 3px 8px;
    border-radius: var(--radius-sm);
    font-size: 12px;
    line-height: 1.35;
    border: 1px solid var(--line-2);
  }

  .issue :global(svg) {
    flex: none;
  }

  .issue.error {
    color: var(--err);
    border-color: #5c2e26;
    background: #26140f;
  }

  .issue.warning {
    color: var(--warn);
    border-color: #5b4526;
    background: #241b10;
  }

  .issue.info {
    color: var(--muted);
  }

  .note {
    display: flex;
    gap: 10px;
    align-items: center;
    padding: 8px 14px;
    margin-bottom: 10px;
  }

  .note :global(svg) {
    flex: none;
  }

  .note.warn,
  .note.warning {
    color: var(--warn);
    border-color: #5b4526;
    background: #1c160d;
  }

  .note.err,
  .note.error {
    color: var(--err);
    border-color: #5c2e26;
    background: #1f120f;
  }

  .note.info {
    color: var(--info);
    border-color: #2f4560;
    background: #111821;
  }

  .notice {
    display: flex;
    flex-wrap: wrap;
    gap: 2px 10px;
    max-height: 64px;
    overflow: auto;
  }

  .notice .mono {
    color: var(--muted);
  }

  .center {
    justify-content: center;
    margin-top: 12px;
  }
</style>
