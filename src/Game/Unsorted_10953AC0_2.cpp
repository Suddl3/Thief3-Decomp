// Game/Unsorted_10953AC0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Item_10953AC0.h"
#include "Game/Class_10953AC0.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10953AC0 ?Resize@Class_10953AC0@@QAEXH@Z
void Class_10953AC0::Resize(int NewCount)
{
    int Capacity = !m_Items ? 0 : m_Capacity / sizeof(Item_10953AC0);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Items = (Item_10953AC0*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Item_10953AC0), 0, 0, 0, 0);
        m_Capacity = NewCapacity * sizeof(Item_10953AC0);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            m_Capacity = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Items = (Item_10953AC0*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Item_10953AC0), 0, 0, 0, 0);
            m_Capacity = NewCapacity * sizeof(Item_10953AC0);
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
