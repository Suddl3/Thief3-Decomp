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

// bool Config::Find(const cString& section, const cString& key, const char* file, cString& value)
constexpr uintptr_t kConfigFind = 0x109103D0;
// cString& cString::operator=(const char*): frees the old text and copies the new one with the
// game's allocator; an empty string leaves the cString empty.
constexpr uintptr_t kStringAssign = 0x1090A590;

// The game's cString: one pointer to its text, whose length sits in the int before it.
struct GameString {
    char* text;
};

using FindFn = bool(__fastcall*)(void* self, void* edx, const GameString* section, const GameString* key,
                                 const char* file, GameString* value);
using AssignFn = GameString*(__fastcall*)(GameString* self, void* edx, const char* text);

struct Override {
    std::string file;  // empty: any file
    std::string section;
    std::string key;
    std::string value;
    HMODULE owner;
};

struct Callback {
    T3ConfigCallback fn;
    void* user;
    HMODULE owner;
};

FindFn g_find = nullptr;
SRWLOCK g_lock = SRWLOCK_INIT;
std::vector<Override> g_overrides;
std::vector<Callback> g_callbacks;
std::atomic<bool> g_active = false;  // anything registered: lookups take the slow path

const char* Text(const GameString* s) { return s && s->text ? s->text : ""; }

void UpdateActive() { g_active = !g_overrides.empty() || !g_callbacks.empty(); }

bool CallCallback(const Callback& cb, const char* file, const char* section, const char* key, const char* value,
                  const char** answer, DWORD* code) {
    __try {
        *answer = cb.fn(cb.user, file, section, key, value);
        return true;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        *code = GetExceptionCode();
        return false;
    }
}

bool __fastcall FindDetour(void* self, void* edx, const GameString* section, const GameString* key, const char* file,
                           GameString* value) {
    bool found = g_find(self, edx, section, key, file, value);
    if (!g_active || !value) {
        return found;
    }
    const char* s = Text(section);
    const char* k = Text(key);

    std::string answer;
    bool answered = false;
    std::vector<Callback> callbacks;
    AcquireSRWLockShared(&g_lock);
    for (const Override& o : g_overrides) {
        if (_stricmp(o.section.c_str(), s) == 0 && _stricmp(o.key.c_str(), k) == 0 &&
            (o.file.empty() || (file && _stricmp(o.file.c_str(), file) == 0))) {
            answer = o.value;
            answered = true;
        }
    }
    callbacks = g_callbacks;
    ReleaseSRWLockShared(&g_lock);

    // Each callback sees the value as it stands after the overrides and the callbacks before it.
    for (const Callback& cb : callbacks) {
        const char* current = answered ? answer.c_str() : found ? Text(value) : nullptr;
        const char* reply = nullptr;
        DWORD code = 0;
        if (!CallCallback(cb, file, s, k, current, &reply, &code)) {
            const char* mod = mods::NameAt(reinterpret_cast<const void*>(cb.fn));
            T3_LOG("mod %s: config callback raised exception 0x%08lX; callback disabled", mod ? mod : "?", code);
            AcquireSRWLockExclusive(&g_lock);
            std::erase_if(g_callbacks, [&](const Callback& c) { return c.fn == cb.fn && c.user == cb.user; });
            UpdateActive();
            ReleaseSRWLockExclusive(&g_lock);
            continue;
        }
        if (reply) {
            answer = reply;
            answered = true;
        }
    }

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
    if (status == MH_OK) {
        status = MH_EnableHook(target);
    }
    if (status != MH_OK) {
        T3_LOG("config: Config::Find hook failed (%s)", MH_StatusToString(status));
    }
    return status == MH_OK;
}

int SetValue(const char* file, const char* section, const char* key, const char* value, HMODULE owner) {
    if (!section || !key) {
        return -1;
    }
    AcquireSRWLockExclusive(&g_lock);
    std::erase_if(g_overrides, [&](const Override& o) {
        return o.owner == owner && _stricmp(o.section.c_str(), section) == 0 && _stricmp(o.key.c_str(), key) == 0 &&
               _stricmp(o.file.c_str(), file ? file : "") == 0;
    });
    if (value) {
        g_overrides.push_back({file ? file : "", section, key, value, owner});
    }
    UpdateActive();
    ReleaseSRWLockExclusive(&g_lock);
    return 0;
}

int AddCallback(T3ConfigCallback callback, void* user, HMODULE owner) {
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
    std::erase_if(g_overrides, [owner](const Override& o) { return o.owner == owner; });
    std::erase_if(g_callbacks, [owner](const Callback& c) { return c.owner == owner; });
    UpdateActive();
    ReleaseSRWLockExclusive(&g_lock);
}

}  // namespace t3sdk::config
