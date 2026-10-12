// Game/Unsorted_10BE4030.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BE4030.h"
#include "Game/Class_10DBD510.h"

float appFrand();

double GetTimeSeconds();

struct Struct_10BE4030
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

// FUNCTION: 0x10BE4030 ?StartRandomTimer@Class_10BE4030@@QAEXXZ
void Class_10BE4030::StartRandomTimer()
{
    float Min = Unknown04->Unknown08->FUN_10dbd510(0x10024a)->GetFloat();
    float Max = Unknown04->Unknown08->FUN_10dbd510(0x10024b)->GetFloat();
    float Value = Min + (Max - Min) * appFrand();
    Unknown40 = GetTimeSeconds() + Value;
}
