// Game/Unsorted_109DFBA0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

// FUNCTION: 0x109DFF00 ?Clear@cIntArray@@QAEXXZ
void cIntArray::Clear()
{
    for (int i = 0; i < Unknown00; i++)
    {
        int* Item = Unknown08 + i;
        if (*Item)
        {
            int Key = *Item - 4;
            GetAllocator()->Virtual5((void*)Key);
            *Item = 0;
        }
    }
    Unknown00 = 0;
}

// FUNCTION: 0x109DFF50 ?RemoveAt@cIntArray@@QAEXH@Z
void cIntArray::RemoveAt(int Index)
{
    if (Index != Unknown00 - 1)
    {
        int From = Index + 1;
        int To = Index;
        int Count = Unknown00 - Index - 1;
        if (From != To && Count)
            memmove(Unknown08 + To, Unknown08 + From, Count * sizeof(int));
    }
    SetCount(Unknown00 - 1);
}
