// Lets the game run from a folder whose path has a dot in it (for example
// "C:\Games\Thief.Deadly.Shadows"). The game finds a file's extension with
// strrchr(path, '.'), its statically linked CRT function at 0x10D1EF20; for a
// file without an extension, that finds the dot in a folder name, and the
// game takes the rest of the path for the extension. The mod answers a search
// for '.' with the last dot after the last path separator, or NULL. Other
// characters, and dotted names without separators (Engine.Actor), are
// unaffected.
#include <t3sdk/t3sdk.h>

#include <cstdint>
#include <cstring>

namespace {

constexpr uintptr_t kStrrchr = 0x10D1EF20;  // char* __cdecl strrchr(const char*, int)

using StrrchrFn = char*(__cdecl*)(const char* text, int c);
StrrchrFn g_strrchr = nullptr;

char* __cdecl StrrchrDetour(const char* text, int c) {
    char* found = g_strrchr(text, c);
    if (!found || char(c) != '.') {
        return found;
    }
    return strpbrk(found, "/\\") ? nullptr : found;
}

}  // namespace

T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    auto target = reinterpret_cast<void*>(kStrrchr);
    int status = api->CreateHook(target, reinterpret_cast<void*>(&StrrchrDetour), reinterpret_cast<void**>(&g_strrchr));
    if (status == 0) {
        status = api->EnableHook(target);
    }
    if (status != 0) {
        api->Log("strrchr hook failed (MinHook status %d)", status);
        return 1;
    }
    return 0;
}
