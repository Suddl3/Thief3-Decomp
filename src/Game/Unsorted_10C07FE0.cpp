// Game/Unsorted_10C07FE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E97BB8.h"

extern void* DAT_10ff66ac;

// FUNCTION: 0x10C07FE0 ?ReleaseShared@@YAXXZ
void ReleaseShared()
{
    --*(int*)DAT_10ff66ac;
    if (*(int*)DAT_10ff66ac == 0)
    {
        ::operator delete(DAT_10ff66ac);
        DAT_10ff66ac = 0;
    }
}
