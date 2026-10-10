// Game/Class_10E6C6FC_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6C6FC.h"
#include "Game/Struct_10A8C2B0_Inner.h"
#include "Game/Struct_10A8C2B0_Outer.h"

extern int DAT_10f3a1f0;

// FUNCTION: 0x10A8C2B0 ?FUN_10a8c2b0@Class_10E6C6FC@@UAEXXZ
void Class_10E6C6FC::FUN_10a8c2b0()
{
    DAT_10f3a1f0 = 0;
    if (Unknown04 && Unknown04->Unknown60)
    {
        while (DAT_10f3a1f0 < Unknown04->Unknown60->Unknown38)
        {
            if (Unknown04->Unknown60->Unknown34[DAT_10f3a1f0] != 0)
                break;
            DAT_10f3a1f0++;
        }
    }
}
