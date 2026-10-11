// Game/Unsorted_10BAA060.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BAA230.h"

double GetTimeSeconds();

// FUNCTION: 0x10BAA130 ?FUN_10baa130@@YAHH@Z
int FUN_10baa130(int A)
{
    if (A <= 9)
        return A + 0x4200025E;
    return A + 0x4200039A;
}

// FUNCTION: 0x10BAA230 ?FUN_10baa230@Class_10BAA230@@QAEXXZ
void Class_10BAA230::FUN_10baa230()
{
    UnknownB0 = GetTimeSeconds();
}
