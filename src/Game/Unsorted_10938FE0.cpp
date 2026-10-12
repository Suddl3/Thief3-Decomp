// Game/Unsorted_10938FE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10955C30.h"
#include "Game/Class_109528B0.h"

// FUNCTION: 0x10939050 ?ClearSlots@Class_109528B0@@QAEXXZ
void Class_109528B0::ClearSlots()
{
    for (int i = 0; i < 9; i++)
    {
        m_Slots[i].Destroy();
        if (Virtual7(i))
            Virtual9(i);
        m_SlotMask &= ~(1 << i);
    }
    m_SlotMask = 0;
}
