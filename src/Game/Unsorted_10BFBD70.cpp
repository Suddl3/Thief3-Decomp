// Game/Unsorted_10BFBD70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10BFBD70 ?FUN_10bfbd70@Class_10BFBD70@@QAEXH@Z
void Class_10BFBD70::FUN_10bfbd70(int NewCount)
{
    int Capacity = !Data ? 0 : Unknown04 / sizeof(int);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Data = (int*)GetAllocator()->Virtual3(Data, NewCapacity * sizeof(int), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(int);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(Data);
            Data = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            Data = (int*)GetAllocator()->Virtual3(Data, NewCapacity * sizeof(int), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(int);
        }
    }
    GetAllocator()->Virtual9();
    Count = NewCount;
}
