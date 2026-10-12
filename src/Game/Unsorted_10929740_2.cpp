// Game/Unsorted_10929740_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E49AE0.h"
#include "Game/Class_10E49B08.h"
#include "Game/Class_10E49B28.h"
#include "Game/Struct_10929510.h"
#include "Game/Struct_10929D60.h"

typedef unsigned long DWORD;

// FUNCTION: 0x109298C0 ?GetLuminance@Class_10E49AE0@@UAEXPAUStruct_10929510@@HHPAM@Z
void Class_10E49AE0::GetLuminance(Struct_10929510* p1, int p2, int p3, float* p4)
{
    float R, G, B, A;
    Virtual8(p1, &R, &G, &B, &A, p2, p3);
    *p4 = R * 0.3f + G * 0.59f + B * 0.11f;
}

// FUNCTION: 0x10929B10 ?FUN_10929b10@Class_10E49B08@@UAEXMMMPAM@Z
void Class_10E49B08::FUN_10929b10(float A, float B, float C, float* Out)
{
    float Unused;
    Virtual2(A, B, C, &C, &B, &A, &Unused);
    float Sum = C * 0.3f;
    Sum += B * 0.59f;
    Sum += A * 0.11f;
    *Out = Sum;
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
