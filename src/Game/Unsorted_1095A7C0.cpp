// Game/Unsorted_1095A7C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <string.h>
#include "Game/Class_1095A8D0.h"

extern const char DAT_10e47660[];

struct Struct_1095A8D0_Unknown08
{
    char Unknown00[4];
    const char* Unknown04;
};

// FUNCTION: 0x1095A8D0 ?FUN_1095a8d0@Class_1095A8D0@@QAEPBDXZ
const char* Class_1095A8D0::FUN_1095a8d0()
{
    if (Unknown0C && strlen(Unknown0C))
        return Unknown0C;
    if (Unknown08)
    {
        if (Unknown08->Unknown04)
            return Unknown08->Unknown04;
        return DAT_10e47660;
    }
    return 0;
}

// FUNCTION: 0x1095AF30 ?FUN_1095af30@@YAHH@Z
int FUN_1095af30(int Value)
{
    switch (Value)
    {
    case 2:
        return 2;
    case 4:
        return 1;
    case 1:
        return 3;
    case 7:
        return 4;
    case 6:
        return 5;
    }
    return 0;
}
