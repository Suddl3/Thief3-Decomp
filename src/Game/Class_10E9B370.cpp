// Game/Unsorted_10C3DE70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109B2990.h"
#include "Game/Class_10C341B0.h"

class Class_10E9B370;

float FUN_10c3dbc0(Class_10E9B370* Obj);

class Class_10E9B370
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void FUN_10c3de70();

    char Unknown04[4];
    Class_10C341B0* Unknown08;
    char Unknown0C[0xC];
    bool Unknown18;
    char Unknown19[0x27];
    int Unknown40;
    unsigned char Unknown44;
    char Unknown45[7];
    int Unknown4C;
    Class_109B2990* Unknown50;
};

// FUNCTION: 0x10C3DE70 ?FUN_10c3de70@Class_10E9B370@@UAEXXZ
void Class_10E9B370::FUN_10c3de70()
{
    Unknown40 = Unknown08->FUN_10c341b0();
    if (Unknown40 != -1)
    {
        Unknown50->Virtual60(Unknown40);
        Unknown50->FUN_109b2990(Unknown4C, FUN_10c3dbc0(this), 0, Unknown44, -1.0f, -1, 0);
        Unknown18 = true;
    }
}
