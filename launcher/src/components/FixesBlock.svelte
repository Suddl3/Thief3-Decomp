<script lang="ts">
  // Play's Game fixes block: T3SDK's switches (T3SDK.ini) and the fix mods it
  // installs, as one list of switches. Each switch is saved at once; the game
  // picks it up the next time it starts. The rest of T3SDK.ini is in the
  // developer tools (the "sdk" page).
  import Icon from "./Icon.svelte";
  import Toggle from "./Toggle.svelte";
  import { api, type SdkSettings } from "$lib/api";
  import { app, guard } from "$lib/app.svelte";
  import { fixOn, fixValue, modFixes, sdkFixes, type SdkFix } from "$lib/fixes";
  import { loadMods, mods, setLooseEnabled } from "$lib/mods.svelte";

  let settings = $state<SdkSettings | null>(null);

  $effect(() => {
    void app.revision;
    void guard(api.readSdkSettings()).then((s) => (settings = s ?? settings));
    if (!mods.list) void loadMods();
  });

  const value = (fix: SdkFix) =>
    settings?.sections.find((s) => s.name === fix.section)?.settings.find((s) => s.key === fix.key)?.value;
  const shownSdk = $derived(sdkFixes.filter((f) => value(f) !== undefined));
  const shownMods = $derived(
    modFixes.flatMap((f) => {
      const m = mods.list?.loose.find((l) => l.name === f.name);
      return m ? [{ ...f, enabled: m.enabled }] : [];
    }),
  );

  async function setSdk(fix: SdkFix, on: boolean) {
    const v = fixValue(fix, on);
    if ((await guard(api.writeSdkSettings([{ section: fix.section, key: fix.key, value: v }]))) === undefined) return;
    const s = settings?.sections.find((x) => x.name === fix.section)?.settings.find((x) => x.key === fix.key);
    if (s) s.value = v;
  }
</script>

<section class="card block">
  <div class="row head">
    <h2 class="grow">Game fixes</h2>
    {#if app.config?.developer}
      <button class="btn small ghost" onclick={() => (app.page = "sdk")}
        ><Icon name="sliders" size={14} />Every T3SDK setting</button
      >
    {/if}
  </div>
  {#if !app.overview?.sdk.installed || !settings?.exists}
    <p class="muted">Install T3SDK (above) to get these fixes.</p>
  {:else}
    <div class="list">
      {#each shownSdk as fix (fix.key)}
        <label class="fix">
          <span class="grow">
            <strong>{fix.label}</strong>
            <span class="muted">{fix.hint}</span>
          </span>
          <Toggle checked={fixOn(fix, value(fix))} label={fix.label} onchange={(on) => setSdk(fix, on)} />
        </label>
      {/each}
      {#each shownMods as fix (fix.name)}
        <label class="fix">
          <span class="grow">
            <strong>{fix.label}</strong>
            <span class="muted">{fix.hint}</span>
          </span>
          <Toggle
            checked={fix.enabled}
            label={fix.label}
            disabled={mods.busy}
            onchange={(on) => setLooseEnabled(fix.name, on)}
          />
        </label>
      {/each}
    </div>
    <p class="faint small">Changes apply the next time the game starts.</p>
  {/if}
</section>

<style>
  .block {
    display: grid;
    gap: 12px;
    padding: 16px 18px;
  }

  /* Two columns where they fit. */
  .list {
    display: grid;
    grid-template-columns: repeat(auto-fill, minmax(min(380px, 100%), 1fr));
    column-gap: 28px;
  }

  .fix {
    display: flex;
    align-items: center;
    gap: 14px;
    padding: 10px 0;
    border-top: 1px solid var(--line);
    cursor: pointer;
  }

  .fix .grow {
    display: grid;
    gap: 1px;
  }

  .fix .muted {
    font-size: 13px;
  }

  .small {
    font-size: 12.5px;
  }
</style>
