// Game/cTriggerPropertyParam.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cTriggerPropertyParam.h"
#include "Game/Class_10F3A1D8.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B0D530.h"
#include "Game/Class_10E6BF84.h"

template <class T> class TArray
{
public:
    T* Data;
    int ArrayNum;
    int ArrayMax;
};

class UObject
{
public:
    static TArray<UObject*> GObjObjects;
};

class Class_10F3A1D8_Field0C
{
public:
    char Unknown00[0x1C];
    int Unknown1C;
};

extern Class_10F3A1D8* DAT_10f3a1d8;

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10A89960 ?IsDone@cTriggerPropertyParam@@UAEHXZ
int cTriggerPropertyParam::IsDone()
{
    int Pending;
    if (DAT_10f3a1d8->Unknown04 == 0)
        Pending = DAT_10f3a1d8->Unknown08 < UObject::GObjObjects.ArrayNum;
    else if (DAT_10f3a1d8->Unknown10 == DAT_10f3a1d8->Unknown0C->Unknown1C && DAT_10f3a1d8->Unknown24 == 0)
        Pending = 0;
    else
        Pending = 1;
    return !Pending;
}

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
