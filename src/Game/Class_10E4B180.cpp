// Game/Class_10E4B180.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E4B180.h"
#include "Game/Class_10E4B180_Unknown70.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10AF4B90.h"
#include "Game/Class_10D9B090.h"
#include "Game/Class_10E4B180_Unknown7C.h"
#include "Game/Struct_10B7C030_Param.h"
#include "Game/Class_10B7ECC0.h"
#include "Game/Allocator_10FFA700.h"
#include "Core/Core.h"
#include "Game/Class_10B7C330.h"
#include "Game/Struct_10B7C170.h"

Class_10905A90_Member* GetAllocator();

Class_10D9B090* FUN_10d9dcb0();

class Class_10B8AC90;

class Class_10D9B090;

Class_10D9B090* __stdcall FUN_10d9dcb0(Class_10B8AC90* Obj, int A);

// FUNCTION: 0x10B7C030 ?DestroyPhysicsObject@Class_10E4B180@@UAEXPAUStruct_10B7C030_Param@@@Z
void Class_10E4B180::DestroyPhysicsObject(Struct_10B7C030_Param* A)
{
    GetAllocator()->Virtual8(0, 0);
    if (A && A->UnknownB0)
        FUN_10d9dcb0()->FUN_10d9e5e0(A->UnknownB0);
    GetAllocator()->Virtual9();
}

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

// FUNCTION: 0x10B7C670 ?FUN_10b7c670@Class_10E4B180@@UAEXH@Z
void Class_10E4B180::FUN_10b7c670(int Param)
{
    for (int i = 0; i < Unknown68; i++)
        Unknown70[i]->Virtual3(Param);
}

// FUNCTION: 0x10B7C6A0 ?FUN_10b7c6a0@Class_10E4B180@@UAEXH@Z
void Class_10E4B180::FUN_10b7c6a0(int A)
{
    for (int i = 0; i < Unknown74; i++)
        Unknown7C[i]->Virtual4(A);
}

// FUNCTION: 0x10B7C6D0 ?FUN_10b7c6d0@Class_10E4B180@@UAEXHPAVClass_10B8AC90@@H@Z
void Class_10E4B180::FUN_10b7c6d0(int A, Class_10B8AC90* B, int C)
{
    for (int i = 0; i < Unknown80; i++)
    {
        Class_10E4B180_Unknown70* Item = Unknown88[i];
        Item->Virtual6(FUN_10d9dcb0(B, C));
    }
}

// FUNCTION: 0x10B7C720 ?FUN_10b7c720@Class_10E4B180@@UAEXPAVClass_10B8AC90@@H@Z
void Class_10E4B180::FUN_10b7c720(Class_10B8AC90* A, int B)
{
    for (int i = 0; i < Unknown8C; i++)
    {
        Class_10E4B180_Unknown70* Item = Unknown94[i];
        Item->Virtual7(FUN_10d9dcb0(A, B));
    }
}
