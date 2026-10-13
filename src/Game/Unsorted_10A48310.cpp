// Game/Unsorted_10A48310.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <new>
#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A48310.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10A48310 ?SetCount@Class_10A48310@@QAEXH@Z
void Class_10A48310::SetCount(int NewCount)
{
    int OldCount = Count;
    int Capacity = !Items ? 0 : m_CapacityBytes / sizeof(FString);
    for (int i = NewCount; i < OldCount; i++)
        Items[i].~FString();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Items = (FString*)GetAllocator()->Virtual3(Items, NewCapacity * sizeof(FString), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(FString);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(Items);
            Items = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            Items = (FString*)GetAllocator()->Virtual3(Items, NewCapacity * sizeof(FString), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(FString);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&Items[j]) FString;
    GetAllocator()->Virtual9();
    Count = NewCount;
}
