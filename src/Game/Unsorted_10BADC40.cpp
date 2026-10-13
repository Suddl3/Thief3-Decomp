// Game/Unsorted_10BADC40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10A68D20.h"
#include "Game/Struct_10BA91E0.h"

struct Struct_10BADCE0
{
    FVector Unknown00;
    char Unknown0C[0xC];
    Struct_10BA91E0* Unknown18;
    Class_10A68D20 Unknown1C;
};

FVector GetPointAlongRotation(const FRotator& Rotation, const FVector& Origin, float Dist);

float Distance(const Struct_10BA91E0* A, const Struct_10BA91E0* B);

void FUN_10a68cf0(Class_10A68D20* This, int A, int B, int C);

void FUN_10a68d50(Class_10A68D20* This, int A, int B, int C, int D);

extern float DAT_10e8d7c8;

// FUNCTION: 0x10BADC40 ?FUN_10badc40@@YAXPAUStruct_10BADCE0@@ABVFRotator@@MHH@Z
void FUN_10badc40(Struct_10BADCE0* Owner, const FRotator& Rotation, float Scale, int Name, int Out)
{
    FVector Point = GetPointAlongRotation(Rotation, Owner->Unknown00, Scale);
    FUN_10a68cf0(&Owner->Unknown1C, (int)Owner, (int)&Point, Out);
    FVector Point2 = GetPointAlongRotation(Rotation, Owner->Unknown00, Scale * 0.25f);
    if (Owner->Unknown18)
    {
        if (Distance(Owner->Unknown18, reinterpret_cast<const Struct_10BA91E0*>(&Point2)) < DAT_10e8d7c8)
        {
            Scale = *(float*)Out;
            FUN_10a68d50(&Owner->Unknown1C, Name, (int)&Point2, (int)&Scale, 0);
        }
    }
}
