// Game/Class_10E66718.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E66718.h"
#include "Game/Struct_10919190.h"
#include "Core/Core.h"

void SetWorldTransform(Struct_10919190* Matrix);

// FUNCTION: 0x10948BD0 ?FUN_10948bd0@Class_10E66718@@QAEXXZ
void Class_10E66718::FUN_10948bd0()
{
    if (!(Unknown5C & 0x11))
    {
        if ((Unknown5C & 0x24) && !(Unknown58 & 0x20))
        {
            Virtual23();
            if (Virtual24())
                Unknown60 |= 0x100;
        }
    }
    else
    {
        FUN_10948960(0);
        Virtual23();
        Virtual24();
        if (Unknown58 & 0x20)
            Unknown60 |= 0x80;
        else
            Unknown60 |= 0x100;
    }
    Unknown60 &= 0xfffff7ff;
}

// FUNCTION: 0x10A3A030 ?FUN_10a3a030@Class_10E66718@@UAEXXZ
void Class_10E66718::FUN_10a3a030()
{
    SetWorldTransform(&Unknown04);
}

// FUNCTION: 0x10A3A950 ?GetMidpoint@Class_10E66718@@UAE?AVFVector@@XZ
FVector Class_10E66718::GetMidpoint()
{
    FVector Result = (Unknown120 + Unknown114) * 0.5f;
    return Result;
}
