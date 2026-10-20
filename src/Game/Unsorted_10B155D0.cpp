// Game/Unsorted_10B155D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B155D0.h"

// FUNCTION: 0x10B155D0 ?FUN_10b155d0@Class_10B155D0@@QAE_NHH@Z
bool Class_10B155D0::FUN_10b155d0(int Key, int Flag)
{
    if ((unsigned char)Flag)
    {
        if (Key == 0xD || Key == 0x1B || Key == 0x20)
            return true;
        return false;
    }
    if (Key == 0x1B)
        return true;
    return false;
}
