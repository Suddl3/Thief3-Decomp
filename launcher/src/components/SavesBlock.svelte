<script lang="ts">
  // Play's Saves block: back up the game's saves, and put a backup back.
  // Backups are zips of the whole SaveGames folder in the launcher's per-user
  // folder; restoring one backs up the current saves first.
  import Icon from "./Icon.svelte";
  import Toggle from "./Toggle.svelte";
  import { api, emptyConfig, type Backup, type BackupList, type SavesInfo } from "$lib/api";
  import { app, guard, saveConfig, toast } from "$lib/app.svelte";
  import { ago, bytes, dateTime } from "$lib/format";

  let info = $state<SavesInfo | null>(null);
  let list = $state<BackupList | null>(null);
  let working = $state<"" | "backup" | "restore">("");
  let confirm = $state<{ file: string; action: "restore" | "delete" } | null>(null);

  $effect(() => {
    void app.revision;
    void load();
  });

  async function load() {
    const [i, l] = await Promise.all([guard(api.savesInfo()), guard(api.listSaveBackups())]);
    info = i ?? info;
    list = l ?? list;
  }

  const running = $derived(app.overview?.running ?? false);
  const s = $derived(info?.summary ?? null);
  const backups = $derived(list?.backups ?? []);

  /** The labels of the launcher's own backups (saves.rs). */
  const automatic = ["before restore", "before launch"];

  async function backUp() {
    working = "backup";
    const made = await guard(api.createSaveBackup(null));
    working = "";
    if (made) {
      toast(`Backed up ${(made.saves ?? 0).toString()} saves.`);
      await load();
    }
  }

  async function restore(b: Backup) {
    confirm = null;
    working = "restore";
    const done = await guard(api.restoreSaveBackup(b.file));
    working = "";
    if (done) {
      toast("Restored. The saves it replaced were backed up first.");
      await load();
    }
  }

  async function remove(b: Backup) {
    confirm = null;
    if ((await guard(api.deleteSaveBackup(b.file))) !== undefined) await load();
  }
</script>

<section class="card block">
  <div class="row head">
    <h2 class="grow">Saves</h2>
    <button class="btn small ghost" onclick={() => guard(api.openSavesFolder("saves"))} disabled={!info?.exists}>
      <Icon name="folder" size={14} />Open folder
    </button>
  </div>

  {#if info?.exists && s}
    <p class="summary">
      <strong>{s.count} saves</strong>
      <span class="muted">{s.newest ? `· last saved ${ago(s.newest)}` : ""}</span>
    </p>
  {:else}
    <p class="muted summary">No saves yet. They show here after the first save in the game.</p>
  {/if}

  <div class="row">
    <button class="btn primary small" onclick={backUp} disabled={!info?.exists || working !== ""}>
      <Icon name="archive" size={14} />{working === "backup" ? "Backing up…" : "Back up now"}
    </button>
    <label class="row option">
      <Toggle
        checked={app.config?.backupBeforeLaunch ?? false}
        label="Back up before playing"
        onchange={(on) => guard(saveConfig({ ...(app.config ?? emptyConfig), backupBeforeLaunch: on }))}
      />
      <span>Back up before playing</span>
    </label>
  </div>

  {#if backups.length}
    <details>
      <summary>Backups ({backups.length})</summary>
      {#if running}<p class="warn small">Quit the game before restoring a backup.</p>{/if}
      {#each backups as b (b.file)}
        <div class="backup">
          <div class="grow">
            <span>{dateTime(b.created)}</span>
            {#if b.label}<span class="badge" class:info={automatic.includes(b.label)}>{b.label}</span>{/if}
            <span class="faint small">{b.saves === null ? bytes(b.bytes) : `${b.saves.toString()} saves`}</span>
          </div>
          {#if confirm?.file === b.file}
            {#if confirm.action === "restore"}
              <button class="btn small primary" onclick={() => restore(b)}>Replace my saves</button>
            {:else}
              <button class="btn small danger" onclick={() => remove(b)}>Delete</button>
            {/if}
            <button class="btn small ghost" onclick={() => (confirm = null)}>Cancel</button>
          {:else}
            <button
              class="btn small"
              disabled={running || working !== ""}
              onclick={() => (confirm = { file: b.file, action: "restore" })}
              ><Icon name="undo" size={13} />Restore</button
            >
            <button
              class="btn small ghost"
              aria-label="Delete this backup"
              title="Delete this backup"
              disabled={working !== ""}
              onclick={() => (confirm = { file: b.file, action: "delete" })}><Icon name="trash" size={13} /></button
            >
          {/if}
        </div>
      {/each}
    </details>
  {/if}
</section>

<style>
  .block {
    display: grid;
    gap: 12px;
    padding: 16px 18px;
    align-content: start;
  }

  .summary strong {
    font-family: var(--serif);
    font-size: 17px;
  }

  .option {
    gap: 9px;
    margin-left: 8px;
    color: var(--muted);
    font-size: 13px;
    cursor: pointer;
  }

  details {
    border-top: 1px solid var(--line);
    padding-top: 10px;
  }

  summary {
    cursor: pointer;
    color: var(--muted);
  }

  summary:hover {
    color: var(--text);
  }

  .backup {
    display: flex;
    align-items: center;
    gap: 8px;
    padding: 7px 0;
    border-bottom: 1px solid var(--line);
  }

  .backup:last-child {
    border-bottom: 0;
  }

  .backup .grow {
    display: flex;
    align-items: center;
    gap: 8px;
    min-width: 0;
  }

  .small {
    font-size: 12.5px;
  }

  .warn {
    color: var(--warn);
    margin: 8px 0 2px;
  }
</style>
