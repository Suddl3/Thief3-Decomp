// Game/Class_10E5D548_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5D548.h"
#include "Game/Class_10E5D548_Unknown10.h"

// FUNCTION: 0x10A130D0 ?FUN_10a130d0@Class_10E5D548@@UAEHH@Z
int Class_10E5D548::FUN_10a130d0(int Param)
{
    for (int i = 0; i < Unknown08; i++)
    {
        Unknown10[i]->Virtual34(Param);
        Unknown10[i]->Virtual30(Param);
    }
    return 1;
}
