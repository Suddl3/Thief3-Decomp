// A key combination that ends the current mission, as if its exit was
// reached: the mission complete screen opens and the game goes on to what
// follows. Only where the level has a mission exit (an AExitMissionInfo
// actor, FindExitMissionInfo 0x10AC89C0); city sections have none and must be
// played through. Objectives are left as they are.
//
// Settings, in end-mission.ini next to the DLL:
//   [EndMission]
//   Keys=16,17,18,35   virtual-key codes held together (Shift, Ctrl, Alt, End)
#include <t3sdk/t3sdk.h>

#include <windows.h>

#include <cstdint>
#include <cwchar>
#include <string>
#include <vector>

namespace {

constexpr uintptr_t kFindExitMissionInfo = 0x10AC89C0;       // AExitMissionInfo* __cdecl ()
constexpr uintptr_t kOpenMissionCompleteWindow = 0x10B15CC0; // bool __thiscall WindowManager::(void)
constexpr uintptr_t kWindowManager = 0x10F35DC4;             // GWindowManager

const T3SdkApi* g_api = nullptr;
std::vector<int> g_keys;
bool g_wasDown = false;

bool GameHasFocus() {
    DWORD pid = 0;
    GetWindowThreadProcessId(GetForegroundWindow(), &pid);
    return pid == GetCurrentProcessId();
}

bool KeysDown() {
    for (int key : g_keys) {
        if (!(GetAsyncKeyState(key) & 0x8000)) {
            return false;
        }
    }
    return !g_keys.empty();
}

void EndMission() {
    void* windows = *reinterpret_cast<void**>(kWindowManager);
    void* exit = reinterpret_cast<void*(__cdecl*)()>(kFindExitMissionInfo)();
    if (!windows || !exit) {
        g_api->Log("no mission exit in this level; nothing ended");
        return;
    }
    bool opened = reinterpret_cast<bool(__fastcall*)(void*, void*)>(kOpenMissionCompleteWindow)(windows, nullptr);
    g_api->Log(opened ? "mission ended: mission complete screen opened" : "mission complete screen did not open");
}

void T3SDK_CALL OnFrame(void*) {
    bool down = g_api->EngineReady() && GameHasFocus() && KeysDown();
    if (down && !g_wasDown) {
        EndMission();
    }
    g_wasDown = down;
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
    wchar_t text[64];
    GetPrivateProfileStringW(L"EndMission", L"Keys", L"16,17,18,35", text, 64, IniPath().c_str());
    for (wchar_t* p = text; *p;) {
        wchar_t* end = nullptr;
        long key = wcstol(p, &end, 0);
        if (end == p) {
            break;
        }
        if (key > 0 && key < 256) {
            g_keys.push_back(int(key));
        }
        p = *end ? end + 1 : end;
    }
    if (g_keys.empty()) {
        api->Log("no keys set; off");
        return 1;
    }
    api->AddFrameCallback(OnFrame, nullptr);
    return 0;
}
