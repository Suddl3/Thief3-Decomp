// Game/Class_10E8C4A4_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10E8C4A4_Member.h"

template <class T> class TArray
{
public:
    T& operator()(int i) { return Data[i]; }

    T* Data;
    int ArrayNum;
    int ArrayMax;
};

class UObject
{
public:
    static TArray<UObject*> GObjObjects;
};

struct Struct_10C131D0
{
    char Unknown00[8];
    Class_10E8C4A4_Member* Unknown08;
};

class Class_1096C8D0
{
public:
    char Unknown00[4];
    int Unknown04;
    int Unknown08;
    char Unknown0C[4];
    Struct_10C131D0* Unknown10;
};

class Class_10E8C4A4
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual Class_109081E0 FUN_10c12cc0();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual Class_109081E0 FUN_10c131d0();
    virtual bool FUN_10c129b0();

    Class_1096C8D0* Unknown04;
    Class_10E8C4A4_Member* Unknown08;
};

// FUNCTION: 0x10C131D0 ?FUN_10c131d0@Class_10E8C4A4@@UAE?AVClass_109081E0@@XZ
Class_109081E0 Class_10E8C4A4::FUN_10c131d0()
{
    Class_1096C8D0* Holder = Unknown04;
    Class_10E8C4A4_Member* Obj;
    if (Holder->Unknown04 == 0)
        Obj = (Class_10E8C4A4_Member*)UObject::GObjObjects(Holder->Unknown08);
    else
        Obj = Holder->Unknown10->Unknown08;
    return Obj->Virtual25();
}
