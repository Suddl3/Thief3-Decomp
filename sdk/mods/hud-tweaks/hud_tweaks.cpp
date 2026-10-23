// Small HUD changes, made by answering the game's own T3UI.ini settings as
// it reads them (SetConfigValue / AddConfigCallback):
//
// - SteadyJunkItem: a picked-up junk item stays lit instead of flashing
//   ([JunkItemWindow] FlashOffTime 0: the off half of the flash never comes).
// - HideEmptyHands: no "nothing equipped" text in the item and weapon cycles
//   ([ItemCycleWindow] / [WeaponCycleWindow] DeEquipText blank).
// - HealthAlwaysShown: the health bar stays on screen. It slides to its
//   ClearPos_X/ClearPos_Y (below the screen) when nothing changes; the mod
//   answers those with its Pos_X/Pos_Y, read from the same file.
// - HideLockpickHud: the lockpicking HUD (the picks' positions) is moved
//   below the screen ([LockPickHUDWindow] Pos_Y, placed from the bottom).
// - WorldBehindBooks: books and scrolls show over the paused game instead of
//   a black screen ([ReadBookWindow] BlackScreen FALSE, as maps have it).
//
// Settings, in hud-tweaks.ini next to the DLL (each 1 = on, 0 = off):
//   [HUD]
//   SteadyJunkItem=1
//   HideEmptyHands=0
//   HealthAlwaysShown=0
//   HideLockpickHud=0
//   WorldBehindBooks=0
#include <t3sdk/modkit.hpp>

#include <windows.h>

#include <atomic>
#include <cstring>
#include <string>

namespace {

// ---- state --------------------------------------------------------------------

const T3SdkApi* g_api = nullptr;

// Whether OnConfig answers the health bar's ClearPos settings.
bool g_healthAlwaysShown = false;

// The health bar's Pos_X / Pos_Y from T3UI.ini, given back for ClearPos_X / ClearPos_Y.
std::string g_healthPosX;
std::string g_healthPosY;

// Set once the first health bar answer is logged. OnConfig may run on any thread.
std::atomic<bool> g_loggedHealth = false;

// ---- helpers ------------------------------------------------------------------

// A value of an INI file as an ANSI string, empty when missing.
std::string ReadIni(const std::wstring& file, const wchar_t* section, const wchar_t* key) {
    wchar_t text[64] = L"";
    GetPrivateProfileStringW(section, key, L"", text, 64, file.c_str());

    char narrow[64] = "";
    WideCharToMultiByte(CP_ACP, 0, text, -1, narrow, sizeof(narrow), nullptr, nullptr);
    return narrow;
}

// ---- logic --------------------------------------------------------------------

// Config callback: replaces the health bar's ClearPos_X / ClearPos_Y with its Pos_X / Pos_Y, so it never
// slides away. Returns the replacement, or nullptr to leave the value alone.
const char* T3SDK_CALL OnConfig(void*, const char*, const char* section, const char* key, const char* value) {
    if (!g_healthAlwaysShown || _stricmp(section, "HealthMeter") != 0) {
        return nullptr;
    }

    const std::string* answer = nullptr;

    if (_stricmp(key, "ClearPos_X") == 0) {
        answer = &g_healthPosX;
    } else if (_stricmp(key, "ClearPos_Y") == 0) {
        answer = &g_healthPosY;
    }

    if (!answer || answer->empty()) {
        return nullptr;
    }

    if (!g_loggedHealth.exchange(true)) {
        g_api->Log("health bar kept on screen (%s %s instead of %s)", key, answer->c_str(), value ? value : "none");
    }

    return answer->c_str();
}

}  // namespace

T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    if (api->version < 2) {
        return 1;
    }

    g_api = api;

    std::wstring ini = t3mod::SettingsFile();
    bool steadyJunk = t3mod::ReadBool(ini, L"HUD", L"SteadyJunkItem", true);
    bool hideEmptyHands = t3mod::ReadBool(ini, L"HUD", L"HideEmptyHands", false);
    g_healthAlwaysShown = t3mod::ReadBool(ini, L"HUD", L"HealthAlwaysShown", false);
    bool worldBehindBooks = t3mod::ReadBool(ini, L"HUD", L"WorldBehindBooks", false);
    bool hideLockpickHud = t3mod::ReadBool(ini, L"HUD", L"HideLockpickHud", false);

    if (steadyJunk) {
        api->SetConfigValue(nullptr, "JunkItemWindow", "FlashOffTime", "0");
    }

    if (hideEmptyHands) {
        // A space, not "": an empty value reads as missing, and the game would use its default text.
        api->SetConfigValue(nullptr, "ItemCycleWindow", "DeEquipText", " ");
        api->SetConfigValue(nullptr, "WeaponCycleWindow", "DeEquipText", " ");
    }

    if (hideLockpickHud) {
        api->SetConfigValue(nullptr, "LockPickHUDWindow", "Pos_Y", "4000");
    }

    if (worldBehindBooks) {
        api->SetConfigValue(nullptr, "ReadBookWindow", "BlackScreen", "FALSE");
    }

    if (g_healthAlwaysShown) {
        std::wstring ui = t3mod::SystemFile(L"T3UI.ini");
        g_healthPosX = ReadIni(ui, L"HealthMeter", L"Pos_X");
        g_healthPosY = ReadIni(ui, L"HealthMeter", L"Pos_Y");
        api->AddConfigCallback(OnConfig, nullptr);
    }

    api->Log("steady junk item %s, empty-hand texts %s, health always shown %s, lockpick HUD %s, world behind books %s",
             steadyJunk ? "on" : "off", hideEmptyHands ? "hidden" : "shown", g_healthAlwaysShown ? "on" : "off",
             hideLockpickHud ? "hidden" : "shown", worldBehindBooks ? "on" : "off");
    return 0;
}
