// Game/Unsorted_10942D20_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109435D0.h"
#include "Game/Class_10905A90_Member.h"

struct Struct_109435D0
{
    char Unknown00[0x30];
};

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10942D20 ?FUN_10942d20@Class_109435D0@@QAEXH@Z
void Class_109435D0::FUN_10942d20(int NewCount)
{
    int Capacity = !m_Items ? 0 : Unknown04 / sizeof(Struct_109435D0);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Items = (Struct_109435D0*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Struct_109435D0), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Struct_109435D0);
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
            m_Items = (Struct_109435D0*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Struct_109435D0), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Struct_109435D0);
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
