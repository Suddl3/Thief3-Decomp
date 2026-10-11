// Game/Unsorted_10A8D330_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cTriggerClassParam.h"
#include "Game/Class_10E6C4A8_Member.h"
#include "Game/cTriggerOperatorParam.h"

// FUNCTION: 0x10A8D330 ?FUN_10a8d330@cTriggerOperatorParam@@UAE_NXZ
bool cTriggerOperatorParam::FUN_10a8d330()
{
    return Unknown08 >= 4;
}

// FUNCTION: 0x10A8D340 ?CopyFrom@cTriggerClassParam@@UAEXPBV1@@Z
void cTriggerClassParam::CopyFrom(const cTriggerClassParam* p1)
{
    Unknown04 = p1->Unknown04;
}
