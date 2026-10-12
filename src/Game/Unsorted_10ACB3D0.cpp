// Game/Unsorted_10ACB3D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10ACB7A0.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10ACB7A0 ?Free@Class_10ACB7A0@@QAEXXZ
void Class_10ACB7A0::Free()
{
    FUN_10acb460(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(m_Buffer);
        m_Buffer = 0;
        Unknown04 = 0;
    }
}
