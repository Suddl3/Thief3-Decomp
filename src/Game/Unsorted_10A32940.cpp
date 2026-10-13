// Game/Unsorted_10A32940.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A32A70.h"
#include "Game/Class_10A32BF0.h"
#include "Game/Class_10A32D60.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10A32A70 ?Clear@Class_10A32A70@@QAEXXZ
void Class_10A32A70::Clear()
{
    SetCount(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_CapacityBytes = 0;
    }
}
