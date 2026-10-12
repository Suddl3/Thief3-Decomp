// Game/Unsorted_10A32C30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <new>
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A32370.h"
#include "Game/Class_10A32D60.h"

// FUNCTION: 0x10A32C30 ?SetCount@Class_10A32D60@@QAEXH@Z
void Class_10A32D60::SetCount(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Elements ? 0 : m_CapacityBytes / sizeof(Class_10A32370);
    for (int i = NewCount; i < OldCount; i++)
        m_Elements[i].~Class_10A32370();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Elements = (Class_10A32370*)GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(Class_10A32370), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Class_10A32370);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Elements);
            m_Elements = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Elements = (Class_10A32370*)GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(Class_10A32370), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Class_10A32370);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&m_Elements[j]) Class_10A32370;
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
