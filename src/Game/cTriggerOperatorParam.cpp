// Game/cTriggerOperatorParam.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cTriggerOperatorParam.h"
#include "Game/cTriggerClassParam.h"
#include "Game/Class_10E6C4A8_Member.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_1090A780.h"

void ReadString(void* Reader, int* Out);

extern Class_1090A780 DAT_10f3a1f8[];

extern const char DAT_10e6c7ec[];

// FUNCTION: 0x10A8D2D0 ?TestRelation@cTriggerOperatorParam@@UAEHHPAV1@@Z
int cTriggerOperatorParam::TestRelation(int A, cTriggerOperatorParam* B)
{
    switch (A)
    {
    case 1:
        return B->Unknown04 == Unknown04;
    case 6:
        return B->Unknown04 != Unknown04;
    }
    return 0;
}

// FUNCTION: 0x10A8D330 ?FUN_10a8d330@cTriggerOperatorParam@@UAE_NXZ
bool cTriggerOperatorParam::FUN_10a8d330()
{
    return Unknown08 >= 4;
}

// FUNCTION: 0x10A8D3C0 ?ReadValue@cTriggerOperatorParam@@UAE_NHPAX@Z
bool cTriggerOperatorParam::ReadValue(int A, void* Reader)
{
    cString Text;
    ReadString(Reader, (int*)&Text);
    Virtual4(&Text);
    return true;
}

// FUNCTION: 0x10A8D490 ?GetText@cTriggerOperatorParam@@UAE?AVcString@@XZ
cString cTriggerOperatorParam::GetText()
{
    if (Unknown04 >= 0 && Unknown04 < 4)
        return cString(DAT_10f3a1f8[Unknown04]);
    return cString(DAT_10e6c7ec);
}

// FUNCTION: 0x10A8D570 ?FUN_10a8d570@cTriggerOperatorParam@@UAE?AVClass_1090A780@@XZ
Class_1090A780 cTriggerOperatorParam::FUN_10a8d570()
{
    return Class_1090A780(DAT_10f3a1f8[Unknown08]);
}
