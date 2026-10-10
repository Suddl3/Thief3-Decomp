// Game/Unsorted_10BB81B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BB81B0.h"
#include "Game/Class_10BB8210.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"

extern float DAT_10eafbdc;

float appFrand();

// FUNCTION: 0x10BB81B0 ?FUN_10bb81b0@Class_10BB81B0@@QAEXXZ
void Class_10BB81B0::FUN_10bb81b0()
{
    float Min = Unknown08->FUN_10dbd510(0x1006df)->FUN_10bbdb40();
    float Max = Unknown08->FUN_10dbd510(0x1006e0)->FUN_10bbdb40();
    Unknown2BC = Min + (Max - Min) * appFrand();
}

// FUNCTION: 0x10BB8210 ?FUN_10bb8210@Class_10BB8210@@QAEHXZ
int Class_10BB8210::FUN_10bb8210()
{
    if (Unknown2BC <= DAT_10eafbdc)
        return 1;
    return 0;
}
