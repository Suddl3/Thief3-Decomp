// Game/Unsorted_1095A720.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <string.h>
#include "Game/Class_1095A720.h"

struct Struct_1095A720_Unknown08
{
    char Unknown00[4];
    int* Unknown04;

    int GetLength() const
    {
        if (!Unknown04)
            return 0;
        return Unknown04[-1];
    }
};

// FUNCTION: 0x1095A720 ?FUN_1095a720@Class_1095A720@@QAEHXZ
int Class_1095A720::FUN_1095a720()
{
    if (Unknown0C)
        return strlen(Unknown0C) + 1;
    if (Unknown08)
        return Unknown08->GetLength() + 1;
    return 0;
}
