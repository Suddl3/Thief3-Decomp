// Game/Unsorted_1095B110.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cRandom.h"
#include "Game/Class_1095B110.h"
#include "Game/Class_1095BC20.h"

extern "C" long _time32(long* Time);

// FUNCTION: 0x1095B110 ?Randomize@Class_1095B110@@QAEXXZ
void Class_1095B110::Randomize()
{
    float Ratio;
    if (Unknown0C)
        Ratio = (float)Unknown0C / Unknown10;
    else
        Ratio = 0.0f;
    cRandom Stamp;
    Stamp.m_Seed = _time32(0);
    Unknown00 = Stamp.RandomFloat(0, Ratio);
}

// FUNCTION: 0x1095BC20 ?Init@Class_1095BC20@@QAEPAV1@XZ
Class_1095BC20* Class_1095BC20::Init()
{
    Unknown00 = 1;
    Unknown04 = 0;
    Unknown08 = 0;
    return this;
}
