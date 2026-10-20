// Game/Class_10A32BF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A32000.h"
#include "Game/Class_10A32BF0.h"
#include "Game/Class_10A32A70.h"
#include "Game/Class_10A32D60.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10A32AF0 ?SetCount@Class_10A32BF0@@QAEXH@Z
void Class_10A32BF0::SetCount(int NewCount)
{
    int OldCount = Count;
    int Capacity = !m_Data ? 0 : m_CapacityBytes / sizeof(Class_10A32000);
    for (int i = NewCount; i < OldCount; i++)
        m_Data[i].~Class_10A32000();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Data = (Class_10A32000*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10A32000), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Class_10A32000);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Data = (Class_10A32000*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10A32000), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Class_10A32000);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10A32000* Element = (Class_10A32000*)((char*)m_Data + j * sizeof(Class_10A32000));
        if (Element)
        {
            Element->m_Count = 0;
            Element->m_CapacityBytes = 0;
            Element->m_Data = 0;
        }
    }
    GetAllocator()->Virtual9();
    Count = NewCount;
}

// FUNCTION: 0x10A32BF0 ?Clear@Class_10A32BF0@@QAEXXZ
void Class_10A32BF0::Clear()
{
    SetCount(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_CapacityBytes = 0;
    }
}
