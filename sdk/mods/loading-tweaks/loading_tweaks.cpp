// Loading screen changes, in DrawLoadingProgress (0x109E1E80, void __cdecl
// (float progress, bool force)): the loading code calls it many times, and
// every redraw presents a frame, which with VSynch on waits for the monitor.
//
// - MinRedrawMs: redraws closer together than this are skipped unless the
//   game forces one. The bar still moves (the next redraw catches up), and
//   loading spends less time waiting for the monitor.
// - HoldKeys: while these keys are held (and the game has the focus), loading
//   stops on the current screen, so its text can be read to the end.
//
// Settings, in loading-tweaks.ini next to the DLL:
//   [Loading]
//   MinRedrawMs=20    0 = every redraw, as the game does; at most 1000
//   HoldKeys=17       virtual-key codes held together (17 Ctrl); empty = off
//
// With both off the mod does not load.
#include <t3sdk/modkit.hpp>

#include <windows.h>

#include <cstdint>
#include <string>
#include <vector>

namespace {

// void __cdecl DrawLoadingProgress(float progress, bool force): redraws the loading screen with the bar at
// `progress`; `force` is set by the game when the redraw must not be skipped (docs/engine.md, "Display").
constexpr uintptr_t kDrawLoadingProgress = 0x109E1E80;

// The longest MinRedrawMs accepted; larger values are clamped to it.
constexpr DWORD kMaxMinRedrawMs = 1000;

using DrawFn = void(__cdecl*)(float progress, bool force);

// ---- state --------------------------------------------------------------------

const T3SdkApi* g_api = nullptr;

// The game's DrawLoadingProgress, called through the hook.
DrawFn g_draw = nullptr;

// Settings: the shortest time between two redraws, and the keys that hold loading.
DWORD g_minRedrawMs = 20;
std::vector<int> g_holdKeys;

// When the last redraw was let through (GetTickCount), and how many have been skipped since the start.
DWORD g_lastDraw = 0;
int g_skipped = 0;

// Set once the first skip burst and the first hold are logged.
bool g_loggedSkips = false;
bool g_loggedHold = false;

// ---- helpers ------------------------------------------------------------------

// Whether the player is holding loading: the keys are down and the game's window has the focus.
bool Held() {
    return t3mod::GameHasFocus() && t3mod::KeysDown(g_holdKeys);
}

// ---- logic --------------------------------------------------------------------

// Replaces DrawLoadingProgress: skips redraws that come too soon, and keeps redrawing the same screen while
// the hold keys are down.
void __cdecl DrawDetour(float progress, bool force) {
    DWORD now = GetTickCount();

    // A redraw the game does not force, and that follows the last one too closely, is skipped.
    if (!force && g_minRedrawMs && now - g_lastDraw < g_minRedrawMs) {
        // Log once when skipping has become routine (after 100 skipped redraws).
        if (++g_skipped == 100 && !g_loggedSkips) {
            g_loggedSkips = true;
            g_api->Log("loading screen redraws thinned out (%lu ms apart at least)", g_minRedrawMs);
        }

        return;
    }

    g_lastDraw = now;
    g_draw(progress, force);

    // Without the hold keys down the redraw is done: back to loading.
    if (!Held()) {
        return;
    }

    // Log the first hold only, not every one.
    if (!g_loggedHold) {
        g_loggedHold = true;
        g_api->Log("loading held while the keys are down");
    }

    // Peeking keeps Windows from marking the game as not responding; nothing is taken off the queue.
    MSG msg;

    // Keep redrawing the same screen until the keys are released.
    while (Held()) {
        PeekMessageW(&msg, nullptr, 0, 0, PM_NOREMOVE);
        Sleep(30);
        g_draw(progress, true);
    }

    g_lastDraw = GetTickCount();
}

}  // namespace

T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    g_api = api;

    std::wstring ini = t3mod::SettingsFile();
    g_minRedrawMs = DWORD(t3mod::ReadInt(ini, L"Loading", L"MinRedrawMs", 20));

    // Cap the interval at the most accepted.
    if (g_minRedrawMs > kMaxMinRedrawMs) {
        g_minRedrawMs = kMaxMinRedrawMs;
    }

    g_holdKeys = t3mod::ReadKeys(ini, L"Loading", L"HoldKeys", L"17");

    // Both features off: nothing to hook, do not load.
    if (!g_minRedrawMs && g_holdKeys.empty()) {
        api->Log("nothing to change; off");
        return 1;
    }

    // Without the hook neither feature works: do not load.
    if (!t3mod::Hook(api, kDrawLoadingProgress, reinterpret_cast<void*>(&DrawDetour), reinterpret_cast<void**>(&g_draw),
                     "loading screen")) {
        return 1;
    }

    api->Log("redraws at least %lu ms apart, hold keys %s", g_minRedrawMs, g_holdKeys.empty() ? "off" : "on");
    return 0;
}
