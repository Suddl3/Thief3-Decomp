// Game/Class_1091B3F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1091A590.h"
#include "Game/Class_1091B3F0.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x1091AF10 ?SetCount@Class_1091B3F0@@QAEXH@Z
void Class_1091B3F0::SetCount(int NewCount)
{
    int OldCount = Count;
    int Capacity = !Items ? 0 : m_Capacity / sizeof(Class_1091A590);
    for (int i = NewCount; i < OldCount; i++)
        ((Class_1091A590*)Items)[i].~Class_1091A590();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Items = (Item_1091B3F0*)GetAllocator()->Virtual3(Items, NewCapacity * sizeof(Class_1091A590), 0, 0, 0, 0);
        m_Capacity = NewCapacity * sizeof(Class_1091A590);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(Items);
            Items = 0;
            m_Capacity = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            Items = (Item_1091B3F0*)GetAllocator()->Virtual3(Items, NewCapacity * sizeof(Class_1091A590), 0, 0, 0, 0);
            m_Capacity = NewCapacity * sizeof(Class_1091A590);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_1091A590* Element = (Class_1091A590*)((char*)Items + j * sizeof(Class_1091A590));
        if (Element)
        {
            *(int*)&Element->Unknown00 = 0;
            *(int*)&Element->Unknown04 = 0;
        }
    }
    GetAllocator()->Virtual9();
    Count = NewCount;
}
