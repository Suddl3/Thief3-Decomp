// Game/Unsorted_1095B0A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cRandom.h"

extern "C" long _time32(long* Time);

// FUNCTION: 0x1095B0A0 ?RandomFloat@cRandom@@QAEMMM@Z
float cRandom::RandomFloat(float A, float B)
{
    m_Seed = m_Seed * 214013 + 2531011;
    unsigned int Rand = (((unsigned int)_time32(0) >> 16) ^ (m_Seed >> 16)) & 0x7fff;
    return A + (float)Rand * (B - A) * 3.0517578e-05f;
}
