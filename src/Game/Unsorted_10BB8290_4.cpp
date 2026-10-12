// Game/Unsorted_10BB8290_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cBoneAimController.h"
#include "Game/Class_10BB8300.h"
#include "Game/Class_10C7D570.h"

cBoneAimController* GetBoneAimController();

// FUNCTION: 0x10BB8300 ?FUN_10bb8300@Class_10BB8300@@QAEXXZ
void Class_10BB8300::FUN_10bb8300()
{
    if (Unknown284)
    {
        GetBoneAimController()->FUN_10a2c2a0(Unknown08->FUN_10c7d570(), &Unknown284);
        Unknown284 = 0;
    }
}
