// Game/Unsorted_10C5C3E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C5D4F0.h"

extern Class_10C5D4F0* DAT_10ff7108;

// FUNCTION: 0x10C5CB70 ?FUN_10c5cb70@@YAXXZ
void FUN_10c5cb70()
{
    if (DAT_10ff7108)
    {
        delete DAT_10ff7108;
        DAT_10ff7108 = 0;
    }
}
