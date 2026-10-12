// Game/Unsorted_10C09A40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C09A40.h"
#include "Game/Class_10C0A6F0.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10C09A40 ?Clear@Class_10C09A40@@QAEXXZ
void Class_10C09A40::Clear()
{
    FUN_10c095f0(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10C0A6F0 ?Clear@Class_10C0A6F0@@QAEXXZ
void Class_10C0A6F0::Clear()
{
    FUN_10c0a320(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_CapacityBytes = 0;
    }
}
