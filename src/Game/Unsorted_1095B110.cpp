// Game/Unsorted_1095B110.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1095B0A0.h"
#include "Game/Class_1095B110.h"
#include "Game/Class_1095BC20.h"

extern "C" long _time32(long* Time);

// FUNCTION: 0x1095B110 ?FUN_1095b110@Class_1095B110@@QAEXXZ
void Class_1095B110::FUN_1095b110()
{
    float Ratio;
    if (Unknown0C)
        Ratio = (float)Unknown0C / Unknown10;
    else
        Ratio = 0.0f;
    Class_1095B0A0 Stamp;
    Stamp.Unknown00 = _time32(0);
    Unknown00 = Stamp.FUN_1095b0a0(0, Ratio);
}

// FUNCTION: 0x1095BC20 ?FUN_1095bc20@Class_1095BC20@@QAEPAV1@XZ
Class_1095BC20* Class_1095BC20::FUN_1095bc20()
{
    Unknown00 = 1;
    Unknown04 = 0;
    Unknown08 = 0;
    return this;
}
