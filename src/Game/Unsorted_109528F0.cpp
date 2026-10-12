// Game/Unsorted_109528F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10955C30.h"
#include "Game/Class_109528B0.h"

// FUNCTION: 0x10953450 ?FUN_10953450@Class_109528B0@@QAEXXZ
void Class_109528B0::FUN_10953450()
{
    for (int i = 0; i < 9; i++)
    {
        if (m_Slots[i].Unknown0C && !Virtual7(i))
            m_Slots[i].Create();
    }
}
