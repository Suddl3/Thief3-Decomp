// Game/Unsorted_10BB5660.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BB67F0.h"
#include "Game/Struct_10AA3520.h"

class Class_10E9092C
{
public:
    Class_10E9092C(void* p1);

    virtual void Virtual0();

    int Unknown04;
    int Unknown08;
    void* Unknown0C;
};

class Class_10BB48E0;

extern Class_10BB48E0* DAT_10ff6694;

extern Struct_10AA3520* DAT_10f35dec;

void FUN_10bb55a0(void* A);

// FUNCTION: 0x10BB5660 ?FUN_10bb5660@@YAPAVClass_10BB48E0@@XZ
Class_10BB48E0* FUN_10bb5660()
{
    if (DAT_10ff6694 == 0 && DAT_10f35dec != 0 && DAT_10f35dec->UnknownA4 != 0)
        FUN_10bb55a0(DAT_10f35dec->UnknownA4);
    return DAT_10ff6694;
}

// FUNCTION: 0x10BB74E0 ??0Class_10E9092C@@QAE@PAX@Z
Class_10E9092C::Class_10E9092C(void* p1)
{
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = p1;
}
