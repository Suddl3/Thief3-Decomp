// Widescreen field of view (Hor+). The game's cameras take their FOV from
// gamesys properties sized for 4:3, so a wider screen shows the same width
// and crops the top and bottom. This mod converts those horizontal FOVs as
// the game reads them so the vertical view stays what it is at 4:3 and the
// sides widen (Hor+: tan(h'/2) = tan(h/2) * aspect / (4/3)), and can move the
// player's FOV.
//
// The reads go through the property getter at 0x1098E330
// (int __thiscall (uint32_t id, void* out); docs/engine.md, "Gamesys
// properties"); the IDs below are the FOV properties of the player camera and
// the zoom views. Settings, in widescreen-fov.ini next to the DLL:
//   [FOV]
//   HorPlus=1      widen the FOVs on screens wider than 4:3 (default 1)
//   PlayerFOV=85   the player camera's FOV at 4:3, 30 to 150 degrees (default
//                  and the game's value: 85; anything else is ignored)
//   LogReads=0     log the first read of each FOV property, with its value
//                  (default 0)
#include <t3sdk/modkit.hpp>
#include <t3sdk/t3sdk.h>

#include <windows.h>

#include <atomic>
#include <cmath>
#include <cstdint>
#include <iterator>
#include <string>

namespace {

// int __thiscall GetPropertyValue(uint32_t id, void* out): the gamesys property getter
// (docs/engine.md, "Gamesys properties"). Declared __fastcall with an unused edx.
constexpr uintptr_t kPropertyGet = 0x1098E330;

// Gamesys ID of the player camera's FOV.
constexpr uint32_t kPlayerCamera = 0x100534;

// Bit the IDs above carry; the getter is sometimes called without it.
constexpr uint32_t kPropertyIdBit = 0x100000;

// Gamesys IDs (with kPropertyIdBit set) whose values are FOVs, in degrees.
constexpr uint32_t kFovProperties[] = {0x100509, 0x10050A, 0x10050C, 0x100534, 0x100775,
                                       0x100776, 0x100777, 0x10084E, 0x10084F};

// The aspect ratio the game's FOVs are designed for (4:3).
constexpr float kDesignedAspect = 4.0f / 3.0f;

// The player camera's FOV in the game, in degrees; PlayerFOV is relative to it.
constexpr float kGamePlayerFov = 85.0f;

// Accepted range of the PlayerFOV setting, in degrees.
constexpr float kMinPlayerFov = 30.0f;
constexpr float kMaxPlayerFov = 150.0f;

// How often the window's aspect is checked, in milliseconds.
constexpr DWORD kAspectCheckMs = 1000;

using PropertyGetFn = int(__fastcall*)(void* self, void* edx, uint32_t id, void* out);

// The SDK's function table, kept from T3Mod_Init.
const T3SdkApi* g_api = nullptr;

// The game's property getter, called through by the detour.
PropertyGetFn g_get = nullptr;

// Settings (see the header comment), fixed after T3Mod_Init.
bool g_horPlus = true;
float g_playerFov = kGamePlayerFov;
bool g_logReads = false;

// The aspect of the game's window: written by the frame callback (main
// thread), read by the property detour on whichever thread reads a property.
std::atomic<float> g_aspect = 0.0f;  // 0 until the game window is known

// Bit i is set once kFovProperties[i] has been logged (LogReads).
uint32_t g_logged = 0;

// The horizontal FOV at `aspect` that shows the vertical view `fov` shows at
// 4:3. A value that is not an angle (0 or below, 180 or above) stays as it is.
float HorPlus(float fov, float aspect) {
    if (fov <= 0.0f || fov >= 180.0f) {
        return fov;
    }

    constexpr double kDegrees = 3.14159265358979323846 / 180.0;
    double half = std::tan(fov * kDegrees / 2.0) * aspect / kDesignedAspect;
    return float(2.0 * std::atan(half) / kDegrees);
}

// The position of gamesys ID `id` in kFovProperties, or -1 when it is not a FOV.
int FovIndex(uint32_t id) {
    id |= kPropertyIdBit;

    for (int i = 0; i < int(std::size(kFovProperties)); ++i) {
        if (kFovProperties[i] == id) {
            return i;
        }
    }

    return -1;
}

// Detour of the property getter: lets the game read the value, then moves the
// player camera's FOV (PlayerFOV) and widens every FOV (Hor+).
int __fastcall PropertyGetDetour(void* self, void* edx, uint32_t id, void* out) {
    int found = g_get(self, edx, id, out);
    int index = found && out ? FovIndex(id) : -1;

    if (index < 0) {
        return found;
    }

    float* fov = static_cast<float*>(out);
    float original = *fov;

    if ((id | kPropertyIdBit) == kPlayerCamera) {
        *fov += g_playerFov - kGamePlayerFov;
    }

    float aspect = g_aspect;

    if (g_horPlus && aspect > kDesignedAspect) {
        *fov = HorPlus(*fov, aspect);
    }

    if (g_logReads && !(g_logged & (1u << index))) {
        g_logged |= 1u << index;
        g_api->Log("FOV property %06X: %.2f -> %.2f (aspect %.3f)", id | kPropertyIdBit, original, *fov, aspect);
    }

    return found;
}

// EnumWindows callback: grows the RECT in `param` to the client area of the
// largest visible top-level window of this process, which is the game's.
BOOL CALLBACK FindGameWindow(HWND window, LPARAM param) {
    DWORD pid = 0;
    GetWindowThreadProcessId(window, &pid);

    RECT rect;

    if (pid == GetCurrentProcessId() && IsWindowVisible(window) && GetClientRect(window, &rect)) {
        auto* best = reinterpret_cast<RECT*>(param);

        if (rect.right * rect.bottom > best->right * best->bottom) {
            *best = rect;
        }
    }

    return TRUE;
}

// Frame callback (main thread): once a second, finds the game window's aspect
// and logs it when it changes.
void T3SDK_CALL OnFrame(void*) {
    static DWORD last = 0;
    DWORD now = GetTickCount();

    if (now - last < kAspectCheckMs) {
        return;  // A resolution change shows up within a second.
    }

    last = now;

    RECT best{};
    EnumWindows(FindGameWindow, reinterpret_cast<LPARAM>(&best));

    if (best.right <= 0 || best.bottom <= 0) {
        return;
    }

    float aspect = float(best.right) / float(best.bottom);

    if (aspect != g_aspect.exchange(aspect)) {
        g_api->Log("screen aspect %.3f (%ldx%ld): FOVs %s", aspect, best.right, best.bottom,
                   g_horPlus && aspect > kDesignedAspect ? "widened" : "as designed");
    }
}

// Reads widescreen-fov.ini. A PlayerFOV that is missing, not a number or
// outside the accepted range is the game's own FOV.
void LoadSettings() {
    std::wstring ini = t3mod::SettingsFile();
    g_horPlus = t3mod::ReadBool(ini, L"FOV", L"HorPlus", true);
    g_playerFov = t3mod::ReadFloat(ini, L"FOV", L"PlayerFOV", kGamePlayerFov, kMinPlayerFov, kMaxPlayerFov);
    g_logReads = t3mod::ReadBool(ini, L"FOV", L"LogReads", false);
}

}  // namespace

// Called by the SDK when the mod is loaded. Returns non-zero (the mod stays
// off) when the property getter cannot be hooked.
T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    g_api = api;
    LoadSettings();

    if (!t3mod::Hook(api, kPropertyGet, reinterpret_cast<void*>(&PropertyGetDetour), reinterpret_cast<void**>(&g_get),
                     "property getter")) {
        return 1;
    }

    api->AddFrameCallback(OnFrame, nullptr);

    api->Log("Hor+ %s, player FOV %.1f", g_horPlus ? "on" : "off", g_playerFov);
    return 0;
}
