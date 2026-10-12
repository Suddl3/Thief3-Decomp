// Game/Unsorted_10925FF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109262B0.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x109262B0 ?Clear@Class_109262B0@@QAEXXZ
void Class_109262B0::Clear()
{
    FUN_10926020(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_CapacityBytes = 0;
    }
}
