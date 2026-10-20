// Game/Class_10BD1320.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10BD1320.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Item_10BD1320.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10BD0410 ?FUN_10bd0410@Class_10BD1320@@QAEXH@Z
void Class_10BD1320::FUN_10bd0410(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Items ? 0 : (unsigned int)Unknown04 / sizeof(Item_10BD1320);
    for (int i = NewCount; i < OldCount; i++)
        m_Items[i].~Item_10BD1320();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Item_10BD1320* Block = (Item_10BD1320*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Item_10BD1320), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Item_10BD1320);
        m_Items = Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            Item_10BD1320* Block = (Item_10BD1320*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Item_10BD1320), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Item_10BD1320);
            m_Items = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&m_Items[j]) Item_10BD1320;
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
