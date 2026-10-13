// Game/Unsorted_10B23B60_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B152C0.h"
#include "Game/Class_10B24D00.h"
#include "Game/Class_10B24D20.h"
#include "Game/Class_10B24D30.h"
#include "Game/Class_10E7A9C0.h"
#include "Game/Class_10F3A3D8.h"
#include "Game/Class_10ABB6B0.h"
#include "T3Player/T3PlayerClasses.h"

extern Class_10F3A3D8* DAT_10f3a3d8;

class Class_10E7A9C0;

// FUNCTION: 0x10B23B60 ?FUN_10b23b60@UT3GameEngine@@UAEXH@Z
void UT3GameEngine::Virtual31(int A)
{
    FUN_1098a410(A);
    if (DAT_10f3a3d8->Unknown0E8)
        DAT_10f3a3d8->Unknown0E8->FUN_10abb6b0(A);
}

// FUNCTION: 0x10B248D0 ?Register@Class_10E7A9C0@@UAEXPAVClass_10B152C0@@@Z
void Class_10E7A9C0::Register(Class_10B152C0* p1)
{
    p1->AddToLists(0xef, this);
}

// FUNCTION: 0x10B24D00 ?FUN_10b24d00@Class_10B24D00@@QAEXHE@Z
void Class_10B24D00::FUN_10b24d00(int p1, unsigned char p2)
{
    Unknown10 = p2;
    Unknown14 = p2;
    Unknown04 = p1;
    Unknown08 = p1;
}

// FUNCTION: 0x10B24D20 ?FUN_10b24d20@Class_10B24D20@@QAEXH@Z
void Class_10B24D20::FUN_10b24d20(int p1)
{
    Unknown2C = p1;
    Unknown30 = p1;
}

// FUNCTION: 0x10B24D30 ?FUN_10b24d30@Class_10B24D30@@QAEXH@Z
void Class_10B24D30::FUN_10b24d30(int Mode)
{
    if (Mode == 2)
    {
        Unknown2C = 0;
        Unknown30 = 0;
        return;
    }
    bool IsZero = (Mode == 0);
    Unknown10 = IsZero;
    Unknown14 = IsZero;
    Unknown04 = 0;
    Unknown08 = 0;
}
