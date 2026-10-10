// Game/Unsorted_10C13170_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1096C8D0_Field0C.h"

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

class Class_10E8C4A4
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int FUN_10c13170();
    Class_1096C8D0* Unknown04;
};

// FUNCTION: 0x10C13170 ?FUN_10c13170@Class_10E8C4A4@@UAEHXZ
int Class_10E8C4A4::FUN_10c13170()
{
    Class_1096C8D0* Object = Unknown04;
    int Pending;
    if (Object->Unknown04 == 0)
        Pending = Object->Unknown08 < UObject::GObjObjects.ArrayNum;
    else if (Object->Unknown10 == Object->Unknown0C->Unknown1C && Object->Unknown24 == 0)
        Pending = 0;
    else
        Pending = 1;
    return !Pending;
}
