// Game/Unsorted_10B1E150.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include <math.h>
#include "Game/Class_10A18E80.h"
#include "Game/Class_10A18FA0.h"
#include "Game/Config.h"

extern float DAT_10e49684;

extern float DAT_10eafbdc;

class Object_10A18FC0;

Object_10A18FC0* FUN_10a18fc0();

// FUNCTION: 0x10B1E150 ?FUN_10b1e150@@YAHPAVFVector@@0M@Z
UBOOL FUN_10b1e150(FVector* A, FVector* B, float Tol)
{
    FVector VA = *A;
    FVector VB = *B;
    VA.Z = 0.0f;
    VB.Z = 0.0f;
    VA.Normalize();
    VB.Normalize();
    float Dot = VA.X * VB.X + VA.Y * VB.Y + VA.Z * VB.Z;
    return fabs(Dot - DAT_10e49684) < Tol;
}

// FUNCTION: 0x10B1E1E0 ?FUN_10b1e1e0@@YAMXZ
float FUN_10b1e1e0()
{
    FVector V;
    FVector Absolute;
    Absolute.Z = 0.0f;
    Absolute.X = fabs(((Class_10A18E80*)FUN_10a18fc0())->FUN_10a18e80(0));
    Absolute.Y = fabs(((Class_10A18E80*)FUN_10a18fc0())->FUN_10a18e80(1));
    V = Absolute;
    V.Normalize();
    float R = V.Y * Absolute.Y + V.X * Absolute.X;
    if (R > DAT_10e49684)
        R = 1.0f;
    else if (!(R > DAT_10eafbdc))
        return R;
    if (((Class_10A18FA0*)FUN_10a18fc0())->FUN_10a18fa0(4))
    {
        R = 0.75f;
        Config::Instance()->GetFloat("T3Settings", "WalkMultiplier", &R, 0);
    }
    else
    {
        if (!((Class_10A18FA0*)FUN_10a18fc0())->FUN_10a18fa0(3))
            return R;
        R = 0.5f;
        Config::Instance()->GetFloat("T3Settings", "CreepMultiplier", &R, 0);
    }
    return R;
}

// FUNCTION: 0x10B1E2E0 ?FUN_10b1e2e0@@YAMMM@Z
float FUN_10b1e2e0(float A, float B)
{
    FVector V;
    V = FVector(A, B, 0.0f);
    V.Normalize();
    float R = V.Y * B;
    R += V.X * A;
    return (R > DAT_10e49684) ? DAT_10e49684 : R;
}
