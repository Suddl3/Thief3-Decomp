// Game/Unsorted_10C00A60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C00B40.h"
#include "Game/Class_10C00B40_Field18.h"
#include "Game/Class_10C00A60.h"
#include "Game/Class_10905A90_Member.h"

unsigned int FUN_1090e9b0(const void* Data, int Length);

Class_10905A90_Member* GetAllocator();

extern "C" void* memset(void*, int, unsigned);

// FUNCTION: 0x10C00A60 ?FUN_10c00a60@Class_10C00A60@@QAEXH@Z
void Class_10C00A60::FUN_10c00a60(int Count)
{
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(int);
    GetAllocator()->Virtual8(0, 0);
    if (Count > Capacity)
    {
        int NewCapacity = Count;
        if (Capacity)
            NewCapacity = (Count & ~15) + 16;
        int* NewData = (int*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(int), 0, 0, 0, 0);
        Unknown08 = NewData;
        Unknown04 = NewCapacity * sizeof(int);
        memset(NewData + Capacity, 0, (NewCapacity - Capacity) * sizeof(int));
    }
    else if (Count <= Capacity - 16)
    {
        if (Count == 0)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (Count & ~15) + 16;
            Unknown08 = (int*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(int), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(int);
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = Count;
}

// FUNCTION: 0x10C00B40 ?FUN_10c00b40@Class_10C00B40@@QAEIABH@Z
unsigned int Class_10C00B40::FUN_10c00b40(const int& Key)
{
    const void* Data;
    int Length;
    Unknown18.Virtual0(Key, &Data, &Length);
    return FUN_1090e9b0(Data, Length) & ((1 << Unknown08) - 1);
}
