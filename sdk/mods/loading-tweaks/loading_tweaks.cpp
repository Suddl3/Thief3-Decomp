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
//   MinRedrawMs=20    0 = every redraw, as the game does
//   HoldKeys=17       virtual-key codes held together (17 Ctrl); empty = off
#include <t3sdk/t3sdk.h>

#include <windows.h>

#include <cstdint>
#include <cwchar>
#include <string>
#include <vector>

namespace {

constexpr uintptr_t kDrawLoadingProgress = 0x109E1E80;

using DrawFn = void(__cdecl*)(float progress, bool force);

const T3SdkApi* g_api = nullptr;
DrawFn g_draw = nullptr;
DWORD g_minRedrawMs = 20;
std::vector<int> g_holdKeys;
DWORD g_lastDraw = 0;
int g_skipped = 0;
bool g_loggedSkips = false;
bool g_loggedHold = false;

bool GameHasFocus() {
    DWORD pid = 0;
    GetWindowThreadProcessId(GetForegroundWindow(), &pid);
    return pid == GetCurrentProcessId();
}

bool Held() {
    if (g_holdKeys.empty() || !GameHasFocus()) {
        return false;
    }
    for (int key : g_holdKeys) {
        if (!(GetAsyncKeyState(key) & 0x8000)) {
            return false;
        }
    }
    return true;
}

void __cdecl DrawDetour(float progress, bool force) {
    DWORD now = GetTickCount();
    if (!force && g_minRedrawMs && now - g_lastDraw < g_minRedrawMs) {
        if (++g_skipped == 100 && !g_loggedSkips) {
            g_loggedSkips = true;
            g_api->Log("loading screen redraws thinned out (%lu ms apart at least)", g_minRedrawMs);
        }
        return;
    }
    g_lastDraw = now;
    g_draw(progress, force);
    if (Held()) {
        if (!g_loggedHold) {
            g_loggedHold = true;
            g_api->Log("loading held while the keys are down");
        }
        // Peeking keeps Windows from marking the game as not responding; nothing is taken off the queue.
        MSG msg;
        while (Held()) {
            PeekMessageW(&msg, nullptr, 0, 0, PM_NOREMOVE);
            Sleep(30);
            g_draw(progress, true);
        }
        g_lastDraw = GetTickCount();
    }
}

std::wstring IniPath() {
    HMODULE self = nullptr;
    GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                       reinterpret_cast<LPCWSTR>(&IniPath), &self);
    wchar_t path[MAX_PATH];
    GetModuleFileNameW(self, path, MAX_PATH);
    std::wstring ini = path;
    return ini.substr(0, ini.find_last_of(L'.')) + L".ini";
}

}  // namespace

T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    g_api = api;
    std::wstring ini = IniPath();
    g_minRedrawMs = GetPrivateProfileIntW(L"Loading", L"MinRedrawMs", 20, ini.c_str());
    if (g_minRedrawMs > 1000) {
        g_minRedrawMs = 1000;
    }
    wchar_t text[64];
    GetPrivateProfileStringW(L"Loading", L"HoldKeys", L"17", text, 64, ini.c_str());
    for (wchar_t* p = text; *p;) {
        wchar_t* end = nullptr;
        long key = wcstol(p, &end, 0);
        if (end == p) {
            break;
        }
        if (key > 0 && key < 256) {
            g_holdKeys.push_back(int(key));
        }
        p = *end ? end + 1 : end;
    }
    if (!g_minRedrawMs && g_holdKeys.empty()) {
        api->Log("nothing to change; off");
        return 1;
    }
    auto target = reinterpret_cast<void*>(kDrawLoadingProgress);
    int status = api->CreateHook(target, reinterpret_cast<void*>(&DrawDetour), reinterpret_cast<void**>(&g_draw));
    if (status == 0) {
        status = api->EnableHook(target);
    }
    if (status != 0) {
        api->Log("loading screen hook failed (MinHook status %d)", status);
        return 1;
    }
    api->Log("redraws at least %lu ms apart, hold keys %s", g_minRedrawMs, g_holdKeys.empty() ? "off" : "on");
    return 0;
}
