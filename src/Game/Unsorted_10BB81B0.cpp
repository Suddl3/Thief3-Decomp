// Game/Unsorted_10BB81B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BB81B0.h"
#include "Game/Class_10BB8210.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"

extern float DAT_10eafbdc;

float appFrand();

// FUNCTION: 0x10BB81B0 ?RollInterval@Class_10BB81B0@@QAEXXZ
void Class_10BB81B0::RollInterval()
{
    float Min = Unknown08->FUN_10dbd510(0x1006df)->GetFloat();
    float Max = Unknown08->FUN_10dbd510(0x1006e0)->GetFloat();
    m_Interval = Min + (Max - Min) * appFrand();
}

// FUNCTION: 0x10BB8210 ?IsExpired@Class_10BB8210@@QAEHXZ
int Class_10BB8210::IsExpired()
{
    if (m_Interval <= DAT_10eafbdc)
        return 1;
    return 0;
}
