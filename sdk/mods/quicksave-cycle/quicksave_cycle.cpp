// Several quick saves in turn instead of one. The game's quick save (in the
// save/load dispatcher FUN_10b17810) names the save after the localized
// T_QuickSave text ("Quick Save") and overwrites the save of that name; quick
// load loads the save of that name. The mod renames both at the point where
// the name is final: a quick save becomes "<name> <n>", n going 1, 2, ...,
// Count and round again, and quick load picks the last one written. The saves
// themselves are the game's own; there are just Count of them.
//
//   0x10B17CE0  quick save, name settled (cString at [esp+0x14])
//   0x10B181AA  quick load, name settled (cString at [esp+0x14])
//
// The number of the last quick save is kept in quicksave-cycle.state next to
// the DLL. Settings, in quicksave-cycle.ini:
//   [QuickSave]
//   Enabled=0   1 = cycle through Count quick saves (writes extra save games)
//   Count=3     how many quick saves to keep (2..9)
#include <t3sdk/t3sdk.h>

#include <windows.h>

#include <cstdint>
#include <cstdio>
#include <string>

namespace {

constexpr uintptr_t kQuickSaveNamed = 0x10B17CE0;
constexpr uintptr_t kQuickLoadNamed = 0x10B181AA;
constexpr uint32_t kNameOnStack = 0x14;            // the name's cString, from the game's esp
constexpr uintptr_t kStringAssign = 0x1090A590;    // cString& cString::operator=(const char*)

struct GameString {
    char* text;
};

const T3SdkApi* g_api = nullptr;
int g_count = 3;
std::wstring g_stateFile;

std::wstring ModFile(const wchar_t* extension) {
    HMODULE self = nullptr;
    GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                       reinterpret_cast<LPCWSTR>(&ModFile), &self);
    wchar_t path[MAX_PATH];
    GetModuleFileNameW(self, path, MAX_PATH);
    std::wstring file = path;
    return file.substr(0, file.find_last_of(L'.')) + extension;
}

// The number of the last quick save written, 0 for none yet.
int LastNumber() {
    int last = int(GetPrivateProfileIntW(L"QuickSave", L"Last", 0, g_stateFile.c_str()));
    return last >= 1 && last <= g_count ? last : 0;
}

void Rename(T3Registers* regs, int number, const char* what) {
    auto name = reinterpret_cast<GameString*>(regs->esp + kNameOnStack);
    char text[160];
    snprintf(text, sizeof(text), "%s %d", name->text ? name->text : "Quick Save", number);
    reinterpret_cast<GameString*(__fastcall*)(GameString*, void*, const char*)>(kStringAssign)(name, nullptr, text);
    g_api->Log("%s: \"%s\"", what, text);
}

void T3SDK_CALL OnQuickSave(void*, T3Registers* regs) {
    int number = LastNumber() % g_count + 1;
    wchar_t text[8];
    swprintf(text, 8, L"%d", number);
    WritePrivateProfileStringW(L"QuickSave", L"Last", text, g_stateFile.c_str());
    Rename(regs, number, "quick save");
}

void T3SDK_CALL OnQuickLoad(void*, T3Registers* regs) {
    if (int number = LastNumber()) {
        Rename(regs, number, "quick load");
    }
}

}  // namespace

T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    if (api->version < 2 || api->size < offsetof(T3SdkApi, AddCodeHook) + sizeof(api->AddCodeHook)) {
        return 1;
    }
    g_api = api;
    std::wstring ini = ModFile(L".ini");
    if (GetPrivateProfileIntW(L"QuickSave", L"Enabled", 0, ini.c_str()) == 0) {
        api->Log("off (Enabled=0)");
        return 1;
    }
    g_count = int(GetPrivateProfileIntW(L"QuickSave", L"Count", 3, ini.c_str()));
    if (g_count < 2 || g_count > 9) {
        g_count = 3;
    }
    g_stateFile = ModFile(L".state");
    int status = api->AddCodeHook(reinterpret_cast<void*>(kQuickSaveNamed), OnQuickSave, nullptr);
    if (status == 0) {
        status = api->AddCodeHook(reinterpret_cast<void*>(kQuickLoadNamed), OnQuickLoad, nullptr);
    }
    if (status != 0) {
        api->Log("quick save hooks failed (status %d)", status);
        return 1;
    }
    api->Log("cycling through %d quick saves (last %d)", g_count, LastNumber());
    return 0;
}
