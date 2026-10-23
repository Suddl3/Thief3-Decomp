<script lang="ts">
  // The game's page. One main button, always in the same place, says the next
  // thing to do (find the game, install T3SDK, play); what is done less often
  // is in the menu beside it. Below: the saves, help, and the game fixes.
  import FixesBlock from "$components/FixesBlock.svelte";
  import HelpBlock from "$components/HelpBlock.svelte";
  import Icon from "$components/Icon.svelte";
  import Menu, { type MenuItem } from "$components/Menu.svelte";
  import SavesBlock from "$components/SavesBlock.svelte";
  import { api } from "$lib/api";
  import { app, enqueue, guard, refresh, running, toast } from "$lib/app.svelte";
  import { reportProblem } from "$lib/diag";

  let launching = $state(false);

  const o = $derived(app.overview);
  const game = $derived(o?.game ?? null);
  const busy = $derived(running() !== null);
  const developer = $derived(app.config?.developer ?? false);
  /** The launcher cannot install or update T3SDK: its tools folder is missing or has no built SDK. */
  const toolsMissing = $derived(!!game?.supported && !!o && !o.sdk.built);

  async function play() {
    launching = true;
    const message = await guard(api.launchGame());
    if (message) toast(message);
    setTimeout(() => {
      launching = false;
      void refresh();
    }, 4000);
  }

  /** The main button: the next step towards playing, and a line under it. */
  const next = $derived.by(() => {
    if (!game?.ok)
      return {
        label: "Find the game",
        icon: "search",
        hint: "Show the launcher where Thief is.",
        run: () => (app.page = "settings"),
      };
    if (o?.running) return { label: "Playing", icon: "play", hint: "Thief is running.", disabled: true };
    if (launching) return { label: "Starting…", icon: "play", hint: "Thief starts through Steam.", disabled: true };
    if (game.supported && o?.sdk.managed && o.sdk.outdated)
      return {
        label: "Update T3SDK",
        icon: "download",
        hint: "A newer T3SDK and fix pack are ready. Your settings are kept.",
        run: () => enqueue({ kind: "sdkDeploy" }, "Update T3SDK"),
        disabled: busy,
      };
    if (game.supported && !o?.sdk.installed && o?.sdk.built)
      return {
        label: "Install T3SDK",
        icon: "download",
        hint: "Adds the fixes and the mod loader. Nothing of the game is replaced.",
        run: () => enqueue({ kind: "sdkDeploy" }, "Install T3SDK"),
        disabled: busy,
      };
    return {
      label: "Play",
      icon: "play",
      hint: game.supported ? "Starts through Steam." : "This copy is not the Steam release: it plays without T3SDK.",
      run: play,
      disabled: busy,
    };
  });

  const menu = $derived.by<MenuItem[]>(() => {
    const items: MenuItem[] = [];
    if (o?.sdk.installed && o.sdk.managed)
      items.push({
        label: "Remove T3SDK",
        icon: "trash",
        danger: true,
        disabled: busy,
        run: () => enqueue({ kind: "sdkUndeploy" }, "Remove T3SDK"),
      });
    if (developer && o?.sdk.buildable)
      items.push({
        label: "Build T3SDK",
        icon: "hammer",
        disabled: busy,
        run: () => enqueue({ kind: "sdkBuild" }, "Build T3SDK"),
      });
    if (game)
      items.push({ label: "Open the game's folder", icon: "folder", run: () => void guard(api.openLocation("game")) });
    items.push({ label: "Activity", icon: "terminal", run: () => (app.page = "tasks") });
    items.push({ label: "Report a problem", icon: "bug", run: reportProblem });
    return items;
  });
</script>

<div class="page">
  <section class="hero card">
    <div class="title">
      <h1>Thief: Deadly Shadows</h1>
      <ul class="steps">
        <li class:done={game?.ok}><Icon name={game?.ok ? "check" : "x"} size={14} />Game found</li>
        <li class:done={o?.sdk.installed}><Icon name={o?.sdk.installed ? "check" : "x"} size={14} />T3SDK installed</li>
        <li class:done={(o?.modsEnabled ?? 0) > 0}>
          <Icon name="puzzle" size={14} />{o?.modsEnabled ?? 0} mod{o?.modsEnabled === 1 ? "" : "s"} on
        </li>
      </ul>
    </div>
    <div class="action">
      <div class="row">
        <button class="btn primary main" onclick={next.run} disabled={next.disabled}>
          <Icon name={next.icon} size={18} />{next.label}
        </button>
        <Menu items={menu} large label="More" />
      </div>
      <p class="hint">{next.hint}</p>
    </div>
  </section>

  {#if toolsMissing}
    <div class="card notice" role="status">
      <Icon name="alert" />
      <p class="grow">T3SDK's tools are missing, so the launcher cannot install or update it.</p>
      <button
        class="btn small"
        onclick={() => {
          app.showTools = true;
          app.page = "settings";
        }}>Find them</button
      >
    </div>
  {/if}

  <div class="blocks">
    <SavesBlock />
    <HelpBlock />
  </div>
  <FixesBlock />
</div>

<style>
  .page {
    gap: 14px;
  }

  .hero {
    display: flex;
    align-items: center;
    gap: 28px;
    padding: 26px 30px;
    background:
      radial-gradient(120% 140% at 85% 0%, #3b2e17 0%, transparent 55%),
      radial-gradient(80% 120% at 10% 120%, #13202a 0%, transparent 60%), linear-gradient(180deg, #16181c, #101114);
  }

  .title {
    flex: 1;
    min-width: 0;
  }

  h1 {
    font-size: 44px;
    line-height: 1.05;
    text-shadow: 0 2px 18px #000a;
  }

  .steps {
    display: flex;
    flex-wrap: wrap;
    gap: 6px 18px;
    margin: 14px 0 0;
    padding: 0;
    list-style: none;
    color: var(--faint);
    font-size: 13px;
  }

  .steps li {
    display: inline-flex;
    align-items: center;
    gap: 6px;
  }

  .steps li.done {
    color: var(--ok);
  }

  .action {
    display: grid;
    justify-items: center;
    gap: 8px;
    max-width: 300px;
    text-align: center;
  }

  .main {
    height: 46px;
    padding: 0 30px;
    font-size: 16px;
    letter-spacing: 0.03em;
    box-shadow: 0 6px 24px #d6ab5230;
  }

  .hint {
    color: var(--muted);
    font-size: 12.5px;
  }

  .notice {
    display: flex;
    align-items: center;
    gap: 12px;
    padding: 12px 16px;
    color: var(--warn);
    border-color: #5b4526;
    background: #1c160d;
  }

  .notice :global(svg) {
    flex: none;
  }

  .blocks {
    display: grid;
    grid-template-columns: repeat(auto-fit, minmax(min(420px, 100%), 1fr));
    gap: 14px;
  }
</style>
