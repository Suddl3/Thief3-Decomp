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
// - WorldBehindBooks: books and scrolls show over the paused game instead of
//   a black screen ([ReadBookWindow] BlackScreen FALSE, as maps have it).
//
// Settings, in hud-tweaks.ini next to the DLL (each 1 = on, 0 = off):
//   [HUD]
//   SteadyJunkItem=1
//   HideEmptyHands=0
//   HealthAlwaysShown=0
//   WorldBehindBooks=0
#include <t3sdk/t3sdk.h>

#include <windows.h>

#include <atomic>
#include <cstring>
#include <string>

namespace {

const T3SdkApi* g_api = nullptr;
bool g_healthAlwaysShown = false;
std::string g_healthPosX;
std::string g_healthPosY;
std::atomic<bool> g_loggedHealth = false;

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

std::wstring ModFile(const wchar_t* extension) {
    HMODULE self = nullptr;
    GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                       reinterpret_cast<LPCWSTR>(&ModFile), &self);
    wchar_t path[MAX_PATH];
    GetModuleFileNameW(self, path, MAX_PATH);
    std::wstring file = path;
    return file.substr(0, file.find_last_of(L'.')) + extension;
}

// The game's System folder: the executable's.
std::wstring SystemFile(const wchar_t* name) {
    wchar_t path[MAX_PATH];
    GetModuleFileNameW(nullptr, path, MAX_PATH);
    std::wstring file = path;
    return file.substr(0, file.find_last_of(L'\\') + 1) + name;
}

std::string ReadIni(const std::wstring& file, const wchar_t* section, const wchar_t* key) {
    wchar_t text[64] = L"";
    GetPrivateProfileStringW(section, key, L"", text, 64, file.c_str());
    char narrow[64] = "";
    WideCharToMultiByte(CP_ACP, 0, text, -1, narrow, sizeof(narrow), nullptr, nullptr);
    return narrow;
}

}  // namespace

T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    if (api->version < 2) {
        return 1;
    }
    g_api = api;
    std::wstring ini = ModFile(L".ini");
    bool steadyJunk = GetPrivateProfileIntW(L"HUD", L"SteadyJunkItem", 1, ini.c_str()) != 0;
    bool hideEmptyHands = GetPrivateProfileIntW(L"HUD", L"HideEmptyHands", 0, ini.c_str()) != 0;
    g_healthAlwaysShown = GetPrivateProfileIntW(L"HUD", L"HealthAlwaysShown", 0, ini.c_str()) != 0;
    bool worldBehindBooks = GetPrivateProfileIntW(L"HUD", L"WorldBehindBooks", 0, ini.c_str()) != 0;

    if (steadyJunk) {
        api->SetConfigValue(nullptr, "JunkItemWindow", "FlashOffTime", "0");
    }
    if (hideEmptyHands) {
        // A space, not "": an empty value reads as missing, and the game would use its default text.
        api->SetConfigValue(nullptr, "ItemCycleWindow", "DeEquipText", " ");
        api->SetConfigValue(nullptr, "WeaponCycleWindow", "DeEquipText", " ");
    }
    if (worldBehindBooks) {
        api->SetConfigValue(nullptr, "ReadBookWindow", "BlackScreen", "FALSE");
    }
    if (g_healthAlwaysShown) {
        std::wstring ui = SystemFile(L"T3UI.ini");
        g_healthPosX = ReadIni(ui, L"HealthMeter", L"Pos_X");
        g_healthPosY = ReadIni(ui, L"HealthMeter", L"Pos_Y");
        api->AddConfigCallback(OnConfig, nullptr);
    }
    api->Log("steady junk item %s, empty-hand texts %s, health always shown %s, world behind books %s",
             steadyJunk ? "on" : "off", hideEmptyHands ? "hidden" : "shown", g_healthAlwaysShown ? "on" : "off",
             worldBehindBooks ? "on" : "off");
    return 0;
}
