// Game/Unsorted_10C640E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C54970.h"
#include "Game/Class_10C562C0.h"
#include "Game/Class_10C647F0.h"
#include "Game/Struct_10C647F0_Vec.h"

class Object_10AB5B20
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual Struct_10C647F0_Vec* Virtual3();
};

class Class_10AB5B20
{
public:
    Class_10AB5B20(const Class_10AB5B20& Other)
    {
        Unknown00 = Other.Unknown00;
        if (Unknown00)
            Unknown00->Virtual1();
    }
    ~Class_10AB5B20()
    {
        if (Unknown00)
            Unknown00->Virtual2();
    }
    Class_10AB5B20()
    {
        Unknown00 = 0;
    }
    Class_10AB5B20(Object_10AB5B20* P)
    {
        Unknown00 = P;
        if (Unknown00)
            Unknown00->Virtual1();
    }

    Class_10AB5B20 FUN_10ab5b20();
    bool FUN_10ab5b00(const Class_10AB5B20& Other);

    Object_10AB5B20* Unknown00;
};

Class_10C562C0* FUN_10c562c0();

class Class_10C647F0_Unknown08
{
public:
    virtual void Virtual0();
    virtual bool Virtual1();
};

float FUN_10d4e270(const Struct_10C647F0_Vec& V);

// FUNCTION: 0x10C647F0 ?FUN_10c647f0@Class_10C647F0@@QAEXH@Z
void Class_10C647F0::FUN_10c647f0(int Param)
{
    if (Unknown08->Virtual1())
    {
        Unknown10 = Param + 10;
        return;
    }
    float Dist = FUN_10d4e270(Unknown20 - *FUN_10c562c0()->FUN_10c54970().Unknown00->Virtual3());
    float Scaled = Dist * 0.0010416667f;
    Unknown10 = Scaled > 5.0f ? Param + 5 : (int)(Param + Scaled);
}
