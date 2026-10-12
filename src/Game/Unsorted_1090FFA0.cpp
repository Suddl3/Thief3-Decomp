// Game/Unsorted_1090FFA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10910040.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10910040 ?Empty@Class_10910040@@QAEXXZ
void Class_10910040::Empty()
{
    SetCount(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_CapacityBytes = 0;
    }
}
