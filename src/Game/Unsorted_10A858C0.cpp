// Game/Unsorted_10A858C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Object_10A858C0.h"

extern int DAT_10f3a1c8;

extern Object_10A858C0** DAT_10f3a1d0;

// FUNCTION: 0x10A858C0 ?FUN_10a858c0@@YA_NH@Z
bool FUN_10a858c0(int A)
{
    for (int i = 0; i < DAT_10f3a1c8; i++)
    {
        if (DAT_10f3a1d0[i]->Virtual16() == A)
            return true;
    }
    return false;
}

// FUNCTION: 0x10A85900 ?FUN_10a85900@@YAXH@Z
void FUN_10a85900(int A)
{
    for (int i = 0; i < DAT_10f3a1c8; i++)
    {
        if (DAT_10f3a1d0[i]->Virtual16() == A)
        {
            DAT_10f3a1d0[i]->Virtual8();
            return;
        }
    }
}
