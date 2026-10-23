// Lets the game run from a folder whose path has a dot in it (for example
// "C:\Games\Thief.Deadly.Shadows"). The game finds a file's extension with
// strrchr(path, '.'), its statically linked CRT function at 0x10D1EF20; for a
// file without an extension, that finds the dot in a folder name, and the
// game takes the rest of the path for the extension. The mod answers a search
// for '.' with the last dot after the last path separator, or NULL. Other
// characters, and dotted names without separators (Engine.Actor), are
// unaffected.
//
// The mod has no settings.
#include <t3sdk/modkit.hpp>
#include <t3sdk/t3sdk.h>

#include <cstdint>
#include <cstring>

namespace {

// char* __cdecl strrchr(const char*, int): the game's own copy of the CRT function.
constexpr uintptr_t kStrrchr = 0x10D1EF20;

using StrrchrFn = char*(__cdecl*)(const char* text, int c);

// The game's strrchr, called through for the real search.
StrrchrFn g_strrchr = nullptr;

// strrchr, except that a search for '.' finds nothing when a path separator
// follows the last dot (the dot is then in a folder name, not an extension).
char* __cdecl StrrchrDetour(const char* text, int c) {
    char* found = g_strrchr(text, c);

    if (!found || char(c) != '.') {
        return found;
    }

    return strpbrk(found, "/\\") ? nullptr : found;
}

}  // namespace

// Called by the SDK when the mod is loaded. Returns non-zero (the mod stays
// off) when the hook cannot be placed.
T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    if (!t3mod::Hook(api, kStrrchr, reinterpret_cast<void*>(&StrrchrDetour), reinterpret_cast<void**>(&g_strrchr),
                     "strrchr")) {
        return 1;
    }

    return 0;
}
