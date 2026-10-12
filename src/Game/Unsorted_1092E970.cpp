// Game/Unsorted_1092E970.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1092E8F0.h"

struct Struct_1092E970
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x1092E970 ?CopyFrom@Class_1092E8F0@@QAEXABV1@@Z
void Class_1092E8F0::CopyFrom(const Class_1092E8F0& Other)
{
    FUN_1091f380(Other.m_Count);
    for (int i = 0; i < m_Count; i++)
        m_Data[i] = Other.m_Data[i];
}
