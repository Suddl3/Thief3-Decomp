// Game/Unsorted_10954000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10955750.h"

// FUNCTION: 0x10955750 ?CheckAll@Class_10955750@@QAE_NH@Z
bool Class_10955750::CheckAll(int A)
{
    for (int i = 0; i < m_Count; i++)
    {
        if (!FUN_10955540(i, A))
            return false;
    }
    return true;
}
