// Fixes for two difficulty bugs of the original game:
//
// - Missions play at Normal whatever was chosen. The AI's difficulty
//   multipliers ([Difficulty] Difficulty_AIVisual_Mult_<level> and the rest,
//   picked by the gamesys values dif_AISenses and dif_AICombat) are loaded by
//   0x10AB70B0, which nothing calls when a mission loads, so the AI keeps
//   the multipliers it started with. The mod calls it once the map is in
//   (a code hook in UGameEngine::Virtual32, the level load).
// - The Enter Mission and Restart Mission menus offer their default
//   difficulty (Easy on a restart) instead of the one being played. After
//   the game opens either menu, the mod writes the current difficulty
//   (dif_currdifficulty) into the mission record the menu edits.
//
// Settings, in difficulty-fixes.ini next to the DLL:
//   [Difficulty]
//   ApplyOnMissionLoad=1   load the difficulty multipliers when a mission loads
//   KeepInMissionMenus=1   preselect the current difficulty in the mission menus
#include <t3sdk/t3sdk.h>

#include <windows.h>

#include <cstdint>
#include <string>

namespace {

constexpr uintptr_t kAfterLevelLoad = 0x10985ADC;           // UGameEngine::Virtual32, after the map is loaded
constexpr uintptr_t kLoadDifficultyMultipliers = 0x10AB70B0;  // void (), reads [Difficulty] for the gamesys levels
constexpr uintptr_t kGetStats = 0x10A18230;                 // Stats* __cdecl GetStats()
constexpr uintptr_t kFNameConstruct = 0x10AF9E20;           // FName::FName(const char*, EFindName)
constexpr uintptr_t kOpenEnterMissionWindow = 0x10B15B20;   // bool WindowManager::OpenEnterMissionWindow(bool)
constexpr uintptr_t kOpenRestartMissionWindow = 0x10B15BF0; // bool WindowManager::OpenRestartMissionWindow()
constexpr uintptr_t kMissionFlow = 0x10F3A3D8;              // pointer; +0x150: the menus' mission records
constexpr uintptr_t kFixedDifficulty = 0x10ABE130;          // bool __cdecl (mission): gamesys 0x800864 == 1
constexpr uint32_t kDifficultyField = 0x174;                // in a mission record
constexpr int kCustomDifficulty = 4;                        // dif_currdifficulty: 0 Easy .. 3 Expert, 4 custom
constexpr int kFNameAdd = 1;

using OpenEnterFn = bool(__fastcall*)(void* self, void* edx, bool arg);
using OpenRestartFn = bool(__fastcall*)(void* self, void* edx);

const T3SdkApi* g_api = nullptr;
OpenEnterFn g_openEnter = nullptr;
OpenRestartFn g_openRestart = nullptr;

int CurrentDifficulty() {
    void* stats = reinterpret_cast<void*(__cdecl*)()>(kGetStats)();
    if (!stats) {
        return -1;
    }
    uint32_t name = 0;
    reinterpret_cast<void*(__fastcall*)(uint32_t*, void*, const char*, int)>(kFNameConstruct)(
        &name, nullptr, "dif_currdifficulty", kFNameAdd);
    auto get = (*reinterpret_cast<int(__fastcall***)(void*, void*, uint32_t)>(stats))[0];
    return get(stats, nullptr, name);
}

void T3SDK_CALL AfterLevelLoad(void*, T3Registers*) {
    reinterpret_cast<void(__fastcall*)(void*, void*)>(kLoadDifficultyMultipliers)(nullptr, nullptr);
    g_api->Log("level loaded: difficulty multipliers loaded for difficulty %d", CurrentDifficulty());
}

// Writes the current difficulty into the mission record the menu edits:
// +4/+8 (mission, record) for Enter Mission, +0xC/+0x10 for Restart Mission.
void PreselectDifficulty(bool restart) {
    int difficulty = CurrentDifficulty();
    auto flow = *reinterpret_cast<uint8_t**>(kMissionFlow);
    auto records = flow ? *reinterpret_cast<uint8_t**>(flow + 0x150) : nullptr;
    if (difficulty < 0 || difficulty >= kCustomDifficulty || !records) {
        return;
    }
    void* mission = *reinterpret_cast<void**>(records + (restart ? 0x0C : 0x04));
    auto record = *reinterpret_cast<uint8_t**>(records + (restart ? 0x10 : 0x08));
    if (!mission || !record || reinterpret_cast<bool(__cdecl*)(void*)>(kFixedDifficulty)(mission)) {
        return;
    }
    *reinterpret_cast<int*>(record + kDifficultyField) = difficulty;
    g_api->Log("%s menu: difficulty %d preselected", restart ? "restart mission" : "enter mission", difficulty);
}

bool __fastcall OpenEnterDetour(void* self, void* edx, bool arg) {
    bool opened = g_openEnter(self, edx, arg);
    if (opened) {
        PreselectDifficulty(false);
    }
    return opened;
}

bool __fastcall OpenRestartDetour(void* self, void* edx) {
    bool opened = g_openRestart(self, edx);
    if (opened) {
        PreselectDifficulty(true);
    }
    return opened;
}

bool Hook(uintptr_t target, void* detour, void** original, const char* what) {
    int status = g_api->CreateHook(reinterpret_cast<void*>(target), detour, original);
    if (status == 0) {
        status = g_api->EnableHook(reinterpret_cast<void*>(target));
    }
    if (status != 0) {
        g_api->Log("%s hook failed (MinHook status %d)", what, status);
    }
    return status == 0;
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
    if (api->version < 2 || api->size < offsetof(T3SdkApi, AddCodeHook) + sizeof(api->AddCodeHook)) {
        return 1;
    }
    g_api = api;
    std::wstring ini = IniPath();
    bool onLoad = GetPrivateProfileIntW(L"Difficulty", L"ApplyOnMissionLoad", 1, ini.c_str()) != 0;
    bool menus = GetPrivateProfileIntW(L"Difficulty", L"KeepInMissionMenus", 1, ini.c_str()) != 0;
    if (onLoad) {
        int status = api->AddCodeHook(reinterpret_cast<void*>(kAfterLevelLoad), AfterLevelLoad, nullptr);
        if (status != 0) {
            api->Log("level load hook failed (status %d)", status);
            onLoad = false;
        }
    }
    if (menus) {
        menus = Hook(kOpenEnterMissionWindow, reinterpret_cast<void*>(&OpenEnterDetour),
                     reinterpret_cast<void**>(&g_openEnter), "enter mission menu") &&
                Hook(kOpenRestartMissionWindow, reinterpret_cast<void*>(&OpenRestartDetour),
                     reinterpret_cast<void**>(&g_openRestart), "restart mission menu");
    }
    api->Log("multipliers on mission load %s, mission menus %s", onLoad ? "on" : "off", menus ? "on" : "off");
    return 0;
}
