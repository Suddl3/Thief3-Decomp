// A key combination that frees Garrett when the original game's physics bug
// leaves him stuck in the floor, floating or skating around. Pressing it
// posts the game's event 0x7F through its event dispatcher (*0x10F46DA0,
// slot +0x14, the call SetPaused makes with 0x74/0x75), which releases the
// player.
//
// Settings, in unstick.ini next to the DLL:
//   [Unstick]
//   Keys=16,17,13   virtual-key codes held together (Shift, Ctrl, Enter);
//                   decimal or 0x hex, separated by commas. With none valid
//                   the mod stays off.
#include <t3sdk/modkit.hpp>
#include <t3sdk/t3sdk.h>

#include <windows.h>

#include <cstdint>
#include <vector>

namespace {

// Pointer to the event dispatcher object; its vtable slot at kPostSlot is
// void __thiscall Post(int id, int, int, int) (docs/engine.md, "Game loop and exit").
constexpr uintptr_t kEventDispatcher = 0x10F46DA0;

// Byte offset of Post in the dispatcher's vtable.
constexpr uint32_t kPostSlot = 0x14;

// Event that releases the player from a stuck state.
constexpr int kReleasePlayerEvent = 0x7F;

// Post is __thiscall; declared __fastcall with an unused edx.
using PostFn = void(__fastcall*)(void* self, void* edx, int id, int a, int b, int c);

// The SDK's function table, kept from T3Mod_Init.
const T3SdkApi* g_api = nullptr;

// The key combination from the settings.
std::vector<int> g_keys;

// Whether the combination was held on the previous frame, so one press posts one event.
bool g_wasDown = false;

// Posts the release event through the game's event dispatcher, once per press.
void PostReleasePlayer() {
    void* dispatcher = *reinterpret_cast<void**>(kEventDispatcher);

    if (!dispatcher) {
        return;
    }

    auto post = (*reinterpret_cast<PostFn**>(dispatcher))[kPostSlot / sizeof(void*)];
    post(dispatcher, nullptr, kReleasePlayerEvent, 0, 0, 0);

    g_api->Log("player release requested");
}

// Frame callback (main thread): posts the event when the combination goes
// from up to down while the game has the focus.
void T3SDK_CALL OnFrame(void*) {
    bool down = g_api->EngineReady() && t3mod::GameHasFocus() && t3mod::KeysDown(g_keys);

    if (down && !g_wasDown) {
        PostReleasePlayer();
    }

    g_wasDown = down;
}

}  // namespace

// Called by the SDK when the mod is loaded. Returns non-zero (the mod stays
// off) when no valid key is set.
T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    g_api = api;

    g_keys = t3mod::ReadKeys(t3mod::SettingsFile(), L"Unstick", L"Keys", L"16,17,13");

    if (g_keys.empty()) {
        api->Log("no keys set; off");
        return 1;
    }

    api->AddFrameCallback(OnFrame, nullptr);
    return 0;
}
