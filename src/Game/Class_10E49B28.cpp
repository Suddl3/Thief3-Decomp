// Game/Class_10E49B28.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10E49B28.h"
#include "Game/cPixelAccessor.h"
#include "Game/Class_10E49B08.h"
#include "Game/Struct_10929510.h"
#include "Game/Struct_10929D60.h"

typedef unsigned long DWORD;

// FUNCTION: 0x10929C10 ?SetVector@Class_10E49B28@@UAEXHHHPAVFVector@@M@Z
void Class_10E49B28::SetVector(int A, int B, int C, FVector* D, FLOAT E)
{
    FVector Scaled = *D * 127.5f;
    FLOAT Alpha = E * 127.5f;
    Virtual1(A, B, C, (((BYTE)(int)Alpha << 8 | (BYTE)(int)Scaled.Z) << 8 | (BYTE)(int)Scaled.Y) << 8 | (BYTE)(int)Scaled.X);
}

// FUNCTION: 0x10929C90 ?GetVector@Class_10E49B28@@UAEXHHHPAUStruct_10929D60@@@Z
void Class_10E49B28::GetVector(int A, int B, int C, Struct_10929D60* Out)
{
    DWORD Packed;
    Virtual0(A, B, C, &Packed);
    const float Scale = 2.0f / 255.0f;
    Out->Unknown00 = (signed char)Packed * Scale;
    Out->Unknown04 = (signed char)(Packed >> 8) * Scale;
    Out->Unknown08 = (signed char)(Packed >> 16) * Scale;
}
