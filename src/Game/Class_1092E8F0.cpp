// Game/Class_1092E8F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10924100.h"
#include "Game/Class_10924100_Unknown44.h"
#include "Game/Class_1092E8F0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1091F4C0.h"
#include "Game/Struct_1092E970.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x1091F380 ?SetCount@Class_1092E8F0@@QAEXH@Z
void Class_1092E8F0::SetCount(int NewCount)
{
    int Capacity = !m_Data ? 0 : m_CapacityBytes / sizeof(Struct_1092E970);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~3) + 4;
        m_Data = (Struct_1092E970*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Struct_1092E970), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Struct_1092E970);
    }
    else if (NewCount <= Capacity - 4)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~3) + 4;
            m_Data = (Struct_1092E970*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Struct_1092E970), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Struct_1092E970);
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x1092E970 ?CopyFrom@Class_1092E8F0@@QAEXABV1@@Z
void Class_1092E8F0::CopyFrom(const Class_1092E8F0& Other)
{
    SetCount(Other.m_Count);
    for (int i = 0; i < m_Count; i++)
        m_Data[i] = Other.m_Data[i];
}
