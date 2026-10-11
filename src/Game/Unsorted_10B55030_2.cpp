// Game/Unsorted_10B55030_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B3AC90.h"
#include "Game/Static_10B3AC60.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Object_10B55450.h"

struct Info_10B55450
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

Static_10B3AC60* FUN_10b3ac60();

// FUNCTION: 0x10B55450 ?FUN_10b55450@@YAHXZ
int FUN_10b55450()
{
    Info_10B55450 Info;
    Info.Unknown04 = 16.0f;
    Info.Unknown00 = 16.0f;
    DAT_10f35dec->UnknownB0->Virtual2(FUN_10b3ac60()->FUN_10b3ac90(), &Info);
    return (int)Info.Unknown00;
}
