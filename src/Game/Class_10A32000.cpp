// Game/Class_10A32000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A32000.h"

Class_10905A90_Member* GetAllocator();

inline void Class_10A32000::SetCount(int NewCount)
{
    int Capacity = !m_Data ? 0 : m_CapacityBytes / sizeof(char);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Data = (char*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(char), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(char);
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
            m_Data = (char*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(char), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(char);
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x109431A0 ??1Class_10A32000@@QAE@XZ
Class_10A32000::~Class_10A32000()
{
    SetCount(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_CapacityBytes = 0;
    }
}
