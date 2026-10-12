// Game/Unsorted_10BD85B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BD8630.h"
#include "Game/Class_10BD8650.h"
#include "Game/Class_10DBD510.h"
#include "Game/Struct_10BD8630.h"
#include "Game/cTacticWeaponEquip.h"

void __stdcall FUN_109e3c90(int A);

// FUNCTION: 0x10BD8630 ?FUN_10bd8630@Class_10BD8630@@QAEMXZ
float Class_10BD8630::FUN_10bd8630()
{
    float Value = Unknown04->Unknown08->FUN_10dbd510(0x10056c)->FUN_10bbdc80();
    return Value;
}

// FUNCTION: 0x10BD8650 ?FUN_10bd8650@Class_10BD8650@@QAEMXZ
float Class_10BD8650::FUN_10bd8650()
{
    float Value = Unknown04->Unknown08->FUN_10dbd510(0x10056d)->FUN_10bbdc80();
    return Value;
}

// FUNCTION: 0x10BD9640 ?ClearReferencesTo@cTacticWeaponEquip@@UAEXH@Z
void cTacticWeaponEquip::ClearReferencesTo(int A)
{
    FUN_109e3c90(A);
    if (Unknown48 == A)
        Unknown48 = 0;
    if (Unknown4C == A)
        Unknown4C = 0;
}
