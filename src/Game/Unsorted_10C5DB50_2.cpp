// Game/Unsorted_10C5DB50_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E9C990.h"

class Class_109081E0;

Class_10905A90_Member* FUN_10905aa0();

class Class_1090FD40
{
public:
    void FUN_1090f2c0(int Count);

    void Empty()
    {
        FUN_1090f2c0(0);
        if (Unknown04)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    Class_109081E0* Unknown08;
};

class Class_10C5E4E0
{
public:
    void FUN_10c5e4e0();

    int Unknown00;
    Class_1090FD40 Unknown04;
};

class Class_10E9C990;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E9C990* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

struct Struct_10AA3520
{
    char Unknown00[0x08];
    int Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10C5E4E0 ?FUN_10c5e4e0@Class_10C5E4E0@@QAEXXZ
void Class_10C5E4E0::FUN_10c5e4e0()
{
    Unknown04.Empty();
}

// FUNCTION: 0x10C5E7D0 ?FUN_10c5e7d0@Class_10E9C990@@QAEXXZ
void Class_10E9C990::FUN_10c5e7d0()
{
    if (DAT_10f46da0)
    {
        DAT_10f46da0->Virtual1(this, 0x70, DAT_10f35dec->Unknown08, -1);
        DAT_10f46da0->Virtual1(this, 0x5a, -1, -1);
    }
    FUN_10c5e750();
}
