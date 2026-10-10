// Game/Unsorted_10C4CD60_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C4D140.h"
#include "Game/Class_10E9BB4C.h"

class Class_10C4B2A0
{
public:
    char Unknown00[0x80];
    Class_10C4D140 Unknown80;
};

Class_10C4B2A0* FUN_10c4c2d0();

class Class_10E9BB4C_Arg
{
public:
    virtual ~Class_10E9BB4C_Arg();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5();
};

// FUNCTION: 0x10C4D1E0 ?FUN_10c4d1e0@Class_10E9BB4C@@UAEXPAVClass_10E9BB4C_Arg@@@Z
void Class_10E9BB4C::FUN_10c4d1e0(Class_10E9BB4C_Arg* Param)
{
    if (!Unknown04)
    {
        if (Param->Virtual5() != -1)
        {
            Class_10C4B2A0* Owner = FUN_10c4c2d0();
            Owner->Unknown80.FUN_10c4d140(Param->Virtual5());
        }
    }
    delete Param;
    Unknown0C--;
}
