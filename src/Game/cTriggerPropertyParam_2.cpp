// Game/cTriggerPropertyParam_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B0D530.h"
#include "Game/Class_10E6BF84.h"
#include "Game/cTriggerPropertyParam.h"
#include "Game/Class_10F3A1D8.h"

Class_10905A90_Member* GetAllocator();

extern Class_10F3A1D8* DAT_10f3a1d8;

// FUNCTION: 0x10A8A030 ??1cTriggerPropertyParam@@UAE@XZ
cTriggerPropertyParam::~cTriggerPropertyParam()
{
    if (DAT_10f3a1d8)
    {
        delete DAT_10f3a1d8;
        DAT_10f3a1d8 = 0;
    }
    if (Unknown0C)
    {
        int* Obj = Unknown0C - 1;
        GetAllocator()->Virtual5(Obj);
        Unknown0C = 0;
    }
}

// FUNCTION: 0x10A8A0C0 ??_GcTriggerPropertyParam@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A8A030's definition in this unit.
