// Game/Unsorted_10B1E4C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

struct Struct_10B1EF90_Param
{
    char Unknown00[0x2c];
    FVector Unknown2C;
    char Unknown38[0xc];
    FVector Unknown44;
    FVector Unknown50;
};

bool FUN_10b1e150(FVector* A, FVector* B, float Cos);

// FUNCTION: 0x10B1EF90 ?FUN_10b1ef90@@YAHPAUStruct_10B1EF90_Param@@0@Z
UBOOL FUN_10b1ef90(Struct_10B1EF90_Param* A, Struct_10B1EF90_Param* B)
{
    FVector Delta;
    Delta.Z = 0.0f;
    Delta.X = B->Unknown2C.X - A->Unknown2C.X;
    Delta.Y = B->Unknown2C.Y - A->Unknown2C.Y;
    Delta.Normalize();
    FVector V50 = A->Unknown50;
    V50.Z = 0.0f;
    V50.Normalize();
    FVector V44 = A->Unknown44;
    V44.Z = 0.0f;
    V44.Normalize();
    if (FUN_10b1e150(&Delta, &V50, 0.8f) || FUN_10b1e150(&Delta, &V44, 0.8f))
        return 1;
    return 0;
}
