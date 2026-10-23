/*
 * T3SDK mod API.
 *
 * A mod is a 32-bit DLL in the game's System/mods/ folder that exports
 *
 *     T3SDK_EXPORT int  T3SDK_CALL T3Mod_Init(const T3SdkApi* api);  // 0 = loaded
 *     T3SDK_EXPORT void T3SDK_CALL T3Mod_Shutdown(void);             // optional
 *
 * A packaged mod (a .t3mod the launcher installed; docs/mods.md) has a folder
 * of its own there, named after its id, and System/mods/load-order.txt lists
 * its DLL as "id/file.dll". The SDK loads the listed DLLs first, in that
 * order, each with its own folder on the DLL search path, then the DLLs put
 * straight into System/mods/, in name order. In T3SDK.log a mod goes by its
 * folder name (a loose DLL by its file name).
 *
 * T3Mod_Init runs before the game's own startup code, so the engine does not
 * exist yet: register callbacks there and wait for api->EngineReady().
 *
 * The API is plain C so a mod can use any compiler. The table only grows: a
 * member added after version 1 is usable when api->size covers it.
 *
 * Threading: frame callbacks run on the game's main thread, once per pass of
 * its message loop, starting once EngineReady() first returns non-zero and
 * stopping once the game begins exiting. Engine log callbacks run on
 * whichever thread logged, from start-up onward (so possibly before
 * EngineReady()); protect any state shared with a frame callback.
 * Objects: T3Object* pointers, and the object functions below, are only good
 * while EngineReady() holds; the engine can free objects once the game starts
 * exiting, when EngineReady() goes back to 0.
 * Memory: strings come back through caller buffers; nothing allocated on one
 * side of the API is freed on the other.
 */
#ifndef T3SDK_T3SDK_H
#define T3SDK_T3SDK_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
#define T3SDK_EXTERN_C extern "C" /* so a C++ mod's exports keep their plain-C names */
#else
#define T3SDK_EXTERN_C
#endif
#define T3SDK_EXPORT T3SDK_EXTERN_C __declspec(dllexport) /* use on a mod's T3Mod_Init/T3Mod_Shutdown */
#define T3SDK_CALL __cdecl                                /* calling convention for every function in this header */

#define T3SDK_API_VERSION 2 /* current version; see T3SdkApi::version/size below */

/* Opaque handle to an engine UObject (see unreal.hpp for the real layout, C++
 * only): mods just carry pointers to it back into the calls below. */
#ifdef __cplusplus
namespace t3 {
struct UObject;
}

typedef t3::UObject T3Object;
#else
typedef struct T3Object T3Object;
#endif

/* Runs once per pass of the game's message loop on its main thread. */
typedef void(T3SDK_CALL* T3FrameCallback)(void* user);
/* `category` is the engine's log category, e.g. "Log", "Init", "Warning". */
typedef void(T3SDK_CALL* T3LogCallback)(void* user, const char* text, const char* category);
/* One INI lookup by the game: `file` is the INI it names (NULL for its
 * default), `value` the text found so far (NULL if the key is missing). Return
 * the text to answer with (copied right away), or NULL to leave it. */
typedef const char*(T3SDK_CALL* T3ConfigCallback)(void* user, const char* file, const char* section, const char* key,
                                                  const char* value);

/* The game's registers at a code hook, in pushad order. `esp` is the game's
 * own (its stack, readable and writable, starts there); changes to any
 * register but esp carry back into the game. */
typedef struct T3Registers {
    uint32_t edi, esi, ebp, esp, ebx, edx, ecx, eax;
    uint32_t eflags;
} T3Registers;

typedef void(T3SDK_CALL* T3CodeCallback)(void* user, T3Registers* regs);

typedef struct T3SdkApi {
    uint32_t version; /* T3SDK_API_VERSION implemented by the SDK */
    uint32_t size;    /* sizeof(T3SdkApi) in the SDK */

    /* printf-style line in T3SDK.log, tagged with the calling mod's name. */
    void(T3SDK_CALL* Log)(const char* fmt, ...);

    /* Callbacks; each returns 0 on success, -1 if `callback` is NULL. See
     * Threading, above, for when each one runs. */
    int(T3SDK_CALL* AddFrameCallback)(T3FrameCallback callback, void* user);
    int(T3SDK_CALL* AddEngineLogCallback)(T3LogCallback callback, void* user);

    /* Inline function hooks (MinHook: one table shared by every mod, so two
     * mods cannot hook the same `target`). `target` is a code address in
     * T3Main.exe; `detour` replaces it; `original` (may be NULL) receives a
     * trampoline that calls the unhooked function. CreateHook leaves the hook
     * disabled; call EnableHook to activate it. Each returns 0 (MH_OK) on
     * success, another MH_STATUS otherwise (MinHook.h has the values, e.g.
     * MH_ERROR_ALREADY_CREATED for a `target` another mod already hooked). */
    int(T3SDK_CALL* CreateHook)(void* target, void* detour, void** original);
    int(T3SDK_CALL* EnableHook)(void* target);
    int(T3SDK_CALL* DisableHook)(void* target);
    int(T3SDK_CALL* RemoveHook)(void* target);

    /* Engine objects: usable once EngineReady() returns non-zero (see
     * Objects, above); ObjectCount/ObjectAt/FindObject return 0/NULL before
     * that. */
    int(T3SDK_CALL* EngineReady)(void);
    int(T3SDK_CALL* ObjectCount)(void);         /* size of the object table, including free slots */
    T3Object*(T3SDK_CALL* ObjectAt)(int index); /* NULL for a free slot or an out-of-range index */
    /* Linear search by full path, e.g. FindObject("Class", "Engine.Actor").
     * className may be NULL to match any class. NULL if not found. */
    T3Object*(T3SDK_CALL* FindObject)(const char* className, const char* pathName);
    T3Object*(T3SDK_CALL* ObjectClass)(T3Object* object);  /* NULL for a NULL object */
    T3Object*(T3SDK_CALL* ObjectOuter)(T3Object* object);  /* the object's Outer, or NULL */
    int(T3SDK_CALL* IsA)(T3Object* object, T3Object* cls); /* 1 if object's class is cls or derives from it */
    /* Text into buf, NUL-terminated even when truncated; returns the full
     * untruncated length, like snprintf (buf may be NULL and size 0 to size a
     * buffer first). */
    size_t(T3SDK_CALL* ObjectName)(T3Object* object, char* buf, size_t size); /* "None" for a NULL object */
    /* Dotted Outer chain, e.g. "Engine.Actor"; "" for a NULL object. */
    size_t(T3SDK_CALL* ObjectPathName)(T3Object* object, char* buf, size_t size);
    size_t(T3SDK_CALL* NameToString)(uint32_t name, char* buf, size_t size); /* "<invalid name>" for an unknown value */

    /* ---- version 2 ---- */

    /* Game settings: the INI values the game reads through its Config layer
     * (Default.ini, T3UI.ini, ...; every bool, int, float and string). Usable
     * from T3Mod_Init on, so start-up reads see them; lookups can come from any
     * thread. SetConfigValue answers `section`/`key` with `value` (NULL removes
     * this mod's override; `file` NULL matches any INI). Callbacks see every
     * lookup, after the set values, in registration order. When mods disagree,
     * the one loaded later wins. Each returns 0, or -1 for a NULL argument. */
    int(T3SDK_CALL* SetConfigValue)(const char* file, const char* section, const char* key, const char* value);
    int(T3SDK_CALL* AddConfigCallback)(T3ConfigCallback callback, void* user);

    /* Loose-file overrides: `dir` (UTF-8; relative to the calling mod's own
     * folder) mirrors the game folder, and a file the game reads from
     * <game>/<path> comes from <dir>/<path> when that exists. The folder added
     * last wins. Only single files: directory listings are not merged, and
     * files packed in .ibt bundles are not reached. 0, or -1 if `dir` is not
     * a folder. */
    int(T3SDK_CALL* AddFileRoot)(const char* dir);

    /* Code hooks: `callback` runs each time the game reaches `address` (any
     * instruction in T3Main.exe, not only a function's start), before the
     * instruction there, with the registers to read or change. The address
     * must start an instruction, and the 5 bytes from it must not be a jump
     * target (MinHook moves them). Shares MinHook's table with CreateHook: one
     * hook per address. A callback that raises an exception is disabled. 0,
     * -1 for a NULL argument, or an MH_STATUS. */
    int(T3SDK_CALL* AddCodeHook)(void* address, T3CodeCallback callback, void* user);
} T3SdkApi;

/* The signatures of a mod's exports (T3Mod_Init, T3Mod_Shutdown), for GetProcAddress. */
typedef int(T3SDK_CALL* T3ModInitFn)(const T3SdkApi* api);
typedef void(T3SDK_CALL* T3ModShutdownFn)(void);

#endif /* T3SDK_T3SDK_H */
