// Game/Unsorted_10BEFB10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10BF0A60.h"
#include "Game/Class_10E8D7AC.h"

// FUNCTION: 0x10BEFB10 ?FUN_10befb10@Class_10BF0A60@@QAEXH@Z
void Class_10BF0A60::FUN_10befb10(int Count)
{
    int OldCount = m_Count;
    int Capacity = !m_Items ? 0 : Unknown04 / sizeof(Class_10E8D7AC);
    GetAllocator()->Virtual8(0, 0);
    if (Count > Capacity)
    {
        int NewCapacity = Count;
        if (Capacity)
            NewCapacity = (Count & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Class_10E8D7AC), 0, 0, 0, 0);
        m_Items = (Class_10BEFA30*)Block;
        Unknown04 = NewCapacity * sizeof(Class_10E8D7AC);
    }
    else if (Count <= Capacity - 16)
    {
        if (Count == 0)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (Count & ~15) + 16;
            void* Block = GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Class_10E8D7AC), 0, 0, 0, 0);
            m_Items = (Class_10BEFA30*)Block;
            Unknown04 = NewCapacity * sizeof(Class_10E8D7AC);
        }
    }
    for (int j = OldCount; j < Count; j++)
        new ((Class_10E8D7AC*)m_Items + j) Class_10E8D7AC();
    GetAllocator()->Virtual9();
    m_Count = Count;
}
