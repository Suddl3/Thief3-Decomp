// A development tool, not part of the fix pack: logs how the game writes and
// reads a saved level, to find where a map with changed actors stops matching
// its saves. It logs:
//
// - each resource bundle the game opens (where a save load finds the level's
//   MapStaticData);
// - ULevelBase::Serialize (the saved level): the archive's direction, version,
//   flags and position on entry and exit;
// - the gamesys object system's serialisation: its item count and the
//   archive's position before and after, and the count a load reads.
//
// Compare a save and a load of one map, then of an edited one: the first
// position or count that differs is where they part.
#include <t3sdk/modkit.hpp>
#include <t3sdk/t3sdk.h>

#include <windows.h>

#include <cstdint>

namespace {

// ---- game addresses -----------------------------------------------------------------

// void ULevelBase::Serialize(FArchive& ar), __thiscall (docs/engine.md, "Save games").
constexpr uintptr_t kLevelSerialize = 0x109753E0;

// void __thiscall ObjectSystem::Serialize(FArchive& ar, bool flag): the gamesys object table, its
// items and links. Item count at this + 0xC.
constexpr uintptr_t kObjectSystemSerialize = 0x10BA0570;

// void __thiscall ObjectSystem::ReadItems(FArchive& ar, int count): a load's new items, after the count
// it read.
constexpr uintptr_t kObjectSystemReadItems = 0x10B9F870;

// void __thiscall Bundle::Open(const char* path, bool flag): opens a resource bundle.
constexpr uintptr_t kBundleOpen = 0x10D54310;

// FArchive fields (as u32 indices) and vtable slots.
constexpr int kArVersion = 3;
constexpr int kArIsLoading = 5;
constexpr int kArIsSaving = 6;
constexpr int kArFlags = 0xD;
constexpr int kArTellSlot = 0x28 / 4;

// ---- hook types -----------------------------------------------------------------------

// The four hooked functions are __thiscall; each is declared __fastcall with an unused edx.
using LevelSerializeFn = void(__fastcall*)(void* self, void* edx, uint32_t* ar);
using ObjectSystemSerializeFn = void(__fastcall*)(void* self, void* edx, uint32_t* ar, int flag);
using ReadItemsFn = void(__fastcall*)(void* self, void* edx, uint32_t* ar, int count);
using BundleOpenFn = void(__fastcall*)(void* self, void* edx, const char* path, int flag);
using TellFn = int(__fastcall*)(uint32_t* self, void* edx);

// ---- state ----------------------------------------------------------------------------

// The SDK's function table, kept from T3Mod_Init.
const T3SdkApi* g_api = nullptr;

// The originals of the hooked functions (MinHook trampolines).
LevelSerializeFn g_levelSerialize = nullptr;
ObjectSystemSerializeFn g_objectSystemSerialize = nullptr;
ReadItemsFn g_readItems = nullptr;
BundleOpenFn g_bundleOpen = nullptr;

// ---- helpers --------------------------------------------------------------------------

// The archive's position, or -1 when its Tell cannot be called.
int Tell(uint32_t* ar) {
    // Some archives (the save writer's helpers) may not implement Tell: guard the virtual call.
    __try {
        auto tell = reinterpret_cast<TellFn*>(*reinterpret_cast<void**>(ar))[kArTellSlot];
        return tell(ar, nullptr);
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return -1;
    }
}

// "load", "save" or "other", from the archive's direction flags.
const char* Direction(const uint32_t* ar) {
    // An archive that is neither loading nor saving counts references or collects garbage.
    if (ar[kArIsLoading]) {
        return "load";
    }

    return ar[kArIsSaving] ? "save" : "other";
}

// The item count of the object system at `self` (0 when unreadable).
int ItemCount(void* self) {
    // `self` comes straight from the hooked call; read it under SEH all the same.
    __try {
        return t3mod::Field<int>(self, 0xC);
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return 0;
    }
}

// ---- detours --------------------------------------------------------------------------

void __fastcall LevelSerializeDetour(void* self, void* edx, uint32_t* ar) {
    g_api->Log("level %s: version %u, flags %08X, enter at %d", Direction(ar), ar[kArVersion], ar[kArFlags], Tell(ar));
    g_levelSerialize(self, edx, ar);
    g_api->Log("level %s: leave at %d", Direction(ar), Tell(ar));
}

void __fastcall ObjectSystemSerializeDetour(void* self, void* edx, uint32_t* ar, int flag) {
    g_api->Log("objects %s: %d items, archive %p at %d", Direction(ar), ItemCount(self), static_cast<void*>(ar),
               Tell(ar));
    g_objectSystemSerialize(self, edx, ar, flag);
    g_api->Log("objects %s: %d items after, at %d", Direction(ar), ItemCount(self), Tell(ar));
}

void __fastcall ReadItemsDetour(void* self, void* edx, uint32_t* ar, int count) {
    g_api->Log("objects load: reads %d new items on top of %d, at %d", count, ItemCount(self), Tell(ar));
    g_readItems(self, edx, ar, count);
}

void __fastcall BundleOpenDetour(void* self, void* edx, const char* path, int flag) {
    char text[MAX_PATH] = "?";

    // The path comes from the game; copy it under SEH in case it is not a string.
    __try {
        lstrcpynA(text, path ? path : "(null)", MAX_PATH);
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        lstrcpynA(text, "(unreadable)", MAX_PATH);
    }

    g_api->Log("bundle open: %s (flag %d)", text, flag);
    g_bundleOpen(self, edx, path, flag);
}

}  // namespace

// Called by the SDK when the mod is loaded. Returns non-zero when a hook cannot be placed.
T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    g_api = api;

    bool ok = t3mod::Hook(api, kLevelSerialize, reinterpret_cast<void*>(&LevelSerializeDetour),
                          reinterpret_cast<void**>(&g_levelSerialize), "level serialize") &&
              t3mod::Hook(api, kObjectSystemSerialize, reinterpret_cast<void*>(&ObjectSystemSerializeDetour),
                          reinterpret_cast<void**>(&g_objectSystemSerialize), "object system serialize") &&
              t3mod::Hook(api, kObjectSystemReadItems, reinterpret_cast<void*>(&ReadItemsDetour),
                          reinterpret_cast<void**>(&g_readItems), "object system read items") &&
              t3mod::Hook(api, kBundleOpen, reinterpret_cast<void*>(&BundleOpenDetour),
                          reinterpret_cast<void**>(&g_bundleOpen), "bundle open");

    // Without every hook the trace would mislead: log nothing rather than half of it.
    if (!ok) {
        return 1;
    }

    api->Log("tracing level saves and loads");
    return 0;
}
