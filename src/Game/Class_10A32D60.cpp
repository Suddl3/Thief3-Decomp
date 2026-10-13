// Game/Class_10A32D60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10905A90_Member.h"
#include "Game/cRefArray.h"
#include "Game/Class_10A32D60.h"
#include "Game/Class_10A32A70.h"
#include "Game/Class_10A32BF0.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10A32C30 ?SetCount@Class_10A32D60@@QAEXH@Z
void Class_10A32D60::SetCount(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Elements ? 0 : m_CapacityBytes / sizeof(cRefArray);
    for (int i = NewCount; i < OldCount; i++)
        m_Elements[i].~cRefArray();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Elements = (cRefArray*)GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(cRefArray), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(cRefArray);
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
            m_Elements = (cRefArray*)GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(cRefArray), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(cRefArray);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&m_Elements[j]) cRefArray;
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x10A32D60 ?Clear@Class_10A32D60@@QAEXXZ
void Class_10A32D60::Clear()
{
    SetCount(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Elements);
        m_Elements = 0;
        m_CapacityBytes = 0;
    }
}
