<script lang="ts">
  // A mod's settings (its .ini in System\mods), under its row on the Mods page.
  // Each change is saved as it is made; sliders and text wait until they settle.
  // Controls come from the .ini's `@` hints (docs/modding/settings.md).
  import Icon from "$components/Icon.svelte";
  import Toggle from "$components/Toggle.svelte";
  import { api, type ModSetting, type ModSettings } from "$lib/api";
  import { guard } from "$lib/app.svelte";
  import { comboText, keyCodes, modDescription, sortKeys, vkFromCode } from "$lib/format";

  let { name }: { name: string } = $props();

  let settings = $state<ModSettings | null | undefined>(undefined);
  let values = $state<Record<string, string>>({});
  let recording = $state<string | null>(null);
  let held = $state<number[]>([]);
  let saved = $state(false);

  /** Pending saves by setting, so a slider writes once it stops moving. */
  const timers: Record<string, ReturnType<typeof setTimeout>> = {};
  const id = (section: string, key: string) => `${section}.${key}`;
  const several = $derived((settings?.sections.length ?? 0) > 1);

  $effect(() => {
    void load(name);
  });

  async function load(mod: string) {
    const s = await guard(api.readModSettings(mod));
    settings = s ?? null;
    const v: Record<string, string> = {};
    for (const sec of s?.sections ?? []) for (const st of sec.settings) v[id(sec.name, st.key)] = st.value;
    values = v;
  }

  /** Saves one value now, or after `wait` ms of no further change to it. */
  function set(section: string, key: string, value: string, wait = 0) {
    const k = id(section, key);
    values[k] = value;
    clearTimeout(timers[k]);
    timers[k] = setTimeout(() => {
      void guard(api.writeModSettings(name, [{ section, key, value }])).then((r) => {
        if (r !== undefined) flash();
      });
    }, wait);
  }

  function flash() {
    saved = true;
    setTimeout(() => {
      saved = false;
    }, 1500);
  }

  /** A number as the .ini should hold it: within the range, on the step. */
  function clamp(s: ModSetting, raw: number): string {
    if (s.control.kind !== "number" || !Number.isFinite(raw)) return String(raw);
    const { min, max, step } = s.control;
    let v = raw;
    if (min !== null) v = Math.max(min, v);
    if (max !== null) v = Math.min(max, v);
    if (step) v = Math.round(v / step) * step;
    const decimals = step ? Math.max(0, -Math.floor(Math.log10(step))) : 3;
    return Number(v.toFixed(decimals)).toString();
  }

  function record(k: string) {
    recording = k;
    held = [];
  }

  function onkeydown(e: KeyboardEvent) {
    if (!recording) return;
    e.preventDefault();
    // Esc alone cancels; with other keys held it is part of the combination.
    if (e.code === "Escape" && !held.length) {
      recording = null;
      return;
    }
    const vk = vkFromCode(e.code);
    if (vk !== null && !held.includes(vk)) held = [...held, vk];
  }

  function onkeyup(e: KeyboardEvent) {
    if (!recording || !held.length) return;
    e.preventDefault();
    const dot = recording.indexOf(".");
    set(recording.slice(0, dot), recording.slice(dot + 1), sortKeys(held).join(","));
    recording = null;
  }
</script>

<svelte:window {onkeydown} {onkeyup} />

<div class="panel">
  {#if settings === undefined}
    <p class="faint">Reading the settings…</p>
  {:else if settings === null}
    <p class="faint">This mod has no settings file.</p>
  {:else}
    {#each settings.sections as section (section.name)}
      {#if several}<h4>{section.name}</h4>{/if}
      {#each section.settings as s (s.key)}
        {@const k = id(section.name, s.key)}
        {@const v = values[k] ?? ""}
        <div class="setting">
          <span class="label">{s.label}</span>
          <div class="control">
            {#if s.control.kind === "toggle"}
              <Toggle
                checked={v === "1"}
                label={s.label}
                onchange={(on) => {
                  set(section.name, s.key, on ? "1" : "0");
                }}
              />
            {:else if s.control.kind === "number"}
              {@const c = s.control}
              {#if c.min !== null && c.max !== null}
                <input
                  type="range"
                  min={c.min}
                  max={c.max}
                  step={c.step ?? "any"}
                  value={Number(v)}
                  aria-label={s.label}
                  oninput={(e) => {
                    set(section.name, s.key, clamp(s, e.currentTarget.valueAsNumber), 300);
                  }}
                />
              {/if}
              <input
                class="num"
                type="number"
                min={c.min ?? undefined}
                max={c.max ?? undefined}
                step={c.step ?? "any"}
                value={v}
                aria-label={s.label}
                onchange={(e) => {
                  set(section.name, s.key, clamp(s, e.currentTarget.valueAsNumber));
                }}
              />
            {:else if s.control.kind === "choice"}
              <select
                value={v}
                aria-label={s.label}
                onchange={(e) => {
                  set(section.name, s.key, e.currentTarget.value);
                }}
              >
                {#each s.control.options as o (o)}<option value={o}>{o}</option>{/each}
              </select>
            {:else if s.control.kind === "keys"}
              {#if recording === k}
                <span class="combo live">{held.length ? comboText(held.join(",")) : "Press the keys…"}</span>
                <button
                  class="btn small ghost"
                  onclick={() => {
                    recording = null;
                  }}>Cancel</button
                >
              {:else}
                <span class="combo" class:faint={!keyCodes(v).length}>{comboText(v)}</span>
                <button
                  class="btn small"
                  onclick={() => {
                    record(k);
                  }}>Change</button
                >
                {#if keyCodes(v).length}
                  <button
                    class="btn small ghost"
                    onclick={() => {
                      set(section.name, s.key, "");
                    }}>Off</button
                  >
                {/if}
              {/if}
            {:else}
              <input
                class="text"
                type="text"
                value={v}
                spellcheck="false"
                aria-label={s.label}
                oninput={(e) => {
                  set(section.name, s.key, e.currentTarget.value, 600);
                }}
              />
            {/if}
            <!-- The reset button's place is kept on every row, so the controls line up. -->
            <span class="slot">
              {#if s.default !== null && v !== s.default && s.control.kind !== "toggle"}
                {@const back = s.default}
                <button
                  class="reset"
                  title={`Back to ${s.control.kind === "keys" ? comboText(back) : back}`}
                  aria-label={`Reset ${s.label}`}
                  onclick={() => {
                    set(section.name, s.key, back);
                  }}><Icon name="undo" size={13} /></button
                >
              {/if}
            </span>
          </div>
          {#if s.description}<p class="muted">{modDescription(s.description)}</p>{/if}
        </div>
      {/each}
    {/each}
    <p class="foot faint">
      {#if saved}<Icon name="check" size={13} />Saved.{/if} The game reads these when it starts.
    </p>
  {/if}
</div>

<style>
  .panel {
    margin: 10px 0 2px 58px;
    padding: 4px 14px 10px;
    border: 1px solid var(--line);
    border-radius: var(--radius-sm);
    background: var(--panel-2);
  }

  h4 {
    margin: 12px 0 2px;
    font-size: 12px;
    letter-spacing: 0.06em;
    text-transform: uppercase;
    color: var(--muted);
  }

  /* Name and control on one line, the description under both. */
  .setting {
    display: grid;
    grid-template-columns: minmax(0, 1fr) auto;
    column-gap: 16px;
    align-items: center;
    padding: 9px 0;
    border-top: 1px solid var(--line);
  }

  .setting:first-of-type {
    border-top: 0;
  }

  .label {
    font-size: 14px;
  }

  .control {
    display: flex;
    align-items: center;
    gap: 8px;
  }

  .setting p {
    grid-column: 1 / -1;
    margin-top: 2px;
    font-size: 12.5px;
  }

  input[type="range"] {
    width: 150px;
    accent-color: var(--accent);
  }

  .num {
    width: 74px !important;
  }

  .text {
    width: 160px !important;
  }

  .combo {
    min-width: 120px;
    font-size: 13px;
    text-align: right;
  }

  .combo.live {
    color: var(--accent);
  }

  .slot {
    width: 22px;
    flex: none;
  }

  .reset {
    display: grid;
    place-items: center;
    width: 22px;
    height: 22px;
    padding: 0;
    border: 0;
    border-radius: 50%;
    background: none;
    color: var(--muted);
    cursor: pointer;
  }

  .reset:hover {
    color: var(--text);
    background: var(--line);
  }

  .foot {
    display: flex;
    align-items: center;
    gap: 5px;
    margin-top: 8px;
    font-size: 12px;
  }
</style>
