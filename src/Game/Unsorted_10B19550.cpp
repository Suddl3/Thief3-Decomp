// Game/Unsorted_10B19550.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Core/Core.h"
#include "Game/Class_10B197E0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Item_10B197E0.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10B19550 ?SetCount@Class_10B197E0@@QAEXH@Z
void Class_10B197E0::SetCount(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Items ? 0 : Unknown04 / sizeof(Item_10B197E0);
    for (int i = NewCount; i < OldCount; i++)
        m_Items[i].Unknown00.~FString();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Items = (Item_10B197E0*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Item_10B197E0), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Item_10B197E0);
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
            m_Items = (Item_10B197E0*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Item_10B197E0), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Item_10B197E0);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&m_Items[j].Unknown00) FString;
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
