// Game/Unsorted_10C0BDE0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C0C150.h"
#include "Game/Item_10C0C150.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10C0C050 ?Clear@Class_10C0C150@@QAEXXZ
void Class_10C0C150::Clear()
{
    Resize(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_CapacityBytes = 0;
    }
}
