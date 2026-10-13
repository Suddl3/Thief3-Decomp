// Game/Class_10B197E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10ABDAE0.h"
#include "Game/Class_10B197E0.h"
#include "Game/Class_10E79464.h"
#include "Core/Core.h"
#include "Game/Item_10B197E0.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10B197E0 ?Free@Class_10B197E0@@QAEXXZ
void Class_10B197E0::Free()
{
    SetCount(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(m_Items);
        m_Items = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10B19820 ?CopyFrom@Class_10B197E0@@QAEXABV1@@Z
void Class_10B197E0::CopyFrom(const Class_10B197E0& Other)
{
    SetCount(Other.m_Count);
    for (int i = 0; i < m_Count; i++)
        m_Items[i] = Other.m_Items[i];
}
