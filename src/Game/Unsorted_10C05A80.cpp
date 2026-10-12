// Game/Unsorted_10C05A80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10C05A80.h"

float DistanceSquared3D(const Struct_10C05A80* A, const Struct_10C05A80* B);

// FUNCTION: 0x10C05A80 ?DistanceSquared3D@@YAMPBUStruct_10C05A80@@0@Z
float DistanceSquared3D(const Struct_10C05A80* A, const Struct_10C05A80* B)
{
    float X = B->Unknown00 - A->Unknown00;
    float Y = B->Unknown04 - A->Unknown04;
    float Z = B->Unknown08 - A->Unknown08;
    return X * X + Y * Y + Z * Z;
}
