// Game/Unsorted_10928400.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

// FUNCTION: 0x10928AA0 ?NormalToColor@@YAIABVFVector@@@Z
unsigned int NormalToColor(const FVector& V)
{
    FVector N = (V + FVector(1.0f, 1.0f, 1.0f)) * 127.5f;
    unsigned int Color = 0xFFFFFFFF;
    Color = (Color << 8) | (unsigned char)N.X;
    Color = (Color << 8) | (unsigned char)N.Y;
    Color = (Color << 8) | (unsigned char)N.Z;
    return Color;
}
