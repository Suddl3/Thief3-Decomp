// Game/Unsorted_10B19820_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10B197E0.h"
#include "Game/Item_10B197E0.h"

// FUNCTION: 0x10B19820 ?CopyFrom@Class_10B197E0@@QAEXABV1@@Z
void Class_10B197E0::CopyFrom(const Class_10B197E0& Other)
{
    SetCount(Other.m_Count);
    for (int i = 0; i < m_Count; i++)
        m_Items[i] = Other.m_Items[i];
}
