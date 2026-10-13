// Game/Unsorted_10929740_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cPixelAccessor.h"
#include "Game/Class_10E49B08.h"
#include "Game/Class_10E49B28.h"
#include "Game/Struct_10929510.h"
#include "Game/Struct_10929D60.h"

// FUNCTION: 0x109298C0 ?GetLuminance@cPixelAccessor@@UAEXPAUStruct_10929510@@HHPAM@Z
void cPixelAccessor::GetLuminance(Struct_10929510* p1, int p2, int p3, float* p4)
{
    float R, G, B, A;
    Virtual8(p1, &R, &G, &B, &A, p2, p3);
    *p4 = R * 0.3f + G * 0.59f + B * 0.11f;
}
