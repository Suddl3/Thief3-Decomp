// Game/Unsorted_10AC98C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AC98B0.h"
#include "Game/Class_10AC99D0.h"

// FUNCTION: 0x10AC98C0 ?FUN_10ac98c0@Class_10AC98B0@@QAEXH@Z
void Class_10AC98B0::FUN_10ac98c0(int A)
{
    if (Unknown05)
        FUN_10ac9620(A);
    else if (Unknown04)
        FUN_10ac9840();
}

// FUNCTION: 0x10AC99D0 ?FUN_10ac99d0@Class_10AC99D0@@QAEHH@Z
int Class_10AC99D0::FUN_10ac99d0(int Index)
{
    if (Index + 1 < Unknown04)
        return Unknown0C[Index + 1];
    return 0;
}
