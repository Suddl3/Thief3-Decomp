// Game/State_Flee_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"

float appFrand();

struct Struct_10BE99E0
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

class State_Flee
{
public:
    void RollRandomRange();

    char Unknown00[4];
    Struct_10BE99E0* Unknown04;
    char Unknown08[0x60];
    float m_RandomValue;
};

// FUNCTION: 0x10BE99E0 ?RollRandomRange@State_Flee@@QAEXXZ
void State_Flee::RollRandomRange()
{
    float Min = Unknown04->Unknown08->FUN_10dbd510(0x1005e6)->GetFloat();
    float Max = Unknown04->Unknown08->FUN_10dbd510(0x1005e7)->GetFloat();
    m_RandomValue = Min + (Max - Min) * appFrand();
}
