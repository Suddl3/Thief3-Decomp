// Game/Unsorted_10B7C170.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10B7C330.h"
#include "Game/Class_10D9B090.h"
#include "Game/Class_10E4B180.h"
#include "Game/Struct_10B7C170.h"

struct Struct_10B7C030_Param;

Class_10D9B090* FUN_10d9dcb0();

// FUNCTION: 0x10B7C170 ?Trace@Class_10E4B180@@UAEHHHPAVFVector@@@Z
int Class_10E4B180::Trace(int A, int B, FVector* Out)
{
    Struct_10B7C170 Hit;
    Hit.Unknown00.X = 0.0f;
    Hit.Unknown00.Y = 0.0f;
    Hit.Unknown00.Z = 0.0f;
    Hit.Unknown0C.X = 0.0f;
    Hit.Unknown0C.Y = 0.0f;
    Hit.Unknown0C.Z = 0.0f;
    Hit.Unknown18 = 0.0f;
    Hit.Unknown1C = 0.0f;
    Hit.Unknown20 = -1;
    Hit.Unknown24 = -1;
    int Result = FUN_10d9dcb0()->FUN_10d9d640(A, B, 3, &Hit, 0);
    *Out = Hit.Unknown00;
    return Result;
}

// FUNCTION: 0x10B7C330 ?FUN_10b7c330@Class_10B7C330@@QAEXABV1@@Z
void Class_10B7C330::FUN_10b7c330(const Class_10B7C330& Other)
{
    Unknown00 = Other.Unknown00;
    Unknown04 = Other.Unknown04;
    Unknown08 = Other.Unknown08;
    Unknown0C = Other.Unknown0C;
    Unknown10 = Other.Unknown10;
    Unknown14 = Other.Unknown14;
    Unknown18 = Other.Unknown18;
    Unknown1C = Other.Unknown1C;
    Unknown20 = Other.Unknown20;
    Unknown24 = Other.Unknown24;
    Unknown28 = Other.Unknown28;
    Unknown2C = Other.Unknown2C;
}
