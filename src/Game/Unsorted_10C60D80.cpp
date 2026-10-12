// Game/Unsorted_10C60D80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C60ED0.h"
#include "Game/Class_10C60F70.h"
#include "Game/cResSound.h"

int FUN_10c7fcb0();

// FUNCTION: 0x10C60ED0 ?FUN_10c60ed0@Class_10C60ED0@@QAE_NXZ
bool Class_10C60ED0::FUN_10c60ed0()
{
    Virtual9();
    return Unknown11C;
}

// FUNCTION: 0x10C60F70 ?FUN_10c60f70@Class_10C60F70@@QAEHXZ
int Class_10C60F70::FUN_10c60f70()
{
    if (Unknown100 == 0)
    {
        if (Unknown114)
            return 0x10000;
        return 0;
    }
    if (Unknown114)
        return 0x10000;
    return FUN_10c7fcb0();
}

// FUNCTION: 0x10C60FF0 ?FUN_10c60ff0@cResSound@@UAE_NXZ
bool cResSound::FUN_10c60ff0()
{
    return Unknown11E == 0;
}
