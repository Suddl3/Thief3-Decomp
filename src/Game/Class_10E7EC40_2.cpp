// Game/Class_10E7EC40_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AC92F0.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B398B0.h"
#include "Game/Class_10F3A3D8.h"

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int GetLinkedObject();

    char Unknown04[4];
    int Unknown08;
    int m_LinkedObject;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

class Object_10B48430
{
public:
    char Unknown00[0x54C];
    char Unknown54C;
};

class Class_10E7EC40 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void FUN_10b48430(Object_10B48430* A);
};

// FUNCTION: 0x10B48430 ?FUN_10b48430@Class_10E7EC40@@UAEXPAVObject_10B48430@@@Z
void Class_10E7EC40::FUN_10b48430(Object_10B48430* A)
{
    Unknown08 = 0x101;
    ((Class_10B398B0*)GetLinkedObject())->FUN_10b398b0(0);
    if (A->Unknown54C == 3)
        Unknown08 = 0x41;
    if (Unknown08 != 0x101)
        ((Class_10B39530*)GetLinkedObject())->Play(Unknown08, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    DAT_10f3a3d8->Unknown13C->FUN_10ac92f0();
}
