// Game/Unsorted_10B0F240.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B0F7A0.h"

class Class_10B0F7A0;

struct Struct_10B0F7A0
{
    char Unknown00[0xE8];
    Class_10B0F7A0* UnknownE8;
};

// FUNCTION: 0x10B0F7A0 ?FUN_10b0f7a0@Class_10B0F7A0@@QAEHXZ
int Class_10B0F7A0::FUN_10b0f7a0()
{
    if (Unknown2C == 0)
        Unknown2C = Unknown24->UnknownE8->Unknown2C;
    return Unknown2C;
}
