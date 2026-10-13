// Game/Unsorted_10B215D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cVector.h"
#include "T3Player/T3PlayerClasses.h"

extern bool DAT_10f45c0c;

// FUNCTION: 0x10B217F0 ?Tick@AGarrett@@UAEHMH@Z
int AGarrett::Tick(float A, int B)
{
    LastTickTime = A;
    if (!DAT_10f45c0c)
        FUN_10b21690(A);
    return 1;
}
