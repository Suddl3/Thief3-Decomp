// Game/Class_10E81620.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AC92E0.h"
#include "Game/Class_10B22020.h"
#include "Game/Class_10B39530.h"

class Class_10F3A3D8
{
public:
    char Unknown00[0x13C];
    Class_10AC92E0* Unknown13C;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int GetLinkedObject();
};

class Class_10E81620 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void FUN_10b4fcc0(Class_10B22020* Param);

    int Unknown04;
    int Unknown08;
    char Unknown0C[0x10];
    int Unknown1C;
    int Unknown20;
    int Unknown24;
};

// FUNCTION: 0x10B4FCC0 ?FUN_10b4fcc0@Class_10E81620@@UAEXPAVClass_10B22020@@@Z
void Class_10E81620::FUN_10b4fcc0(Class_10B22020* Param)
{
    Param->FUN_10b22020(1);
    Unknown08 = 0xfc;
    ((Class_10B39530*)GetLinkedObject())->Play(0xfc, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    Unknown1C = 0;
    Unknown24 = 0;
    Unknown20 = 0;
    DAT_10f3a3d8->Unknown13C->FUN_10ac92e0();
}
