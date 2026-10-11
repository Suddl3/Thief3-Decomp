// Game/Unsorted_10B6FCD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10B6FCD0.h"
#include "Game/Class_10D3C2B0.h"

extern float DAT_10e49684;

extern float DAT_10f0591c;

extern float DAT_10eafbdc;

// FUNCTION: 0x10B6FCD0 ?FUN_10b6fcd0@Class_10B6FCD0@@QAEMPAVFVector@@0@Z
float Class_10B6FCD0::FUN_10b6fcd0(FVector* A, FVector* B)
{
    FVector Here = Unknown00;
    FVector Delta;
    float Scale = DAT_10e49684 / DAT_10f0591c;
    float F = Unknown0C.FUN_10d3c2b0();
    Delta.X = A->X - F;
    Delta.Y = A->Y - Here.Y;
    Delta.Z = A->Z - Here.Z;
    *B = Delta;
    float Sum = B->X * B->X + B->Y * B->Y + B->Z * B->Z;
    if (Sum > DAT_10f0591c)
        return DAT_10eafbdc;
    float T = Sum * Scale;
    if (T > DAT_10e49684)
        T = DAT_10e49684;
    return DAT_10e49684 - T;
}
