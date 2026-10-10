// Game/Unsorted_10A2C0D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

struct Struct_10A2C130
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10A2C130
{
public:
    Class_10A2C130* FUN_10a2c130(const Struct_10A2C130& A, const Struct_10A2C130& B, const Struct_10A2C130& C);

    Struct_10A2C130 Unknown00;
    Struct_10A2C130 Unknown0C;
    Struct_10A2C130 Unknown18;
};

// FUNCTION: 0x10A2C0D0 ?FUN_10a2c0d0@@YA?AVFVector@@PBV1@0@Z
FVector FUN_10a2c0d0(const FVector* A, const FVector* B)
{
    FVector Result;
    Result.X = A->Y * B->Z - A->Z * B->Y;
    Result.Y = A->Z * B->X - A->X * B->Z;
    Result.Z = A->X * B->Y - A->Y * B->X;
    return Result;
}

// FUNCTION: 0x10A2C130 ?FUN_10a2c130@Class_10A2C130@@QAEPAV1@ABUStruct_10A2C130@@00@Z
Class_10A2C130* Class_10A2C130::FUN_10a2c130(const Struct_10A2C130& A, const Struct_10A2C130& B,
                                             const Struct_10A2C130& C)
{
    Unknown00 = A;
    Unknown0C = B;
    Unknown18 = C;
    return this;
}
