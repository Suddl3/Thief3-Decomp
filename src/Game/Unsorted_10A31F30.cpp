// Game/Unsorted_10A31F30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A32270.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

extern "C" void* memset(void*, int, unsigned);

// FUNCTION: 0x10A31F30 ?SetCount@Class_10A32270@@QAEXH@Z
void Class_10A32270::SetCount(int NewCount)
{
    int Capacity = !m_Data ? 0 : m_CapacityBytes;
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* NewData = GetAllocator()->Virtual3(m_Data, NewCapacity, 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity;
        m_Data = NewData;
        memset((char*)NewData + Capacity, 0, NewCapacity - Capacity);
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
            m_Data = GetAllocator()->Virtual3(m_Data, NewCapacity, 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity;
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
