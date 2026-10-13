// Game/Unsorted_1092E970.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1092E8F0.h"
#include "Game/Struct_1092E970.h"

// FUNCTION: 0x1092E970 ?CopyFrom@Class_1092E8F0@@QAEXABV1@@Z
void Class_1092E8F0::CopyFrom(const Class_1092E8F0& Other)
{
    SetCount(Other.m_Count);
    for (int i = 0; i < m_Count; i++)
        m_Data[i] = Other.m_Data[i];
}
