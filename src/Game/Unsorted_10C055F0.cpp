// Game/Unsorted_10C055F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

// FUNCTION: 0x10C055F0 ?RotateYaw90@@YA?AVFVector@@PBV1@@Z
FVector RotateYaw90(const FVector* V)
{
    return FVector(-V->Y, V->X, V->Z);
}
