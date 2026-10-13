// Game/Unsorted_10BC1B00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10943600.h"

struct Item_10943600
{
    float X;
    float Y;
    float Z;
};

void FUN_10c002b0(int* A, const char* Key, int* Value);

void FUN_10c00330(int* A, const char* Key, float* Value);

// FUNCTION: 0x10BC1B00 ?FUN_10bc1b00@@YAXPAXH@Z
void FUN_10bc1b00(void* A, int B)
{
    Class_10943600* Dst = (Class_10943600*)A;
    int* Ar = (int*)B;
    int Count = 0;
    FUN_10c002b0(Ar, "Count=", &Count);
    for (int i = 0; i < Count; i++)
    {
        Item_10943600 Item;
        FUN_10c00330(Ar, "x=", &Item.X);
        FUN_10c00330(Ar, "y=", &Item.Y);
        FUN_10c00330(Ar, "z=", &Item.Z);
        int Index = Dst->Unknown00;
        Dst->FUN_10da4f50(Index + 1);
        Dst->Unknown08[Index] = Item;
    }
}
