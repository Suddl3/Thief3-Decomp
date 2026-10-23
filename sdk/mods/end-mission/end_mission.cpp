// A key combination that ends the current mission, as if its exit was
// reached: the mission complete screen opens and the game goes on to what
// follows. Only where the level has a mission exit (an AExitMissionInfo
// actor, FindExitMissionInfo 0x10AC89C0); city sections have none and must be
// played through. Objectives are left as they are.
//
// Settings, in end-mission.ini next to the DLL:
//   [EndMission]
//   Keys=16,17,18,35   virtual-key codes held together (Shift, Ctrl, Alt, End); empty = off
#include <t3sdk/modkit.hpp>

#include <cstdint>
#include <vector>

namespace {

// AExitMissionInfo* __cdecl FindExitMissionInfo(): the level's mission exit actor, null in city sections
// (docs/engine.md, "Difficulty").
constexpr uintptr_t kFindExitMissionInfo = 0x10AC89C0;

// bool __thiscall WindowManager::OpenMissionCompleteWindow(): shows the mission complete screen
// (docs/engine.md, "Difficulty").
constexpr uintptr_t kOpenMissionCompleteWindow = 0x10B15CC0;

// WindowManager* GWindowManager: the game's window manager (docs/engine.md, "UI windows").
constexpr uintptr_t kWindowManager = 0x10F35DC4;

using FindExitFn = void*(__cdecl*)();
using OpenWindowFn = bool(__fastcall*)(void* self, void* edx);

// ---- state --------------------------------------------------------------------

const T3SdkApi* g_api = nullptr;

// The key combination, and whether it was down on the previous frame (the mission ends once per press).
std::vector<int> g_keys;
bool g_wasDown = false;

// ---- logic --------------------------------------------------------------------

// Opens the mission complete screen, if the level has a mission exit.
void EndMission() {
    void* windows = *reinterpret_cast<void**>(kWindowManager);
    void* exit = reinterpret_cast<FindExitFn>(kFindExitMissionInfo)();
    if (!windows || !exit) {
        g_api->Log("no mission exit in this level; nothing ended");
        return;
    }

    bool opened = reinterpret_cast<OpenWindowFn>(kOpenMissionCompleteWindow)(windows, nullptr);
    g_api->Log(opened ? "mission ended: mission complete screen opened" : "mission complete screen did not open");
}

// Frame callback (game's main thread): ends the mission when the combination goes down.
void T3SDK_CALL OnFrame(void*) {
    bool down = g_api->EngineReady() && t3mod::GameHasFocus() && t3mod::KeysDown(g_keys);
    if (down && !g_wasDown) {
        EndMission();
    }
    g_wasDown = down;
}

}  // namespace

T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    g_api = api;

    g_keys = t3mod::ReadKeys(t3mod::SettingsFile(), L"EndMission", L"Keys", L"16,17,18,35");
    if (g_keys.empty()) {
        api->Log("no keys set; off");
        return 1;
    }

    api->AddFrameCallback(OnFrame, nullptr);
    return 0;
}
