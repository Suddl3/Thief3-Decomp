// Game/Unsorted_10952590.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109523D0.h"

// FUNCTION: 0x10952590 ?UpdateState@Class_109523D0@@QAEXXZ
void Class_109523D0::UpdateState()
{
    int Key;
    int Result = FUN_10952410(&Key);
    m_State = 0;
    if (HasAllBits(6) || HasAllBits(0x84))
    {
        m_State = 3;
        return;
    }
    if ((HasAllBits(0x42) || HasAllBits(0xc0)) && Result == 2)
    {
        m_State = 0;
        return;
    }
    if (!HasAllBits(2) && !HasAllBits(0x80))
    {
        if (!HasAllBits(4))
            return;
        m_State = 1;
        return;
    }
    m_State = 2;
}
