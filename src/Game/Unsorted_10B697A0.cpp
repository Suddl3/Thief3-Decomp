// Game/Unsorted_10B697A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

extern const char DAT_10e662b4[];

class Class_10A174E0
{
public:
    virtual int Virtual0(FName Name);
};

Class_10A174E0* FUN_10a18230();

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, class Class_10B697A0* B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10B697A0
{
public:
    char Unknown00[0x474];
    int Unknown474;
};

struct Struct_10AA3520
{
    char Unknown00[8];
    Class_10B697A0* Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10B697A0 ?FUN_10b697a0@@YAXXZ
void FUN_10b697a0()
{
    if (DAT_10f35dec->Unknown08->Unknown474 == 0)
    {
        if (FUN_10a18230()->Virtual0(DAT_10e662b4) == 1)
            DAT_10f46da0->Virtual5(0x49, DAT_10f35dec->Unknown08, -1, 0);
    }
}
