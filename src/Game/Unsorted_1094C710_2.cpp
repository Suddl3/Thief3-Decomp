// Game/Unsorted_1094C710_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4AA80.h"

// FUNCTION: 0x1094CF80 ?FUN_1094cf80@Class_10E4AA80@@UAEXH@Z
void Class_10E4AA80::FUN_1094cf80(int A)
{
    if ((Unknown5C & 3) == 0)
    {
        if (Unknown5C & 0x24)
            Unknown60 |= 0x60;
    }
    else
    {
        FUN_1094ca70(0);
        FUN_1094b730();
        FUN_10948e80();
        Unknown60 |= 0x60;
    }
    if (Unknown5C & 0x80)
        FUN_1094b730();
    Unknown5C = 0;
    FUN_10949060(A);
}
