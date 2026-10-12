// Game/Unsorted_10ABE160.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10ABDAE0.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10ABE1D0 ?Clear@Class_10ABDAE0@@QAEXXZ
void Class_10ABDAE0::Clear()
{
    FUN_10abdae0(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        Unknown04 = 0;
    }
}
