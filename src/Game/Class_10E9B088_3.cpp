// Game/Class_10E9B088_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/FArchive.h"
#include "Game/Class_10E9B088.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

class UObject;

// FUNCTION: 0x10C3DA10 ?FUN_10c3da10@Class_10E9B088@@QAEXH@Z
void Class_10E9B088::FUN_10c3da10(int A)
{
    FArchive& Ar = *(FArchive*)A;
    Ar.Serialize(&Unknown04, 4);
    Ar.Serialize(&Unknown08, 4);
    Ar.Serialize(&Unknown0C, 4);
    Ar.Serialize(&Unknown10, 4);
    Ar.Serialize(&Unknown14, 4);
    Ar.Serialize(&Unknown18, 4);
    Ar.Serialize(&Unknown20, 4);
    Ar.Serialize(&Unknown24, 4);
    Ar.Serialize(&Unknown28, 1);
    Ar.Serialize(&Unknown29, 1);
    Ar.Serialize(&Unknown2A, 1);
    Ar.Serialize(&Unknown2B, 1);
    Virtual26(&Unknown2C, Ar);
    Ar.Virtual7(&Unknown30);
    Ar.Virtual6(&Unknown34);
    FUN_10b052a0(Ar, &Unknown38);
    if (Ar.Unknown0C >= 0x5b)
        Ar.Serialize(&Unknown1C, 4);
}
