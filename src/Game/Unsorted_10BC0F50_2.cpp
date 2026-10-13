// Game/Unsorted_10BC0F50_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10943600.h"
#include "Game/Item_10943600.h"
#include "Game/FArchive.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* A);

// FUNCTION: 0x10BC19E0 ?LoadItemList@@YAXPAHPAVClass_10943600@@AAVFArchive@@@Z
void LoadItemList(int* A, Class_10943600* Dst, FArchive& Ar)
{
    *A = 0;
    int Count = 0;
    Ar.Serialize(&Count, 4);
    for (int i = 0; i < Count; i++)
    {
        Item_10943600 Item;
        FUN_10b052a0(Ar, &Item);
        int Index = Dst->Unknown00;
        Dst->FUN_10da4f50(Index + 1);
        Dst->Unknown08[Index] = Item;
    }
}
