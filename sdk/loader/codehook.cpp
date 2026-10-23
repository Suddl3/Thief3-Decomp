// Callbacks at any instruction. MinHook relocates the instructions at the
// address into a trampoline and jumps from there to a small thunk generated
// for the hook, which saves the flags and the general registers as a
// T3Registers on the stack, hands them to Dispatch, restores them (with the
// callback's changes) and continues in the trampoline:
//
//     pushfd; pushad
//     push esp; push <hook>; call Dispatch; add esp, 8
//     popad; popfd
//     jmp [<hook>.original]
//
// Dispatch guards the callback: one that raises an exception is logged and
// switched off, and the game goes on with its registers unchanged.
#include "codehook.hpp"

#include "log.hpp"
#include "mods.hpp"

#include <MinHook.h>

#include <cstddef>
#include <cstring>
#include <vector>

namespace t3sdk::codehook {
namespace {

static_assert(sizeof(T3Registers) == 36 && offsetof(T3Registers, eax) == 28 && offsetof(T3Registers, eflags) == 32,
              "T3Registers must match the pushfd/pushad frame");

struct Hook {
    void* address;
    T3CodeCallback callback;
    void* user;
    HMODULE owner;
    void* original;  // MinHook's trampoline
    bool active;
};

std::vector<Hook*> g_hooks;  // never freed: thunks point at them

bool CallGuarded(Hook* hook, T3Registers* regs, DWORD* code) {
    __try {
        hook->callback(hook->user, regs);
        return true;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        *code = GetExceptionCode();
        return false;
    }
}

void __cdecl Dispatch(Hook* hook, T3Registers* regs) {
    if (!hook->active) {
        return;
    }
    regs->esp += 4;  // pushad saw esp after pushfd; the callback gets the game's own
    T3Registers saved = *regs;
    DWORD code = 0;
    if (!CallGuarded(hook, regs, &code)) {
        *regs = saved;
        hook->active = false;
        const char* mod = mods::NameAt(reinterpret_cast<const void*>(hook->callback));
        T3_LOG("mod %s: code hook at %p raised exception 0x%08lX; hook disabled", mod ? mod : "?", hook->address,
               code);
    }
}

// Writes the thunk for `hook` into executable memory.
void* MakeThunk(Hook* hook) {
    auto* code = static_cast<uint8_t*>(VirtualAlloc(nullptr, 64, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE));
    if (!code) {
        return nullptr;
    }
    uint8_t* p = code;
    auto put32 = [&p](uint32_t v) {
        memcpy(p, &v, 4);
        p += 4;
    };
    *p++ = 0x9C;  // pushfd
    *p++ = 0x60;  // pushad
    *p++ = 0x54;  // push esp
    *p++ = 0x68;  // push imm32
    put32(uint32_t(reinterpret_cast<uintptr_t>(hook)));
    *p++ = 0xE8;  // call rel32
    put32(uint32_t(reinterpret_cast<uintptr_t>(&Dispatch) - (reinterpret_cast<uintptr_t>(p) + 4)));
    *p++ = 0x83;  // add esp, 8
    *p++ = 0xC4;
    *p++ = 0x08;
    *p++ = 0x61;  // popad
    *p++ = 0x9D;  // popfd
    *p++ = 0xFF;  // jmp [m32]
    *p++ = 0x25;
    put32(uint32_t(reinterpret_cast<uintptr_t>(&hook->original)));
    FlushInstructionCache(GetCurrentProcess(), code, size_t(p - code));
    return code;
}

}  // namespace

int Add(void* address, T3CodeCallback callback, void* user, HMODULE owner) {
    if (!address || !callback) {
        return -1;
    }
    auto* hook = new Hook{address, callback, user, owner, nullptr, true};
    void* thunk = MakeThunk(hook);
    if (!thunk) {
        delete hook;
        return -1;
    }
    MH_STATUS status = MH_CreateHook(address, thunk, &hook->original);
    if (status == MH_OK) {
        status = MH_EnableHook(address);
    }
    if (status != MH_OK) {
        if (hook->original) {
            MH_RemoveHook(address);
        }
        VirtualFree(thunk, 0, MEM_RELEASE);
        delete hook;
        return int(status);
    }
    g_hooks.push_back(hook);
    return 0;
}

void DropOwner(HMODULE owner) {
    for (Hook* hook : g_hooks) {
        if (hook->owner == owner && hook->active) {
            hook->active = false;
            MH_DisableHook(hook->address);
        }
    }
}

}  // namespace t3sdk::codehook
