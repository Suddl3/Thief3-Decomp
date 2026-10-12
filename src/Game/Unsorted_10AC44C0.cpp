// Game/Unsorted_10AC44C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_10AC47F0.h"
#include "Game/Class_10AC4920.h"
#include "Game/cCameraModeHandler.h"

// FUNCTION: 0x10AC47F0 ?CopyFrom@Class_10AC47F0@@QAEPAV1@ABV1@@Z
Class_10AC47F0* Class_10AC47F0::CopyFrom(const Class_10AC47F0& Other)
{
    Unknown00 = Other.Unknown00;
    Unknown04 = Other.Unknown04;
    Unknown08 = Other.Unknown08;
    Unknown0C = Other.Unknown0C;
    Unknown10 = Other.Unknown10;
    Unknown14 = Other.Unknown14;
    Unknown18 = Other.Unknown18;
    Unknown1C = Other.Unknown1C;
    Unknown20 = Other.Unknown20;
    Unknown24 = Other.Unknown24;
    Unknown28 = Other.Unknown28;
    Unknown2C = Other.Unknown2C;
    Unknown30 = Other.Unknown30;
    Unknown34 = Other.Unknown34;
    Unknown38 = Other.Unknown38;
    return this;
}

// FUNCTION: 0x10AC4920 ?Free@Class_10AC4920@@QAEXXZ
void Class_10AC4920::Free()
{
    FUN_10ac44c0(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10AC5C10 ?FUN_10ac5c10@cCameraModeHandler@@UAE_NXZ
bool cCameraModeHandler::FUN_10ac5c10()
{
    return Unknownd0 != 0;
}
