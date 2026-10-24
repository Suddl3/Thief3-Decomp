<script lang="ts">
  // The button on a mod's row that opens its settings under the row.
  import Icon from "$components/Icon.svelte";

  let { label, open, ontoggle }: { label: string; open: boolean; ontoggle: () => void } = $props();
</script>

<button
  class="btn small ghost gear"
  class:active={open}
  aria-expanded={open}
  aria-label={`Settings for ${label}`}
  title="Settings"
  onclick={ontoggle}><Icon name="sliders" size={15} /></button
>

<style>
  .gear {
    flex: none;
    padding: 4px 7px;
  }

  .gear.active {
    color: var(--accent);
  }
</style>
