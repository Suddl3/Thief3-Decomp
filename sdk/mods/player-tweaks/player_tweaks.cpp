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
//   Gravity=1.0     gravity multiplier above 0 and up to 10 (0.5 = moon-like, 1 = as the game has it)
//
// With both settings as the game has them, the mod does not load.
#include <t3sdk/modkit.hpp>

#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

namespace {

// The T3PlayerAnims.ini sections of the standing-still animations (StillIdle).
const char* const kIdleSections[] = {"MainIdle", "MainIdleCrouching", "MainIdle_PS", "BodyCarryIdle",
                                     "BodyCarryIdleCrouching"};

// ---- state --------------------------------------------------------------------

const T3SdkApi* g_api = nullptr;
bool g_stillIdle = false;
float g_gravity = 1.0f;

// Set once the first answer of each kind is logged. OnConfig may run on any thread.
std::atomic<bool> g_loggedIdle = false;
std::atomic<bool> g_loggedGravity = false;

// ---- helpers ------------------------------------------------------------------

// Whether a T3PlayerAnims.ini section is one of the standing-still animations.
bool IsIdleSection(const char* section) {
    for (const char* idle : kIdleSections) {
        if (_stricmp(section, idle) == 0) {
            return true;
        }
    }
    return false;
}

// ---- logic --------------------------------------------------------------------

// Config callback: holds the idle animations still (Speed 0) and scales the gravity settings. Returns the
// replacement value, or nullptr to leave the setting alone.
const char* T3SDK_CALL OnConfig(void*, const char*, const char* section, const char* key, const char* value) {
    // The answer must outlive the call, so it lives in the calling thread.
    thread_local std::string answer;

    if (g_stillIdle && _stricmp(key, "Speed") == 0 && IsIdleSection(section)) {
        if (!g_loggedIdle.exchange(true)) {
            g_api->Log("idle animations held still");
        }
        return "0";
    }

    bool isGravity = value && ((_stricmp(section, "Physics") == 0 && _stricmp(key, "WorldGravityZ") == 0) ||
                               (_stricmp(section, "PointPhysics") == 0 && _stricmp(key, "Gravity") == 0));
    if (g_gravity == 1.0f || !isGravity) {
        return nullptr;
    }

    char text[32];
    snprintf(text, sizeof(text), "%g", atof(value) * g_gravity);
    answer = text;
    if (!g_loggedGravity.exchange(true)) {
        g_api->Log("gravity x%.2f ([%s] %s %s -> %s)", g_gravity, section, key, value, text);
    }
    return answer.c_str();
}

}  // namespace

T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    if (api->version < 2) {
        return 1;
    }
    g_api = api;

    std::wstring ini = t3mod::SettingsFile();
    g_stillIdle = t3mod::ReadBool(ini, L"Player", L"StillIdle", false);
    g_gravity = t3mod::ReadFloat(ini, L"Player", L"Gravity", 1.0f, 0.0f, 10.0f);
    if (g_gravity <= 0.0f) {
        g_gravity = 1.0f;  // ReadFloat accepts 0; a gravity of zero is not accepted here
    }

    if (!g_stillIdle && g_gravity == 1.0f) {
        api->Log("nothing to change; off");
        return 1;
    }

    api->AddConfigCallback(OnConfig, nullptr);
    api->Log("still idle %s, gravity x%.2f", g_stillIdle ? "on" : "off", g_gravity);
    return 0;
}
