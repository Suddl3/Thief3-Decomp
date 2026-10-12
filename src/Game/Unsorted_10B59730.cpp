// Game/Unsorted_10B59730.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B59770.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10B59770 ?FUN_10b59770@Class_10B59770@@QAEXXZ
void Class_10B59770::FUN_10b59770()
{
    Resize(0);
    if (m_AllocBytes)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        m_AllocBytes = 0;
    }
}
