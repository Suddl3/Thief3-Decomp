// Game/Unsorted_10B165A0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10B2C030.h"
#include "Game/Class_10B16930.h"

// FUNCTION: 0x10B16620 ?EnterUnEquipFirst@Class_10B16930@@QAEXXZ
void Class_10B16930::EnterUnEquipFirst()
{
    cIntArray Found = FUN_109e6d80(0x6a);
    if (Found.Count > 0 && Found.Data[0] != 0)
        ((Class_10B2C030*)Found.Data[0])->EnterUnEquip();
}
