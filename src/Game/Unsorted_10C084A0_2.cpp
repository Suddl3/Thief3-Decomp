// Game/Unsorted_10C084A0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10C084A0.h"
#include "Game/Class_10C084A0_Unknown18.h"

class FArchive
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* A, int B);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(void* Value);

    char Unknown04[16];
    int Unknown14;
};

class Class_10FF667C
{
public:
    char Unknown00[0x18];
    Class_10C084A0_Unknown18* Unknown18;
};

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10C084A0 ?Serialize@Class_10C084A0@@QAEXAAVFArchive@@@Z
void Class_10C084A0::Serialize(FArchive& Ar)
{
    int Num = Count;
    Ar.Virtual1(&Num, 4);
    if (Ar.Unknown14)
        SetCount(Num);
    for (int i = 0; i < Count; i++)
        DAT_10ff667c->Unknown18->Virtual1(Ar, &Data[i]);
}
