// Player and world tweaks, made by answering the game's settings as it reads
// them (AddConfigCallback):
//
// - StillIdle: Garrett stops his breathing sway while standing still. The
//   idle animations of T3PlayerAnims.ini ([MainIdle], [MainIdleCrouching],
//   [MainIdle_PS], [BodyCarryIdle], [BodyCarryIdleCrouching]) get Speed 0.
// - Gravity: multiplies gravity: Default.ini [Physics] WorldGravityZ (Havok,
//   the player and physics objects) and [PointPhysics] Gravity (flinders).
//
// Settings, in player-tweaks.ini next to the DLL:
//   [Player]
//   StillIdle=0     1 = no breathing sway while idle
//   Gravity=1.0     gravity multiplier (0.5 = moon-like, 1 = as the game has it)
#include <t3sdk/t3sdk.h>

#include <windows.h>

#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cwchar>
#include <string>

namespace {

const char* const kIdleSections[] = {"MainIdle", "MainIdleCrouching", "MainIdle_PS", "BodyCarryIdle",
                                     "BodyCarryIdleCrouching"};

const T3SdkApi* g_api = nullptr;
bool g_stillIdle = false;
float g_gravity = 1.0f;
std::atomic<bool> g_loggedIdle = false;
std::atomic<bool> g_loggedGravity = false;

bool IsIdleSection(const char* section) {
    for (const char* idle : kIdleSections) {
        if (_stricmp(section, idle) == 0) {
            return true;
        }
    }
    return false;
}

const char* T3SDK_CALL OnConfig(void*, const char*, const char* section, const char* key, const char* value) {
    thread_local std::string answer;
    if (g_stillIdle && _stricmp(key, "Speed") == 0 && IsIdleSection(section)) {
        if (!g_loggedIdle.exchange(true)) {
            g_api->Log("idle animations held still");
        }
        return "0";
    }
    if (g_gravity != 1.0f && value &&
        ((_stricmp(section, "Physics") == 0 && _stricmp(key, "WorldGravityZ") == 0) ||
         (_stricmp(section, "PointPhysics") == 0 && _stricmp(key, "Gravity") == 0))) {
        char text[32];
        snprintf(text, sizeof(text), "%g", atof(value) * g_gravity);
        answer = text;
        if (!g_loggedGravity.exchange(true)) {
            g_api->Log("gravity x%.2f ([%s] %s %s -> %s)", g_gravity, section, key, value, text);
        }
        return answer.c_str();
    }
    return nullptr;
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
    if (api->version < 2) {
        return 1;
    }
    g_api = api;
    std::wstring ini = IniPath();
    g_stillIdle = GetPrivateProfileIntW(L"Player", L"StillIdle", 0, ini.c_str()) != 0;
    wchar_t text[32];
    GetPrivateProfileStringW(L"Player", L"Gravity", L"1", text, 32, ini.c_str());
    g_gravity = float(wcstod(text, nullptr));
    if (g_gravity <= 0.0f || g_gravity > 10.0f) {
        g_gravity = 1.0f;
    }
    if (!g_stillIdle && g_gravity == 1.0f) {
        api->Log("nothing to change; off");
        return 1;
    }
    api->AddConfigCallback(OnConfig, nullptr);
    api->Log("still idle %s, gravity x%.2f", g_stillIdle ? "on" : "off", g_gravity);
    return 0;
}
