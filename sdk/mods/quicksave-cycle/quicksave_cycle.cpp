// Several quick saves in turn instead of one. The game's quick save (in the
// save/load dispatcher FUN_10b17810) names the save after the localized
// T_QuickSave text ("Quick Save") and overwrites the save of that name; quick
// load loads the save of that name. The mod renames both at the point where
// the name is final: a quick save becomes "<name> <n>", n going 1, 2, ...,
// Count and round again, and quick load picks the last one written. The saves
// themselves are the game's own; there are just Count of them.
//
// The number of the last quick save is kept in quicksave-cycle.state next to
// the DLL. Settings, in quicksave-cycle.ini:
//   [QuickSave]
//   Enabled=0   1 = cycle through Count quick saves (writes extra save games)
//   Count=3     how many quick saves to keep (2..9; anything else counts as 3)
//
// Off by default: it writes extra save games.
#include <t3sdk/modkit.hpp>

#include <windows.h>

#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cwchar>
#include <string>

namespace {

// Code hooks inside the save/load dispatcher, at the point where the save's name is settled; the name's
// cString is at [esp+0x14] (docs/engine.md, "Save games").
constexpr uintptr_t kQuickSaveNamed = 0x10B17CE0;
constexpr uintptr_t kQuickLoadNamed = 0x10B181AA;
constexpr uint32_t kNameOnStack = 0x14;

// cString& cString::operator=(const char*), __thiscall: frees the old text and copies the new
// (docs/engine.md, "Configuration").
constexpr uintptr_t kStringAssign = 0x1090A590;

using StringAssignFn = void*(__fastcall*)(void* self, void* edx, const char* text);

// The game's cString: a pointer to its text.
struct GameString {
    char* text;
};

// The most quick saves that can be kept, and the Count used when the setting is out of range.
constexpr int kMinCount = 2;
constexpr int kMaxCount = 9;
constexpr int kDefaultCount = 3;

// ---- state --------------------------------------------------------------------

const T3SdkApi* g_api = nullptr;

// How many quick saves the cycle goes through.
int g_count = kDefaultCount;

// quicksave-cycle.state, which remembers the number of the last quick save across runs.
std::wstring g_stateFile;

// ---- helpers ------------------------------------------------------------------

// The number of the last quick save written, 0 for none yet.
int LastNumber() {
    int last = t3mod::ReadInt(g_stateFile, L"QuickSave", L"Last", 0);
    return last >= 1 && last <= g_count ? last : 0;
}

// Remembers `number` as the last quick save written.
void StoreLastNumber(int number) {
    wchar_t text[8];
    swprintf(text, 8, L"%d", number);
    WritePrivateProfileStringW(L"QuickSave", L"Last", text, g_stateFile.c_str());
}

// Changes the save's name (the cString on the game's stack) to "<name> <number>" and logs it as `what`.
void Rename(T3Registers* regs, int number, const char* what) {
    auto name = reinterpret_cast<GameString*>(regs->esp + kNameOnStack);

    char text[160];
    snprintf(text, sizeof(text), "%s %d", name->text ? name->text : "Quick Save", number);
    reinterpret_cast<StringAssignFn>(kStringAssign)(name, nullptr, text);

    g_api->Log("%s: \"%s\"", what, text);
}

// ---- logic --------------------------------------------------------------------

// Code hook on a quick save: moves on to the next number in the cycle and names the save with it.
void T3SDK_CALL OnQuickSave(void*, T3Registers* regs) {
    int number = LastNumber() % g_count + 1;
    StoreLastNumber(number);
    Rename(regs, number, "quick save");
}

// Code hook on a quick load: names the save to load with the number of the last one written.
void T3SDK_CALL OnQuickLoad(void*, T3Registers* regs) {
    // Nothing was written yet (number 0): leave the name alone and load the game's own quick save.
    if (int number = LastNumber()) {
        Rename(regs, number, "quick load");
    }
}

}  // namespace

T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    // The mod needs code hooks, which API version 2 added: stay unloaded on an older SDK.
    if (api->version < 2 || api->size < offsetof(T3SdkApi, AddCodeHook) + sizeof(api->AddCodeHook)) {
        return 1;
    }

    g_api = api;

    std::wstring ini = t3mod::SettingsFile();

    // Off by default, as it writes extra save games.
    if (!t3mod::ReadBool(ini, L"QuickSave", L"Enabled", false)) {
        api->Log("off (Enabled=0)");
        return 1;
    }

    g_count = t3mod::ReadInt(ini, L"QuickSave", L"Count", kDefaultCount);

    // A Count outside the allowed range counts as the default.
    if (g_count < kMinCount || g_count > kMaxCount) {
        g_count = kDefaultCount;
    }

    g_stateFile = t3mod::ModFile(L".state");

    // Not t3mod::CodeHook: its failure line differs from the one this mod has always logged.
    int status = api->AddCodeHook(reinterpret_cast<void*>(kQuickSaveNamed), OnQuickSave, nullptr);

    // Hook quick load only after quick save was hooked.
    if (status == 0) {
        status = api->AddCodeHook(reinterpret_cast<void*>(kQuickLoadNamed), OnQuickLoad, nullptr);
    }

    // Either hook failing leaves the cycle half done: report it and do not load.
    if (status != 0) {
        api->Log("quick save hooks failed (status %d)", status);
        return 1;
    }

    api->Log("cycling through %d quick saves (last %d)", g_count, LastNumber());
    return 0;
}
