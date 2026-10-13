// Game/Class_10A88D00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>
#include "Core/Core.h"
#include "Game/Class_10A88910.h"
#include "Game/Class_10A88970.h"
#include "Game/Class_10A88D00.h"
#include "Game/Class_10A88880.h"

extern float DAT_10e49684;

// FUNCTION: 0x10A889E0 ?ClampedLength2D@Class_10A88D00@@QAEMMM@Z
float Class_10A88D00::ClampedLength2D(float A, float B)
{
    FVector V;
    FVector Absolute(fabs(A), fabs(B), 0.0f);
    V = Absolute;
    V.Normalize();
    float R = Absolute.Y * V.Y;
    R += Absolute.X * V.X;
    return (R > DAT_10e49684) ? DAT_10e49684 : R;
}

// FUNCTION: 0x10A88D00 ?FUN_10a88d00@Class_10A88D00@@QAEMPAVFVector@@HH@Z
float Class_10A88D00::FUN_10a88d00(FVector* A, int B, int C)
{
    float Scale = ClampedLength2D(A->X, A->Y);
    A->Normalize();
    return FUN_10a88ad0(B, A, C) * Scale;
}
