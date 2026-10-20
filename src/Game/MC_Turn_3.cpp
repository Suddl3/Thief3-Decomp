// Game/MC_Turn_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/FArchive.h"
#include "Game/Class_10C271A0.h"
#include "Game/MC_Turn.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* V);

void FUN_10c11ff0(FArchive& Ar, int* Value);

// FUNCTION: 0x10C36680 ?Serialize@MC_Turn@@UAEXAAVFArchive@@@Z
void MC_Turn::Serialize(FArchive& Ar)
{
    FUN_10c271a0(Ar);
    Ar.Serialize(&Unknown4C, 1);
    FUN_10b052a0(Ar, &Unknown50);
    Unknown5C.Virtual0(Ar);
    Ar.Serialize(&Unknown64, 1);
    Ar.Serialize(&Unknown68, 4);
    FUN_10c11ff0(Ar, &Unknown6C);
    Ar.Serialize(&Unknown70, 1);
    Ar.Serialize(&Unknown74, 4);
}
