// Game/Unsorted_10C4DE80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C4E8D0.h"
#include "Game/Class_10C4E970.h"

// FUNCTION: 0x10C4E8D0 ?Empty@Class_10C4E8D0@@QAEXXZ
void Class_10C4E8D0::Empty()
{
    FUN_10c4d550(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10C4E970 ?FUN_10c4e970@Class_10C4E970@@QAEXXZ
void Class_10C4E970::FUN_10c4e970()
{
    FUN_10c4d3c0(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Items);
        m_Items = 0;
        m_CapacityBytes = 0;
    }
}
