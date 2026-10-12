// Game/Class_10E66718_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Struct_10919190.h"
#include "Game/Class_10E66718.h"

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
