// Game/Unsorted_10919B90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10919C40.h"
#include "Game/Class_1091DEE0.h"

extern Class_1091DEE0* DAT_10f2c928;

extern float DAT_10e49684;

struct Struct_10919C40_A
{
    char Unknown00[0x1C];
    int Unknown1C;
};

struct Struct_10919C40_B
{
    char Unknown00[4];
    float Unknown04;
    char Unknown08[4];
    float Unknown0C;
};

// FUNCTION: 0x10919C40 ?FUN_10919c40@Class_10919C40@@QAEMH@Z
float Class_10919C40::FUN_10919c40(int A)
{
    float Result = DAT_10e49684;
    if (Unknown2C)
    {
        if (A & 8)
            return (int)((Unknown0C->Unknown0C - Unknown0C->Unknown04) * Unknown04->Unknown1C * Unknown10);
        Result = (Unknown0C->Unknown0C - Unknown0C->Unknown04) * Unknown04->Unknown1C * DAT_10f2c928->Unknown28 * Unknown10;
    }
    return (int)Result;
}
