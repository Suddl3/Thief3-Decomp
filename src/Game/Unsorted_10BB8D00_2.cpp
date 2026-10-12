// Game/Unsorted_10BB8D00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109A6AA0.h"
#include "Game/Class_10B9BCA0.h"
#include "Game/Class_10B9CAC0.h"
#include "Game/Class_10BB8D00.h"
#include "Game/Class_10BB8D60.h"
#include "Game/Class_10BC9D40.h"
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10B9BCA0.h"

class Class_10BC9D40;

class AAIPawn;

Class_10B9BCA0* GetAIPawnController(AAIPawn* Pawn);

double GetTimeSeconds();

// FUNCTION: 0x10BB8D00 ?FUN_10bb8d00@Class_10BB8D00@@QAEXXZ
void Class_10BB8D00::FUN_10bb8d00()
{
    if (GetTimeSeconds() - Unknown2EC > 1.0)
        Unknown2EC = GetTimeSeconds();
    Class_10B9BCA0* Controller = GetAIPawnController((AAIPawn*)Unknown08->FUN_10c7d570());
    Class_10BC9D40* Target;
    if (Controller && Controller->Unknown118 && Controller->Unknown118->Unknown08)
        Target = Controller->Unknown118->Unknown08->GetCurrent();
    else
        Target = 0;
    Target->Virtual25();
}

// FUNCTION: 0x10BB8D60 ?FUN_10bb8d60@Class_10BB8D60@@QAEXXZ
void Class_10BB8D60::FUN_10bb8d60()
{
    if (Unknown22C.FUN_109a6aa0() && Unknown238.FUN_109a6aa0())
        return;
    Unknown2F0 = true;
    Unknown22C = Class_109A6AA0();
    Unknown238 = Class_109A6AA0();
}
