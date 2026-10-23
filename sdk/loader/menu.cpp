// See menu.hpp for what this module is for.
//
// The version label patch swaps one pushed immediate in the game's code for the
// address of a longer format string, after checking that the bytes around it
// are the ones this patch was written for. The input diagnostics hook two
// functions and log the events that reach them.
#include "menu.hpp"

#include "log.hpp"
#include "sdk.hpp"

#include <MinHook.h>
#include <windows.h>

#include <cstdint>
#include <cstring>

namespace t3sdk::menu {
namespace {

// ---- version label patch -------------------------------------------------------

// FUN_10b28b70 formats the bottom-left version line with two `%s` arguments
// at 0x10b28e28. Only that call's immediate is redirected. The original
// localised version and other argument remain owned/formatted by the engine.

// The four-byte immediate of the `push imm32` at 0x10B28E28 that pushes the format string.
constexpr uintptr_t kFormatOperand = 0x10B28E29;

// The instruction the patch expects at kFormatOperand - 1: `push 0x10E70E20`.
constexpr uint8_t kExpectedInstruction[] = {0x68, 0x20, 0x0e, 0xe7, 0x10};

// The format string the game pushes there before the patch.
constexpr uintptr_t kOriginalFormat = 0x10E70E20;

// The replacement format string: the original two arguments plus the SDK's tag.
const char kModdedFormat[] = "%s %s [Modded - T3SDK " T3SDK_VERSION "]";

// ---- input diagnostics ----------------------------------------------------------

// The main menu window's input handler, __thiscall: (int event, void* arg3, void* arg4).
// Hooked only to log events (found by observation, not in docs/engine.md).
constexpr uintptr_t kMainMenuInput = 0x10B28750;

// The input handler shared by window objects, __thiscall: (int event, void* arg3, void* arg4).
// Hooked only to log events for popups (found by observation, not in docs/engine.md).
constexpr uintptr_t kWindowInput = 0x10A52DD0;

// The vtable addresses of the two popup window classes whose input is logged.
constexpr uintptr_t kPopupVtables[] = {0x10E696A8, 0x10E7FB08};

// Offsets into the main-menu/popup window objects, found by observation for
// this diagnostic; not in docs/engine.md and not exposed to mods.
constexpr uint32_t kChildCountOffset = 0xB8;
constexpr uint32_t kChildrenOffset = 0xC0;
constexpr uint32_t kSelectedOffset = 0xC4;

// An input handler; `__thiscall` in the game, hence the unused `edx`.
using InputFn = int(__fastcall*)(void* self, void* edx, int event, void* arg3, void* arg4);

// The original input handlers, filled in by the hooks.
InputFn g_mainMenuInput = nullptr;
InputFn g_windowInput = nullptr;

// Event codes worth logging (their exact meaning is unconfirmed); other event
// values fire far more often and would flood the log.
bool IsInterestingEvent(int event) {
    return event == 0x1d || event == 0x1e || event == 0x0d;
}

// Logs the interesting events the main menu receives, then calls the original.
int __fastcall MainMenuInputDetour(void* self, void* edx, int event, void* arg3, void* arg4) {
    // Only the events worth reading are logged.
    if (IsInterestingEvent(event)) {
        auto* bytes = static_cast<uint8_t*>(self);
        void* selected = *reinterpret_cast<void**>(bytes + kSelectedOffset);
        int childCount = *reinterpret_cast<int*>(bytes + kChildCountOffset);
        void** children = *reinterpret_cast<void***>(bytes + kChildrenOffset);
        void* child2 = childCount > 2 && children ? children[2] : nullptr;
        void* child3 = childCount > 3 && children ? children[3] : nullptr;
        T3_LOG("menu input event=%X arg3=%p arg4=%p selected=%p childCount=%d child2=%p child3=%p", event, arg3, arg4,
               selected, childCount, child2, child3);
    }

    return g_mainMenuInput(self, edx, event, arg3, arg4);
}

// Logs the interesting events a popup window receives (other windows are ignored), then calls the original.
int __fastcall WindowInputDetour(void* self, void* edx, int event, void* arg3, void* arg4) {
    // Only the events worth reading are logged.
    if (IsInterestingEvent(event)) {
        uintptr_t vtable = *reinterpret_cast<uintptr_t*>(self);
        bool isPopup = false;

        // Is this window one of the popup classes?
        for (uintptr_t candidate : kPopupVtables) {
            isPopup |= vtable == candidate;
        }

        // Other windows are ignored.
        if (isPopup) {
            auto* bytes = static_cast<uint8_t*>(self);
            void* selected = *reinterpret_cast<void**>(bytes + kSelectedOffset);
            int childCount = *reinterpret_cast<int*>(bytes + kChildCountOffset);
            T3_LOG("popup input event=%X arg3=%p arg4=%p selected=%p childCount=%d", event, arg3, arg4, selected,
                   childCount);
        }
    }

    return g_windowInput(self, edx, event, arg3, arg4);
}

// Creates and enables a hook on `target`. On failure logs "<failure>: <MinHook status>" and returns false.
bool CreateAndEnableHook(uintptr_t target, void* detour, void** original, const char* failure) {
    MH_STATUS status = MH_CreateHook(reinterpret_cast<void*>(target), detour, original);

    // Enable the hook only once it was created.
    if (status == MH_OK) {
        status = MH_EnableHook(reinterpret_cast<void*>(target));
    }

    // Creating or enabling the hook failed.
    if (status != MH_OK) {
        T3_LOG("%s: %s", failure, MH_StatusToString(status));
        return false;
    }

    return true;
}

// Checks that the code at the version label's call site is the build this patch was written for. Logs and returns
// false when it is not.
bool VersionCallSiteMatches() {
    const uintptr_t instruction = kFormatOperand - 1;

    // The instruction before the operand must be the expected push.
    if (std::memcmp(reinterpret_cast<const void*>(instruction), kExpectedInstruction, sizeof(kExpectedInstruction)) !=
        0) {
        T3_LOG("main-menu version marker not installed: callsite bytes changed");
        return false;
    }

    // The operand must still point at the original format string.
    if (*reinterpret_cast<const uintptr_t*>(kFormatOperand) != kOriginalFormat) {
        T3_LOG("main-menu version marker not installed: format operand changed");
        return false;
    }

    return true;
}

}  // namespace

bool InstallModdedVersionFormat() {
    static_assert(sizeof(void*) == 4, "T3Main menu patch requires x86");

    // Leave the code alone unless it is the expected build.
    if (!VersionCallSiteMatches()) {
        return false;
    }

    DWORD oldProtect = 0;
    void* operand = reinterpret_cast<void*>(kFormatOperand);

    // The page must be writable to patch the operand.
    if (!VirtualProtect(operand, sizeof(uintptr_t), PAGE_EXECUTE_READWRITE, &oldProtect)) {
        T3_LOG("main-menu version marker not installed: VirtualProtect failed (%lu)", GetLastError());
        return false;
    }

    const uintptr_t replacement = reinterpret_cast<uintptr_t>(kModdedFormat);
    std::memcpy(operand, &replacement, sizeof(replacement));

    DWORD ignored = 0;
    const BOOL restored = VirtualProtect(operand, sizeof(uintptr_t), oldProtect, &ignored);
    FlushInstructionCache(GetCurrentProcess(), reinterpret_cast<void*>(kFormatOperand - 1),
                          sizeof(kExpectedInstruction));

    // The operand is patched; a failed restore of the page protection is only reported.
    if (!restored) {
        T3_LOG("main-menu version marker installed, but page protection restore failed (%lu)", GetLastError());
    }

    T3_LOG("main-menu version marker enabled: Modded - T3SDK %s", T3SDK_VERSION);
    return true;
}

bool InstallInputDiagnostics() {
    // Hook the main menu's input handler.
    if (!CreateAndEnableHook(kMainMenuInput, reinterpret_cast<void*>(&MainMenuInputDetour),
                             reinterpret_cast<void**>(&g_mainMenuInput), "main-menu input diagnostic hook failed")) {
        return false;
    }

    // Hook the shared window input handler; on failure take the first hook out again.
    if (!CreateAndEnableHook(kWindowInput, reinterpret_cast<void*>(&WindowInputDetour),
                             reinterpret_cast<void**>(&g_windowInput), "popup input diagnostic hook failed")) {
        // Keep the two diagnostics all-or-nothing: take the first hook back out.
        MH_DisableHook(reinterpret_cast<void*>(kMainMenuInput));
        MH_RemoveHook(reinterpret_cast<void*>(kMainMenuInput));
        g_mainMenuInput = nullptr;
        return false;
    }

    T3_LOG("main-menu/popup input diagnostics enabled");
    return true;
}

}  // namespace t3sdk::menu
