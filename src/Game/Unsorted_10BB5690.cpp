// Game/Unsorted_10BB5690.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10953AC0.h"
#include "Game/Item_10953AC0.h"

// FUNCTION: 0x10BB5810 ?FUN_10bb5810@Class_10953AC0@@QAEXABV1@@Z
void Class_10953AC0::FUN_10bb5810(const Class_10953AC0& Other)
{
    FUN_10953ac0(Other.Unknown00);
    for (int i = 0; i < Unknown00; i++)
        Unknown08[i] = Other.Unknown08[i];
}
