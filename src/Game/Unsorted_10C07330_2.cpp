// Game/Unsorted_10C07330_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10C074F0.h"
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

// FUNCTION: 0x10C074F0 ?FUN_10c074f0@Class_10C074F0@@QAEXAAVFArchive@@@Z
void Class_10C074F0::FUN_10c074f0(FArchive& Ar)
{
    for (int i = 0; i < 5; i++)
    {
        int Count = Unknown08[i].Count;
        Ar.Virtual1(&Count, 4);
        if (Ar.Unknown14)
            Unknown08[i].SetCount(Count);
        for (int j = 0; j < Count; j++)
            DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown08[i].Data[j]);
    }
    for (int i = 0; i < 5; i++)
        Ar.Virtual1(&Unknown44[i], 2);
}
