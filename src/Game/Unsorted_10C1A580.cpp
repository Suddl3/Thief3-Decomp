// Game/Unsorted_10C1A580.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E9CBE4.h"

extern Class_10E9CBE4* DAT_10ff7090;

extern void* DAT_10ff7118;

// FUNCTION: 0x10C1A640 ?ReleaseSoundNotifier@@YAXXZ
void ReleaseSoundNotifier()
{
    --DAT_10ff7090->Unknown04;
    if (DAT_10ff7090->Unknown04 == 0)
    {
        DAT_10ff7090->Virtual0(1);
        DAT_10ff7090 = 0;
        DAT_10ff7118 = 0;
    }
}
