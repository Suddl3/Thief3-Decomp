// Game/cVector3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>
#include "Game/cVector3.h"
#include "Game/IDirect3DDevice8.h"

extern float DAT_10e49684;

// FUNCTION: 0x1091ED80 ?FUN_1091ed80@cVector3@@QAEMXZ
float cVector3::FUN_1091ed80()
{
    float Length = sqrtf(Unknown00 * Unknown00 + Unknown04 * Unknown04 + Unknown08 * Unknown08);
    if (Length < 0.0001f)
        return Length;
    float Scale = DAT_10e49684 / Length;
    Unknown00 *= Scale;
    Unknown04 *= Scale;
    Unknown08 *= Scale;
    return Length;
}
