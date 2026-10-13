// Game/Unsorted_10C0A1C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10C0A6F0.h"
#include "Game/Class_10C09B60.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10C0A320 ?FUN_10c0a320@Class_10C0A6F0@@QAEXH@Z
void Class_10C0A6F0::FUN_10c0a320(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Data ? 0 : m_CapacityBytes / sizeof(Class_10C09B60);
    for (int i = NewCount; i < OldCount; i++)
        ((Class_10C09B60*)m_Data)[i].~Class_10C09B60();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Data = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10C09B60), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Class_10C09B60);
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
            m_Data = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10C09B60), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Class_10C09B60);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10C09B60* Element = (Class_10C09B60*)((char*)m_Data + j * sizeof(Class_10C09B60));
        new (Element) Class_10C09B60;
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
