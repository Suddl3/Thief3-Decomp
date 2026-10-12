// Game/Class_10E993C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10943600.h"
#include "Game/cIntArray.h"
#include "Game/FArchive.h"
#include "Game/Item_10943600.h"

class Class_10E993C0
{
public:
    Class_10E993C0(int A);
    virtual void FUN_10c29ab0(FArchive& Ar);

    int Unknown04;
    Class_10943600 Unknown08;
    cIntArray Unknown14;
};

FArchive& FUN_10b052a0(FArchive& Ar, void* V);

// FUNCTION: 0x10C29AB0 ?FUN_10c29ab0@Class_10E993C0@@UAEXAAVFArchive@@@Z
void Class_10E993C0::FUN_10c29ab0(FArchive& Ar)
{
    int Count = Unknown08.Unknown00;
    Ar.Serialize(&Count, 4);
    if (Ar.Unknown14)
        Unknown08.FUN_10da4f50(Count);
    for (int i = 0; i < Count; i++)
        FUN_10b052a0(Ar, &Unknown08.Unknown08[i]);
    int Count2 = Unknown14.Count;
    Ar.Serialize(&Count2, 4);
    if (Ar.Unknown14)
        Unknown14.SetCount(Count2);
    for (int j = 0; j < Count2; j++)
        Ar.Serialize(&Unknown14.Data[j], 4);
}
