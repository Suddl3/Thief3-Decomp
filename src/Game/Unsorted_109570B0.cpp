// Game/Unsorted_109570B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10957D20.h"
#include "Game/Class_1095AFD0.h"
#include "Core/Core.h"

void FUN_10957be0(float* Out, float* A, float* B);

// FUNCTION: 0x10957150 ?FUN_10957150@@YAXPAVFVector@@@Z
void FUN_10957150(FVector* Value)
{
    if (Value->X < -359.0f)
        Value->X += 360.0f;
    if (Value->X > 359.0f)
        Value->X -= 360.0f;
    if (Value->Y < -359.0f)
        Value->Y += 360.0f;
    if (Value->Y > 359.0f)
        Value->Y -= 360.0f;
    if (Value->Z < -359.0f)
        Value->Z += 360.0f;
    if (Value->Z > 359.0f)
        Value->Z -= 360.0f;
}

// FUNCTION: 0x10957BE0 ?FUN_10957be0@@YAXPAM00@Z
void FUN_10957be0(float* Out, float* A, float* B)
{
    float X = B[0];
    float Z = B[2];
    float Y = B[1];
    if (A[0] < X)
        X = A[0];
    if (A[1] < Y)
        Y = A[1];
    if (A[2] < Z)
        Z = A[2];
    Out[0] = X;
    Out[1] = Y;
    Out[2] = Z;
}

// FUNCTION: 0x10957C50 ?FUN_10957c50@@YAXPAM00@Z
void FUN_10957c50(float* Out, float* A, float* B)
{
    float X = B[0];
    float Z = B[2];
    float Y = B[1];
    if (A[0] > X)
        X = A[0];
    if (A[1] > Y)
        Y = A[1];
    if (Z < A[2])
        Z = A[2];
    Out[0] = X;
    Out[1] = Y;
    Out[2] = Z;
}

// FUNCTION: 0x10957D20 ?FUN_10957d20@Class_10957D20@@QAEPAV1@XZ
Class_10957D20* Class_10957D20::FUN_10957d20()
{
    Unknown3c = 0;
    Unknown38 = 0;
    Unknown34 = 0;
    return this;
}

// FUNCTION: 0x1095AFD0 ?FUN_1095afd0@Class_1095AFD0@@QAEPAV1@XZ
Class_1095AFD0* Class_1095AFD0::FUN_1095afd0()
{
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0c = 0;
    return this;
}
