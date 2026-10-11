// Game/Unsorted_10A85AD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Object_10A858C0.h"

Class_10905A90_Member* FUN_10905aa0();

// The growable pointer array in globals: the count, the bytes allocated and the block.
extern int DAT_10f3a1c8;

extern int DAT_10f3a1cc;

extern Object_10A858C0** DAT_10f3a1d0;

// FUNCTION: 0x10A86120 ?FUN_10a86120@@YAXXZ
void FUN_10a86120()
{
    for (int i = 0; i < DAT_10f3a1c8; i++)
    {
        delete DAT_10f3a1d0[i];
        DAT_10f3a1d0[i] = 0;
    }
    int Capacity = !DAT_10f3a1d0 ? 0 : DAT_10f3a1cc / sizeof(void*);
    FUN_10905aa0()->Virtual8(0, 0);
    int NewCount = 0;
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        DAT_10f3a1d0 = (Object_10A858C0**)FUN_10905aa0()->Virtual3(DAT_10f3a1d0, NewCapacity * sizeof(void*), 0, 0, 0, 0);
        DAT_10f3a1cc = NewCapacity * sizeof(void*);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            FUN_10905aa0()->Virtual5(DAT_10f3a1d0);
            DAT_10f3a1d0 = 0;
            DAT_10f3a1cc = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            DAT_10f3a1d0 = (Object_10A858C0**)FUN_10905aa0()->Virtual3(DAT_10f3a1d0, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            DAT_10f3a1cc = NewCapacity * sizeof(void*);
        }
    }
    FUN_10905aa0()->Virtual9();
    DAT_10f3a1c8 = NewCount;
}
