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
//   HorPlus=1      widen the FOVs on screens wider than 4:3
//   PlayerFOV=85   the player camera's FOV at 4:3 (the game's is 85)
//   LogReads=0     log the first read of each FOV property, with its value
#include <t3sdk/t3sdk.h>

#include <windows.h>

#include <atomic>
#include <cmath>
#include <cstdint>
#include <cwchar>
#include <string>

namespace {

constexpr uintptr_t kPropertyGet = 0x1098E330;
constexpr uint32_t kPlayerCamera = 0x100534;
// Gamesys IDs (with bit 0x100000 set, as the getter is sometimes called without it) whose values are FOVs.
constexpr uint32_t kFovProperties[] = {0x100509, 0x10050A, 0x10050C, 0x100534, 0x100775,
                                       0x100776, 0x100777, 0x10084E, 0x10084F};
constexpr float kDesignedAspect = 4.0f / 3.0f;
constexpr float kGamePlayerFov = 85.0f;

using PropertyGetFn = int(__fastcall*)(void* self, void* edx, uint32_t id, void* out);

const T3SdkApi* g_api = nullptr;
PropertyGetFn g_get = nullptr;
bool g_horPlus = true;
float g_playerFov = kGamePlayerFov;
bool g_logReads = false;
std::atomic<float> g_aspect = 0.0f;  // 0 until the game window is known
uint32_t g_logged = 0;               // bit i: kFovProperties[i] was logged

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

int FovIndex(uint32_t id) {
    id |= 0x100000;
    for (int i = 0; i < int(std::size(kFovProperties)); ++i) {
        if (kFovProperties[i] == id) {
            return i;
        }
    }
    return -1;
}

int __fastcall PropertyGetDetour(void* self, void* edx, uint32_t id, void* out) {
    int found = g_get(self, edx, id, out);
    int index = found && out ? FovIndex(id) : -1;
    if (index < 0) {
        return found;
    }
    float* fov = static_cast<float*>(out);
    float original = *fov;
    if ((id | 0x100000) == kPlayerCamera) {
        *fov += g_playerFov - kGamePlayerFov;
    }
    float aspect = g_aspect;
    if (g_horPlus && aspect > kDesignedAspect) {
        *fov = HorPlus(*fov, aspect);
    }
    if (g_logReads && !(g_logged & (1u << index))) {
        g_logged |= 1u << index;
        g_api->Log("FOV property %06X: %.2f -> %.2f (aspect %.3f)", id | 0x100000, original, *fov, aspect);
    }
    return found;
}

// The aspect of the game's window, once it has one: the largest visible
// top-level window of this process.
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

void T3SDK_CALL OnFrame(void*) {
    static DWORD last = 0;
    DWORD now = GetTickCount();
    if (now - last < 1000) {
        return;  // a resolution change shows up within a second
    }
    last = now;
    RECT best{};
    EnumWindows(FindGameWindow, reinterpret_cast<LPARAM>(&best));
    if (best.right > 0 && best.bottom > 0) {
        float aspect = float(best.right) / float(best.bottom);
        if (aspect != g_aspect.exchange(aspect)) {
            g_api->Log("screen aspect %.3f (%ldx%ld): FOVs %s", aspect, best.right, best.bottom,
                       g_horPlus && aspect > kDesignedAspect ? "widened" : "as designed");
        }
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

void LoadSettings() {
    std::wstring ini = IniPath();
    g_horPlus = GetPrivateProfileIntW(L"FOV", L"HorPlus", 1, ini.c_str()) != 0;
    wchar_t text[32];
    GetPrivateProfileStringW(L"FOV", L"PlayerFOV", L"85", text, 32, ini.c_str());
    g_playerFov = float(wcstod(text, nullptr));
    if (g_playerFov < 30.0f || g_playerFov > 150.0f) {
        g_playerFov = kGamePlayerFov;
    }
    g_logReads = GetPrivateProfileIntW(L"FOV", L"LogReads", 0, ini.c_str()) != 0;
}

}  // namespace

T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    g_api = api;
    LoadSettings();
    auto target = reinterpret_cast<void*>(kPropertyGet);
    int status = api->CreateHook(target, reinterpret_cast<void*>(&PropertyGetDetour), reinterpret_cast<void**>(&g_get));
    if (status == 0) {
        status = api->EnableHook(target);
    }
    if (status != 0) {
        api->Log("property getter hook failed (MinHook status %d)", status);
        return 1;
    }
    api->AddFrameCallback(OnFrame, nullptr);
    api->Log("Hor+ %s, player FOV %.1f", g_horPlus ? "on" : "off", g_playerFov);
    return 0;
}
