// Game/Class_10E7E7C0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10B39530.h"
#include "Game/Struct_10B4C2C0.h"
#include "Game/Class_10E7E898.h"
#include "Game/GSMantle.h"

class AGarrett;

class Class_10B39870;

struct Struct_10B3AF40_Param;

// Game/Struct_10B48890.h with Pad20 named: the vector the target zeroes.
struct Struct_10B48890
{
public:
    bool FUN_10b83ee0(Struct_10B4C2C0* A, int B);

    char Unknown00[0x14];
    Struct_10B4C2C0 Unknown14;
    FVector Unknown20;
    FVector Unknown2C;
    char Unknown38[4];
    float Unknown3C;
    char Pad40[0xc8];
    FVector Unknown108;
    bool Unknown114;
    char Pad115[0x3];
};

class AGarrett
{
public:
    char Unknown00[0x44];
    FVector Unknown44;
    char Unknown50[0x2F4];
    int Unknown344;
    int Unknown348;
};

class Class_10AA82D0
{
public:
    virtual void Virtual0();
    Class_10B39870* FUN_10aa82d0();
};

class Class_10B3AE70
{
public:
    void FUN_10b3ae70(AGarrett* Garrett);
};

class Class_10E7E7C0 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void FUN_10b4c0a0(AGarrett* Garrett);

    char Unknown04[0xC];
    int Unknown10;
};

// FUNCTION: 0x10B4C0A0 ?FUN_10b4c0a0@Class_10E7E7C0@@UAEXPAVAGarrett@@@Z
void Class_10E7E7C0::FUN_10b4c0a0(AGarrett* Garrett)
{
    Struct_10B48890* S = ((Class_10E7E898*)this)->FUN_10b3af40((Struct_10B3AF40_Param*)Garrett);
    S->Unknown20 = FVector(0.0f, 0.0f, 0.0f);
    S->Unknown2C = FVector(0.0f, 0.0f, 0.0f);
    Garrett->Unknown44 = FVector(0.0f, 0.0f, 0.0f);
    Unknown10 = Garrett->Unknown348;
    switch (Unknown10)
    {
    case 2:
        ((GSMantle*)this)->ForceArms(Garrett);
        break;
    default:
        ((Class_10B3AE70*)this)->FUN_10b3ae70(Garrett);
        break;
    }
    ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(Garrett->Unknown344, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
}
