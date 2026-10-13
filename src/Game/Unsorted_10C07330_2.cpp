// Game/Unsorted_10C07330_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10C074F0.h"
#include "Game/Class_10C084A0_Unknown18.h"
#include "Game/FArchive.h"

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
        Ar.Serialize(&Count, 4);
        if (Ar.Unknown14)
            Unknown08[i].SetCount(Count);
        for (int j = 0; j < Count; j++)
            DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown08[i].Data[j]);
    }
    for (int i = 0; i < 5; i++)
        Ar.Serialize(&Unknown44[i], 2);
}
