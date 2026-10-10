// Game/Unsorted_1095B0A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1095B0A0.h"

extern "C" long _time32(long* Time);

// FUNCTION: 0x1095B0A0 ?FUN_1095b0a0@Class_1095B0A0@@QAEMMM@Z
float Class_1095B0A0::FUN_1095b0a0(float A, float B)
{
    Unknown00 = Unknown00 * 214013 + 2531011;
    unsigned int Rand = (((unsigned int)_time32(0) >> 16) ^ (Unknown00 >> 16)) & 0x7fff;
    return A + (float)Rand * (B - A) * 3.0517578e-05f;
}
