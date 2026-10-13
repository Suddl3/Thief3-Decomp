// Game/AGarrett_10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "T3Player/T3PlayerClasses.h"

// FUNCTION: 0x10B21290 ?IsHoldingWeapon@AGarrett@@UAEEXZ
unsigned char AGarrett::IsHoldingWeapon()
{
    return WeaponHolding != 0;
}
