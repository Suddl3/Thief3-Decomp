// Game/Unsorted_10ABC210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B59770.h"
#include "Game/Struct_10B597B0.h"

// FUNCTION: 0x10ABC210 ?Resize@Class_10B59770@@QAEXH@Z
void Class_10B59770::Resize(int NewCount)
{
    int Capacity = !Data ? 0 : m_AllocBytes / sizeof(Struct_10B597B0);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Data = (Struct_10B597B0*)GetAllocator()->Virtual3(Data, NewCapacity * sizeof(Struct_10B597B0), 0, 0, 0, 0);
        m_AllocBytes = NewCapacity * sizeof(Struct_10B597B0);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(Data);
            Data = 0;
            m_AllocBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            Data = (Struct_10B597B0*)GetAllocator()->Virtual3(Data, NewCapacity * sizeof(Struct_10B597B0), 0, 0, 0, 0);
            m_AllocBytes = NewCapacity * sizeof(Struct_10B597B0);
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}
