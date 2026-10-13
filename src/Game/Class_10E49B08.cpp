// Game/Class_10E49B08.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10E49B08.h"
#include "Game/cPixelAccessor.h"
#include "Game/Class_10E49B28.h"
#include "Game/Struct_10929510.h"
#include "Game/Struct_10929D60.h"

// FUNCTION: 0x10929B10 ?GetLuminance@Class_10E49B08@@UAEXMMMPAM@Z
void Class_10E49B08::GetLuminance(float A, float B, float C, float* Out)
{
    float Unused;
    Virtual2(A, B, C, &C, &B, &A, &Unused);
    float Sum = C * 0.3f;
    Sum += B * 0.59f;
    Sum += A * 0.11f;
    *Out = Sum;
}

// FUNCTION: 0x10929B70 ?FUN_10929b70@Class_10E49B08@@UAEXHHHPAVFVector@@M@Z
void Class_10E49B08::FUN_10929b70(int A, int B, int C, FVector* D, FLOAT E)
{
    FVector Scaled = (*D + FVector(1.0f, 1.0f, 1.0f)) * 127.5f;
    DWORD Color = 0xFFFFFFFF;
    Color = (Color << 8) | (BYTE)(int)Scaled.X;
    Color = (Color << 8) | (BYTE)(int)Scaled.Y;
    Color = (Color << 8) | (BYTE)(int)Scaled.Z;
    Virtual1(A, B, C, Color);
}
