// Game/Class_10A88A50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A88A50.h"

extern float DAT_10eafbdc;

// FUNCTION: 0x10A88A50 ?FUN_10a88a50@Class_10A88A50@@QAE_NH@Z
bool Class_10A88A50::FUN_10a88a50(int Index)
{
    if (Index < 0)
        Index = 0;
    else if (Index >= 254)
        Index = 254;
    return Unknown04[Index] > DAT_10eafbdc;
}

// FUNCTION: 0x10A88A90 ?FUN_10a88a90@Class_10A88A50@@QAEHH@Z
int Class_10A88A50::FUN_10a88a90(int Index)
{
    if (Index < 0)
        Index = 0;
    else if (Index >= 254)
        Index = 254;
    if (Unknown400[Index] > DAT_10eafbdc)
        return 1;
    return 0;
}
