// Game/Unsorted_10B9F620.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B9FBE0.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10B9F620 ?Resize@Class_10B9FBE0@@QAEXH@Z
void Class_10B9FBE0::Resize(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Data ? 0 : m_Capacity;
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Data = (char*)GetAllocator()->Virtual3(m_Data, NewCapacity, 0, 0, 0, 0);
        m_Capacity = NewCapacity;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            m_Capacity = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Data = (char*)GetAllocator()->Virtual3(m_Data, NewCapacity, 0, 0, 0, 0);
            m_Capacity = NewCapacity;
        }
    }
    for (int i = OldCount; i < NewCount; i++)
    {
        char* Element = m_Data + i;
        if (Element)
            *Element = 0;
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
