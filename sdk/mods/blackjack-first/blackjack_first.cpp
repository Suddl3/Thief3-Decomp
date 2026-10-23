// Attack with no weapon in hand draws the blackjack instead of the dagger.
// The game names the weapon to draw in Class_10B255F0::FUN_10b261e0: at
// 0x10B26213 it builds a cString from "GarrettDagger", the argument on top
// of the stack. A code hook there hands it "GarrettBlackjack".
#include <t3sdk/t3sdk.h>

#include <cstdint>

namespace {

constexpr uintptr_t kDefaultWeaponName = 0x10B26213;  // call cString::cString(const char*), argument at [esp]
const char kBlackjack[] = "GarrettBlackjack";

void T3SDK_CALL OnDefaultWeapon(void*, T3Registers* regs) {
    *reinterpret_cast<const char**>(regs->esp) = kBlackjack;
}

}  // namespace

T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    if (api->version < 2 || api->size < offsetof(T3SdkApi, AddCodeHook) + sizeof(api->AddCodeHook)) {
        return 1;
    }
    int status = api->AddCodeHook(reinterpret_cast<void*>(kDefaultWeaponName), OnDefaultWeapon, nullptr);
    if (status != 0) {
        api->Log("default weapon hook failed (status %d)", status);
        return 1;
    }
    return 0;
}
