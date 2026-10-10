// Game/Unsorted_10A89070_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1096C8D0.h"
#include "Game/Class_10B0D530.h"
#include "Game/Class_10E6BF84.h"
#include "Game/Class_10E6C4A8.h"

extern Class_1096C8D0* DAT_10f3a1d4;

// FUNCTION: 0x10A89500 ??1Class_10E6C4A8@@UAE@XZ
Class_10E6C4A8::~Class_10E6C4A8()
{
    if (DAT_10f3a1d4)
    {
        delete DAT_10f3a1d4;
        DAT_10f3a1d4 = 0;
    }
}
