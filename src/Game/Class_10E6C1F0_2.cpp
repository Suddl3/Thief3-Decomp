// Game/Class_10E6C1F0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6C1F0.h"

// FUNCTION: 0x10A80C10 ?FUN_10a80c10@Class_10E6C1F0@@UAEHXZ
int Class_10E6C1F0::FUN_10a80c10()
{
    if ((Virtual22() & 2) && Virtual8())
        return 0;
    return 1;
}

// FUNCTION: 0x10A80C40 ?FUN_10a80c40@Class_10E6C1F0@@UAEHXZ
int Class_10E6C1F0::FUN_10a80c40()
{
    if (!(Virtual22() & 4) && !(Virtual22() & 1))
        return 1;
    return 0;
}
