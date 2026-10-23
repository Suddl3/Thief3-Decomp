// Game/Unsorted_10C1F550.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/Class_10C1F600.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10FF667C.h"

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10C1F600 ?FUN_10c1f600@Class_10C1F600@@QAEMXZ
float Class_10C1F600::FUN_10c1f600()
{
    float Value = 0.0f;
    if (!((Class_1098E330*)Unknown04->FUN_10c7d570())->GetPropertyValue(0x40100302, (int*)&Value))
        return DAT_10ff667c->Unknown9C;
    return Value * DAT_10ff667c->Unknown9C;
}
