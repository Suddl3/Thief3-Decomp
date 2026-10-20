// Game/Unsorted_10C4F490_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10C50320.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C4E970.h"
#include "Game/Item_10C50320.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10C4F690 ?FUN_10c4f690@Class_10C50320@@QAEXH@Z
void Class_10C50320::FUN_10c4f690(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Items ? 0 : Unknown04 / sizeof(Item_10C50320);
    for (int i = NewCount; i < OldCount; i++)
        m_Items[i].~Item_10C50320();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Item_10C50320* Block = (Item_10C50320*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Item_10C50320), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Item_10C50320);
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
            Item_10C50320* Block = (Item_10C50320*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Item_10C50320), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Item_10C50320);
            m_Items = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&m_Items[j]) Item_10C50320;
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
