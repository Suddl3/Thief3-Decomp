// Game/Unsorted_10A89570.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6C580.h"
#include "Game/Class_10F3A1D8.h"

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

// FUNCTION: 0x10A89960 ?FUN_10a89960@Class_10E6C580@@UAEHXZ
int Class_10E6C580::FUN_10a89960()
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
