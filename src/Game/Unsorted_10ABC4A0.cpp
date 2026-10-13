// Game/Unsorted_10ABC4A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <math.h>
#include "Game/Struct_10B38DE0_Vec.h"

// FUNCTION: 0x10ABC4A0 ?FUN_10abc4a0@@YAMMPBUStruct_10B38DE0_Vec@@@Z
float FUN_10abc4a0(float A, const Struct_10B38DE0_Vec* V)
{
    float Length = sqrtf(V->Unknown00 * V->Unknown00 + V->Unknown04 * V->Unknown04 + V->Unknown08 * V->Unknown08);
    Struct_10B38DE0_Vec D;
    D.Unknown00 = -V->Unknown00;
    D.Unknown04 = -V->Unknown04;
    D.Unknown08 = -V->Unknown08;
    float Speed = fabsf(A) * Length;
    Length = sqrtf(Speed + Speed) / Length;
    float SX = D.Unknown00 * Length;
    float SY = D.Unknown04 * Length;
    float SZ = D.Unknown08 * Length;
    return sqrtf(SZ * SZ + SY * SY + SX * SX);
}
