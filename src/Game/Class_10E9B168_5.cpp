// Game/Class_10E9B168_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109B2990.h"
#include "Game/Class_10C341B0.h"
#include "Game/Class_10E9B168_Unknown30.h"

class Class_10E9B168;

float FUN_10c3db60(Class_10E9B168* Obj);

class Class_10E9B168
{
public:
    virtual void Virtual0();
    virtual bool FUN_10c3d590(Class_10E9B168* Other);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5();
    virtual int Virtual6();
    virtual void Virtual7();
    virtual void FUN_10c3ddd0();

    char Unknown04[4];
    Class_10C341B0* Unknown08;
    int Unknown0C;
    int Unknown10;
    char Unknown14[4];
    bool Unknown18;
    char Unknown19[0x17];
    Class_10E9B168_Unknown30 Unknown30;
    char Unknown34[0x20];
    int Unknown54;
    unsigned char Unknown58;
    char Unknown59[7];
    int Unknown60;
    Class_109B2990* Unknown64;
    char Unknown68[0x10];
    int Unknown78;
};

// FUNCTION: 0x10C3DDD0 ?FUN_10c3ddd0@Class_10E9B168@@UAEXXZ
void Class_10E9B168::FUN_10c3ddd0()
{
    Unknown54 = Unknown08->FUN_10c341b0();
    if (Unknown54 != -1)
    {
        Unknown64->Virtual60(Unknown54);
        Unknown64->FUN_109b2990(Unknown60, FUN_10c3db60(this), 0, Unknown58, -1.0f, -1, 0);
        Unknown18 = true;
    }
}
