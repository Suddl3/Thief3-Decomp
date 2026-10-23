// Helpers most mods need, so each mod does not carry its own copy: the mod's
// own files and settings, installing a hook with a log line when it fails,
// key combinations, and typed access to engine object fields. Header-only C++;
// the C API (t3sdk.h) does not depend on it.
#pragma once

#include <t3sdk/t3sdk.h>

#include <windows.h>

#include <cstddef>
#include <cstdint>
#include <cwchar>
#include <string>
#include <vector>

namespace t3mod {

// ---- the mod's own files ------------------------------------------------------

// The DLL this code is linked into (the mod, not the SDK or the game).
inline HMODULE ThisModule() {
    HMODULE module = nullptr;
    GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                       reinterpret_cast<LPCWSTR>(&ThisModule), &module);
    return module;
}

// The mod's DLL path with its extension replaced: ModFile(L".ini") is
// "System\mods\my-mod.ini" for "System\mods\my-mod.dll".
inline std::wstring ModFile(const wchar_t* extension) {
    wchar_t path[MAX_PATH];
    GetModuleFileNameW(ThisModule(), path, MAX_PATH);
    std::wstring file = path;
    return file.substr(0, file.find_last_of(L'.')) + extension;
}

// The settings file next to the mod's DLL, named after it.
inline std::wstring SettingsFile() {
    return ModFile(L".ini");
}

// A file in the game's System folder (where T3Main.exe is).
inline std::wstring SystemFile(const wchar_t* name) {
    wchar_t path[MAX_PATH];
    GetModuleFileNameW(nullptr, path, MAX_PATH);
    std::wstring file = path;
    return file.substr(0, file.find_last_of(L'\\') + 1) + name;
}

// ---- settings -------------------------------------------------------------------

inline bool ReadBool(const std::wstring& ini, const wchar_t* section, const wchar_t* key, bool fallback) {
    return GetPrivateProfileIntW(section, key, fallback ? 1 : 0, ini.c_str()) != 0;
}

inline int ReadInt(const std::wstring& ini, const wchar_t* section, const wchar_t* key, int fallback) {
    return int(GetPrivateProfileIntW(section, key, fallback, ini.c_str()));
}

// A number, or `fallback` when the value is missing or outside [low, high].
inline float ReadFloat(const std::wstring& ini, const wchar_t* section, const wchar_t* key, float fallback, float low,
                       float high) {
    wchar_t text[32] = L"";
    GetPrivateProfileStringW(section, key, L"", text, 32, ini.c_str());
    wchar_t* end = nullptr;
    float value = float(wcstod(text, &end));
    return end != text && value >= low && value <= high ? value : fallback;
}

// Virtual-key codes from a list such as "16,17,13" (decimal or 0x hex); codes
// outside 1..255 are dropped.
inline std::vector<int> ReadKeys(const std::wstring& ini, const wchar_t* section, const wchar_t* key,
                                 const wchar_t* fallback) {
    wchar_t text[128] = L"";
    GetPrivateProfileStringW(section, key, fallback, text, 128, ini.c_str());

    std::vector<int> keys;

    // Walk the list, one code at a time.
    for (wchar_t* p = text; *p;) {
        wchar_t* end = nullptr;
        long code = wcstol(p, &end, 0);

        // Stop at the first thing that is not a number.
        if (end == p) {
            break;
        }

        // Keep only valid virtual-key codes.
        if (code > 0 && code < 256) {
            keys.push_back(int(code));
        }

        p = *end ? end + 1 : end;
    }

    return keys;
}

// ---- input ----------------------------------------------------------------------

// Whether the game's window is the one the player is using.
inline bool GameHasFocus() {
    DWORD pid = 0;
    GetWindowThreadProcessId(GetForegroundWindow(), &pid);
    return pid == GetCurrentProcessId();
}

// Whether every key of a combination is held (false for an empty one).
inline bool KeysDown(const std::vector<int>& keys) {
    // Every key of the combination must be down.
    for (int key : keys) {
        // A key that is up means the combination is not held.
        if (!(GetAsyncKeyState(key) & 0x8000)) {
            return false;
        }
    }

    return !keys.empty();
}

// ---- hooks ----------------------------------------------------------------------

// Creates and enables an inline hook at a game address; on failure logs
// "<what> hook failed" with the MinHook status. True when it is in place.
inline bool Hook(const T3SdkApi* api, uintptr_t target, void* detour, void** original, const char* what) {
    auto address = reinterpret_cast<void*>(target);
    int status = api->CreateHook(address, detour, original);

    // Enable the hook only if it was created.
    if (status == 0) {
        status = api->EnableHook(address);
    }

    // Report a hook that could not be installed.
    if (status != 0) {
        api->Log("%s hook failed (MinHook status %d)", what, status);
    }

    return status == 0;
}

// A code hook (AddCodeHook) at a game address; on failure logs "<what> hook
// failed". False also when the SDK is older than API version 2.
inline bool CodeHook(const T3SdkApi* api, uintptr_t address, T3CodeCallback callback, void* user, const char* what) {
    // The call needs an SDK that has AddCodeHook.
    if (api->version < 2 || api->size < offsetof(T3SdkApi, AddCodeHook) + sizeof(api->AddCodeHook)) {
        api->Log("%s needs T3SDK API version 2", what);
        return false;
    }

    int status = api->AddCodeHook(reinterpret_cast<void*>(address), callback, user);

    // Report a hook that could not be installed.
    if (status != 0) {
        api->Log("%s hook failed (status %d)", what, status);
    }

    return status == 0;
}

// ---- engine objects ----------------------------------------------------------------

// The field of type T at `offset` in an engine object (offsets from
// include/<Package>/<Package>Classes.h or docs/engine.md).
template <class T>
T& Field(void* object, uint32_t offset) {
    return *reinterpret_cast<T*>(reinterpret_cast<uint8_t*>(object) + offset);
}

}  // namespace t3mod
