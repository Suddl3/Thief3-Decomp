// Game/cShortArray.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cShortArray.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10942C60 ?Resize@cShortArray@@QAEXH@Z
void cShortArray::Resize(int NewCount)
{
    int Capacity = !m_Items ? 0 : m_CapacityBytes / sizeof(short);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Items = (short*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(short), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(short);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Items = (short*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(short), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(short);
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
