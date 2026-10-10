// Game/Class_10E6C4A8_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1096C8D0_Field0C.h"
#include "Game/Class_10E6C4A8.h"

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

class Class_1096C8D0
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
    Class_1096C8D0_Field0C* Unknown0C;
    int Unknown10;
    char Unknown14[0x10];
    int Unknown24;
};

extern Class_1096C8D0* DAT_10f3a1d4;

// FUNCTION: 0x10A89230 ?FUN_10a89230@Class_10E6C4A8@@UAEHXZ
int Class_10E6C4A8::FUN_10a89230()
{
    int Pending;
    if (DAT_10f3a1d4->Unknown04 == 0)
        Pending = DAT_10f3a1d4->Unknown08 < UObject::GObjObjects.ArrayNum;
    else if (DAT_10f3a1d4->Unknown10 == DAT_10f3a1d4->Unknown0C->Unknown1C && DAT_10f3a1d4->Unknown24 == 0)
        Pending = 0;
    else
        Pending = 1;
    return !Pending;
}
