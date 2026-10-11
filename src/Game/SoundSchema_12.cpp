// Game/SoundSchema_12.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/SoundSchema.h"

// FUNCTION: 0x10C66570 ?FUN_10c66570@SoundSchema@@UAEXH@Z
void SoundSchema::FUN_10c66570(int Value)
{
    Unknown6C = Value;
    if (Value == 4 || Value == 5)
        Unknown6C = 3;
}
