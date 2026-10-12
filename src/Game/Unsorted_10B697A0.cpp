// Game/Unsorted_10B697A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10A174E0.h"
#include "Game/Class_10F46DA0.h"

extern const char DAT_10e662b4[];

Class_10A174E0* GetStats();

extern Class_10F46DA0* DAT_10f46da0;

class Class_10B697A0
{
public:
    char Unknown00[0x474];
    int Unknown474;
};

struct Struct_10AA3520
{
    char Unknown00[8];
    Class_10B697A0* Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10B697A0 ?FUN_10b697a0@@YAXXZ
void FUN_10b697a0()
{
    if (DAT_10f35dec->Unknown08->Unknown474 == 0)
    {
        if (GetStats()->Virtual0(DAT_10e662b4) == 1)
            DAT_10f46da0->Virtual5(0x49, DAT_10f35dec->Unknown08, -1, 0);
    }
}
