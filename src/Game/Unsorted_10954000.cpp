// Game/Unsorted_10954000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10955750.h"

// FUNCTION: 0x10955750 ?FUN_10955750@Class_10955750@@QAE_NH@Z
bool Class_10955750::FUN_10955750(int A)
{
    for (int i = 0; i < Unknown10; i++)
    {
        if (!FUN_10955540(i, A))
            return false;
    }
    return true;
}
