<script lang="ts">
  // The Mods tab: your mods in load order (mods/Installed.svelte), the mod
  // index (mods/Browse.svelte), and Map Studio (Maps.svelte). Every change is
  // saved and applied to the game folder at once.
  import Icon from "$components/Icon.svelte";
  import Menu, { type MenuItem } from "$components/Menu.svelte";
  import ModsTabs from "$components/ModsTabs.svelte";
  import { api, pickModPackages } from "$lib/api";
  import { app, guard } from "$lib/app.svelte";
  import { installFiles, loadIndex, loadMods, mods, queueTextures, syncMods, textureJobs } from "$lib/mods.svelte";
  import Maps from "./Maps.svelte";
  import Browse from "./mods/Browse.svelte";
  import Installed from "./mods/Installed.svelte";

  $effect(() => {
    void app.revision;
    void loadMods();
  });

  // Fetched once per session, for the updates count; Refresh in Browse fetches again.
  $effect(() => {
    if (!mods.index && !mods.indexLoading && !mods.indexError) void loadIndex(false);
  });

  async function install() {
    await installFiles(await pickModPackages());
  }

  const menu = $derived.by<MenuItem[]>(() => {
    const items: MenuItem[] = [
      { label: "Open the mods folder", icon: "folder", run: () => void guard(api.openLocation("mods")) },
      {
        label: "Put every mod in place again",
        icon: "refresh",
        disabled: mods.busy,
        run: () => void syncMods(),
      },
    ];
    const textures = mods.list?.textures;
    if (textures?.mods.length)
      items.push({
        label: "Apply the texture packs again",
        icon: "box",
        disabled: textureJobs().length > 0,
        run: () => {
          queueTextures(textures, true);
        },
      });
    return items;
  });
</script>

{#if app.modsTab === "maps"}
  <Maps />
{:else}
  <div class="page" class:narrow={app.modsTab === "installed"}>
    <ModsTabs />
    {#if app.modsTab === "installed"}
      <div class="page-head">
        <h1>My mods</h1>
        <div class="row">
          <button class="btn primary" onclick={install} disabled={mods.busy}><Icon name="download" />Add a mod…</button>
          <Menu items={menu} label="More" />
        </div>
        <p>
          Switch them on and off; the game picks them up when it next starts. Or drop <code>.t3mod</code> files here.
        </p>
      </div>
      <Installed />
    {:else}
      <Browse />
    {/if}
  </div>
{/if}
