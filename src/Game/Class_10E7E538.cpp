// Game/Class_10E7E538.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10E7E538.h"

class Class_10A37C60
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual bool Virtual2();

    void FUN_10a37c60(float A, float B);
};

class Class_10F3A3D8
{
public:
    char Unknown00[0x10];
    Class_10A37C60* Unknown10;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

struct Struct_10B3ACE0
{
    char Unknown00[0x40C];
    float Unknown40C;
    float Unknown410;
};

class Class_10B22020;

class Object_10B4BC30;

// FUNCTION: 0x10B3ACE0 ?FUN_10b3ace0@Class_10E7E538@@UAEXPAUStruct_10B3ACE0@@MM@Z
void Class_10E7E538::FUN_10b3ace0(Struct_10B3ACE0* A, float B, float C)
{
    Class_10A37C60* Item = DAT_10f3a3d8->Unknown10;
    if (Item->Virtual2())
    {
        A->Unknown410 = B;
        A->Unknown40C = C;
    }
    else
    {
        A->Unknown410 = 0;
        A->Unknown40C = 0;
    }
    Item->FUN_10a37c60(B, C);
}
