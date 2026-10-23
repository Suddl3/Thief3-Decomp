import { mount } from "svelte";
// The launcher's typefaces, bundled so it needs no network (THIRD_PARTY_NOTICES.md, "Fonts"): Grenze for
// headings, Barlow for everything else.
import "@fontsource/grenze/600.css";
import "@fontsource/barlow/400.css";
import "@fontsource/barlow/500.css";
import "@fontsource/barlow/600.css";
import "./app.css";
import App from "./App.svelte";

const target = document.getElementById("app");
if (!target) throw new Error("index.html has no #app element");

export default mount(App, { target });
