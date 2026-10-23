// A key combination that frees Garrett when the original game's physics bug
// leaves him stuck in the floor, floating or skating around. Pressing it
// posts the game's event 0x7F through its event dispatcher (*0x10F46DA0,
// slot +0x14, the call SetPaused makes with 0x74/0x75), which releases the
// player.
//
// Settings, in unstick.ini next to the DLL:
//   [Unstick]
//   Keys=16,17,13   virtual-key codes held together (Shift, Ctrl, Enter)
#include <t3sdk/t3sdk.h>

#include <windows.h>

#include <cstdint>
#include <cwchar>
#include <string>
#include <vector>

namespace {

constexpr uintptr_t kEventDispatcher = 0x10F46DA0;  // object*; vtable +0x14: void Post(int id, int, int, int)
constexpr int kReleasePlayerEvent = 0x7F;

using PostFn = void(__fastcall*)(void* self, void* edx, int id, int a, int b, int c);

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

void T3SDK_CALL OnFrame(void*) {
    bool down = g_api->EngineReady() && GameHasFocus() && KeysDown();
    if (down && !g_wasDown) {
        void* dispatcher = *reinterpret_cast<void**>(kEventDispatcher);
        if (dispatcher) {
            auto post = (*reinterpret_cast<PostFn**>(dispatcher))[0x14 / 4];
            post(dispatcher, nullptr, kReleasePlayerEvent, 0, 0, 0);
            g_api->Log("player release requested");
        }
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
    GetPrivateProfileStringW(L"Unstick", L"Keys", L"16,17,13", text, 64, IniPath().c_str());
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
