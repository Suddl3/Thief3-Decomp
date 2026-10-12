// Game/Class_10E4AA80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4AA80.h"

// FUNCTION: 0x1094CF80 ?Update@Class_10E4AA80@@UAEXH@Z
void Class_10E4AA80::Update(int A)
{
    if ((m_PendingFlags & 3) == 0)
    {
        if (m_PendingFlags & 0x24)
            Unknown60 |= 0x60;
    }
    else
    {
        FUN_1094ca70(0);
        FUN_1094b730();
        FUN_10948e80();
        Unknown60 |= 0x60;
    }
    if (m_PendingFlags & 0x80)
        FUN_1094b730();
    m_PendingFlags = 0;
    IntegrateOffsets(A);
}
