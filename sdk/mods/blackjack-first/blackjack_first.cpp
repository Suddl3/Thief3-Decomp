// Attack with no weapon in hand draws the blackjack instead of the dagger.
// The game names the weapon to draw in Class_10B255F0::FUN_10b261e0: at
// 0x10B26213 it builds a cString from "GarrettDagger", the argument on top
// of the stack. A code hook there hands it "GarrettBlackjack".
//
// The mod has no settings.
#include <t3sdk/modkit.hpp>
#include <t3sdk/t3sdk.h>

#include <cstdint>

namespace {

// call cString::cString(const char*) in Class_10B255F0::FUN_10b261e0, with the
// weapon name ("GarrettDagger") as its argument at [esp].
constexpr uintptr_t kDefaultWeaponName = 0x10B26213;

// The weapon to draw instead of the dagger.
const char kBlackjack[] = "GarrettBlackjack";

// Code hook at kDefaultWeaponName: replaces the weapon name on the stack.
void T3SDK_CALL OnDefaultWeapon(void*, T3Registers* regs) {
    *reinterpret_cast<const char**>(regs->esp) = kBlackjack;
}

}  // namespace

// Called by the SDK when the mod is loaded. Returns non-zero (the mod stays
// off) when the SDK has no code hooks or the hook cannot be placed.
T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    if (api->version < 2 || api->size < offsetof(T3SdkApi, AddCodeHook) + sizeof(api->AddCodeHook)) {
        return 1;
    }

    if (!t3mod::CodeHook(api, kDefaultWeaponName, OnDefaultWeapon, nullptr, "default weapon")) {
        return 1;
    }

    return 0;
}
