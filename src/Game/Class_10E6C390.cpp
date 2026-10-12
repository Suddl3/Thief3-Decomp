// Game/Class_10E6C390.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Object_10A84D10.h"

extern void* DAT_10e6c390[];

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(void* A);
};

extern Class_10F46DA0* DAT_10f46da0;

struct Struct_10A84D10
{
};

class Class_10E6C390
{
public:
    void Destroy();

    void** Unknown00;
    char Unknown04[0x18];
    Object_10A84D10* Unknown1C;
    Object_10A84D10* Unknown20;
    Struct_10A84D10* Unknown24;
};

// FUNCTION: 0x10A84D10 ?Destroy@Class_10E6C390@@QAEXXZ
void Class_10E6C390::Destroy()
{
    Unknown00 = DAT_10e6c390;
    DAT_10f46da0->Virtual2(this);
    if (Unknown24)
    {
        delete Unknown24;
        Unknown24 = 0;
    }
    if (Unknown20)
    {
        delete Unknown20;
        Unknown20 = 0;
    }
    if (Unknown1C)
    {
        delete Unknown1C;
        Unknown1C = 0;
    }
}
