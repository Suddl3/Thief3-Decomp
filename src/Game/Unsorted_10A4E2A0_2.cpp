// Game/Unsorted_10A4E2A0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

class Class_10A4E2A0
{
public:
    void FUN_10a4e2a0(int A, cIntArray* B);

    char Unknown00[0xC];
    cIntArray Unknown0C[0x10];
};

// FUNCTION: 0x10A4E2A0 ?FUN_10a4e2a0@Class_10A4E2A0@@QAEXHPAVcIntArray@@@Z
void Class_10A4E2A0::FUN_10a4e2a0(int A, cIntArray* B)
{
    for (int i = 0; i < Unknown0C[A].Count; i++)
    {
        const int* Item = &Unknown0C[A].Data[i];
        int Count = B->Count;
        bool Found = false;
        for (int j = 0; j < Count; j++)
        {
            if (B->Data[j] == *Item)
            {
                Found = true;
                break;
            }
        }
        if (!Found)
        {
            B->SetCount(Count + 1);
            B->Data[Count] = *Item;
        }
    }
}
