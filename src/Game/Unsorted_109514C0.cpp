// Game/Unsorted_109514C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109514C0.h"

void FUN_1092bdb0(void* Memory);

// FUNCTION: 0x109514C0 ?ReleaseAll@Class_109514C0@@QAEXXZ
void Class_109514C0::ReleaseAll()
{
    for (int i = 0; i < 9; i++)
    {
        if (m_Blocks[i])
            FUN_1092bdb0(m_Blocks[i]);
        m_Blocks[i] = 0;
    }
}
