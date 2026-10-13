// Game/Unsorted_10AC1530.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"

struct Struct_10AA3520
{
    char Unknown00[8];
    Class_1098E330* Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10AC1610 ?GetMaximum@@YAMXZ
float GetMaximum()
{
    float Value = 75.0f;
    if (DAT_10f35dec->Unknown08)
        DAT_10f35dec->Unknown08->FUN_1098e330(0x100534, (int*)&Value);
    return Value;
}
