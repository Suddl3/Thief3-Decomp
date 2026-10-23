// Mods' answers to the game's INI lookups. Every Config getter (GetBool,
// GetFloat, GetString, the int and buffer getters) reads the value's text
// through Config::Find, so one hook there lets a mod change, add or blank any
// setting before the getter parses it. Overrides set with SetValue are
// consulted first, then the callbacks, in the order mods registered them.
#include "config.hpp"

#include "log.hpp"
#include "mods.hpp"

#include <MinHook.h>

#include <atomic>
#include <cstring>
#include <string>
#include <vector>

namespace t3sdk::config {
namespace {

// bool Config::Find(const cString& section, const cString& key, const char* file, cString& value),
// __thiscall: the lookup every Config getter parses (docs/engine.md, "Configuration").
constexpr uintptr_t kConfigFind = 0x109103D0;

// cString& cString::operator=(const char*), __thiscall: frees the old text and copies the new one
// with the game's allocator; an empty string leaves the cString empty (docs/engine.md,
// "Configuration").
constexpr uintptr_t kStringAssign = 0x1090A590;

// The game's cString: one pointer to its text, whose length sits in the int before it.
struct GameString {
    char* text;
};

using FindFn = bool(__fastcall*)(void* self, void* edx, const GameString* section, const GameString* key,
                                 const char* file, GameString* value);
using AssignFn = GameString*(__fastcall*)(GameString* self, void* edx, const char* text);

// A value a mod set with SetValue.
struct Override {
    std::string file;  // empty: any file
    std::string section;
    std::string key;
    std::string value;
    HMODULE owner;
};

// A callback a mod registered with AddCallback.
struct Callback {
    T3ConfigCallback fn;
    void* user;
    HMODULE owner;
};

// The game's Config::Find, called through the trampoline MinHook made.
FindFn g_find = nullptr;

// Guards g_overrides and g_callbacks: lookups come from any game thread, mods register from their
// own. Lookups take it shared, changes exclusive.
SRWLOCK g_lock = SRWLOCK_INIT;

// Overrides in the order they were set; the last match wins.
std::vector<Override> g_overrides;

// Callbacks in registration order.
std::vector<Callback> g_callbacks;

// Whether anything is registered; while false, a lookup skips the lock and the rest of the detour.
std::atomic<bool> g_active = false;

// The text of a cString, "" for a null one.
const char* Text(const GameString* string) {
    return string && string->text ? string->text : "";
}

// Refreshes g_active; call with g_lock held exclusively.
void UpdateActive() {
    g_active = !g_overrides.empty() || !g_callbacks.empty();
}

// Calls a mod's callback under SEH. True when it returned (its reply in `answer`); false when it
// raised an exception, whose code goes to `code`.
bool CallCallback(const Callback& callback, const char* file, const char* section, const char* key, const char* value,
                  const char** answer, DWORD* code) {
    // A mod's bug must not take the game down: its exception only disables its callback.
    __try {
        *answer = callback.fn(callback.user, file, section, key, value);
        return true;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        *code = GetExceptionCode();
        return false;
    }
}

// Looks `section`/`key` up in the overrides. True when one matches (the last one wins), with its
// value in `answer`. Also copies the callbacks, in the same locked step.
bool FindOverride(const char* file, const char* section, const char* key, std::string& answer,
                  std::vector<Callback>& callbacks) {
    bool answered = false;

    AcquireSRWLockShared(&g_lock);

    // Section and key match without regard to case; an override without a file answers for any INI.
    for (const Override& entry : g_overrides) {
        bool sameFile = entry.file.empty() || (file && _stricmp(entry.file.c_str(), file) == 0);

        // Later overrides replace earlier answers, so the last one set wins.
        if (sameFile && _stricmp(entry.section.c_str(), section) == 0 && _stricmp(entry.key.c_str(), key) == 0) {
            answer = entry.value;
            answered = true;
        }
    }

    callbacks = g_callbacks;
    ReleaseSRWLockShared(&g_lock);

    return answered;
}

// Removes a callback that raised an exception, so it is not called again.
void DisableCallback(const Callback& callback, DWORD code) {
    const char* mod = mods::NameAt(reinterpret_cast<const void*>(callback.fn));
    T3_LOG("mod %s: config callback raised exception 0x%08lX; callback disabled", mod ? mod : "?", code);

    AcquireSRWLockExclusive(&g_lock);
    std::erase_if(g_callbacks, [&](const Callback& c) { return c.fn == callback.fn && c.user == callback.user; });
    UpdateActive();
    ReleaseSRWLockExclusive(&g_lock);
}

// Config::Find, then the overrides and the callbacks. Returns whether the key has a value.
bool __fastcall FindDetour(void* self, void* edx, const GameString* section, const GameString* key, const char* file,
                           GameString* value) {
    bool found = g_find(self, edx, section, key, file, value);

    // With nothing registered (or nowhere to put an answer) the game's own result stands.
    if (!g_active || !value) {
        return found;
    }

    const char* sectionText = Text(section);
    const char* keyText = Text(key);
    std::string answer;
    std::vector<Callback> callbacks;
    bool answered = FindOverride(file, sectionText, keyText, answer, callbacks);

    // Each callback sees the value as it stands after the overrides and the callbacks before it.
    for (const Callback& callback : callbacks) {
        const char* current = answered ? answer.c_str() : found ? Text(value) : nullptr;
        const char* reply = nullptr;
        DWORD code = 0;

        // A callback that crashed is dropped and the lookup goes on with the next one.
        if (!CallCallback(callback, file, sectionText, keyText, current, &reply, &code)) {
            DisableCallback(callback, code);
            continue;
        }

        // A NULL reply leaves the value as it is.
        if (reply) {
            answer = reply;
            answered = true;
        }
    }

    // Nobody answered: the game's own result stands.
    if (!answered) {
        return found;
    }

    reinterpret_cast<AssignFn>(kStringAssign)(value, nullptr, answer.c_str());
    return true;
}

}  // namespace

bool Install() {
    auto target = reinterpret_cast<void*>(kConfigFind);

    MH_STATUS status = MH_CreateHook(target, reinterpret_cast<void*>(&FindDetour), reinterpret_cast<void**>(&g_find));

    // Enable the hook only if it was created.
    if (status == MH_OK) {
        status = MH_EnableHook(target);
    }

    // A failed hook only costs the feature: the game reads its settings unchanged.
    if (status != MH_OK) {
        T3_LOG("config: Config::Find hook failed (%s)", MH_StatusToString(status));
    }

    return status == MH_OK;
}

int SetValue(const char* file, const char* section, const char* key, const char* value, HMODULE owner) {
    // A lookup needs both a section and a key to match.
    if (!section || !key) {
        return -1;
    }

    AcquireSRWLockExclusive(&g_lock);

    // The mod's earlier answer for the same key is replaced, or removed when `value` is NULL.
    std::erase_if(g_overrides, [&](const Override& entry) {
        return entry.owner == owner && _stricmp(entry.section.c_str(), section) == 0 &&
               _stricmp(entry.key.c_str(), key) == 0 && _stricmp(entry.file.c_str(), file ? file : "") == 0;
    });

    // A NULL value only removes; anything else is the new answer.
    if (value) {
        g_overrides.push_back({file ? file : "", section, key, value, owner});
    }

    UpdateActive();
    ReleaseSRWLockExclusive(&g_lock);

    return 0;
}

int AddCallback(T3ConfigCallback callback, void* user, HMODULE owner) {
    // There is nothing to call without a function.
    if (!callback) {
        return -1;
    }

    AcquireSRWLockExclusive(&g_lock);
    g_callbacks.push_back({callback, user, owner});
    UpdateActive();
    ReleaseSRWLockExclusive(&g_lock);

    return 0;
}

void DropOwner(HMODULE owner) {
    AcquireSRWLockExclusive(&g_lock);
    std::erase_if(g_overrides, [owner](const Override& entry) { return entry.owner == owner; });
    std::erase_if(g_callbacks, [owner](const Callback& callback) { return callback.owner == owner; });
    UpdateActive();
    ReleaseSRWLockExclusive(&g_lock);
}

}  // namespace t3sdk::config
