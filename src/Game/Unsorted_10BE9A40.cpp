// Game/Unsorted_10BE9A40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BE9A40.h"
#include "Game/Class_10DBD510.h"

float appFrand();

double GetTimeSeconds();

struct Struct_10BE9A40
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

// FUNCTION: 0x10BE9A40 ?FUN_10be9a40@Class_10BE9A40@@QAEXXZ
void Class_10BE9A40::FUN_10be9a40()
{
    float Min = Unknown04->Unknown08->FUN_10dbd510(0x100856)->GetFloat();
    float Max = Unknown04->Unknown08->FUN_10dbd510(0x100857)->GetFloat();
    Unknown78 = GetTimeSeconds() + (Min + (Max - Min) * appFrand());
}
