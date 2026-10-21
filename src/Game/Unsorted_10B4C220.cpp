// Game/Unsorted_10B4C220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

struct Struct_10B3AF40_Param;

struct Struct_10B48890;

class AGarrett;

struct Struct_10B21820_Object
{
    void FUN_109c1760();
};

class Class_10B21820
{
public:
    Struct_10B21820_Object* FUN_10991e10();

    char Unknown00[0x450];
    unsigned int Unknown450;
};

class Class_10E7E4E0
{
public:
    virtual void Virtual0();
    virtual void ApplyVelocity(AGarrett* Garrett);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();

    Class_10E7E4E0* FUN_10b3acb0();

    char Unknown04[4];
    int Field08;
    int Field0c;
};

class Class_10E7E898 : public Class_10E7E4E0
{
public:
    virtual void FUN_10b4bd80(AGarrett* Garrett);
    virtual void FUN_10b4c2c0(Struct_10B3AF40_Param* A);
    virtual void FUN_10b4c220(Class_10B21820* A);

    Class_10E7E898* FUN_10b3d270();
    Struct_10B48890* FUN_10b3af40(Struct_10B3AF40_Param* A);

    float Unknown10;
    char Unknown14;
    bool Unknown15;
    char Pad16[6];
};

struct Struct_10B48890
{
    char Unknown00[0x20];
    FVector Unknown20;
    FVector Unknown2C;
};

// FUNCTION: 0x10B4C220 ?FUN_10b4c220@Class_10E7E898@@UAEXPAVClass_10B21820@@@Z
void Class_10E7E898::FUN_10b4c220(Class_10B21820* A)
{
    Unknown10 = 5.0f;
    Struct_10B48890* R = FUN_10b3af40((Struct_10B3AF40_Param*)A);
    R->Unknown20 = FVector(0.0f, 0.0f, 0.0f);
    R->Unknown2C = FVector(0.0f, 0.0f, 0.0f);
    A->FUN_10991e10()->FUN_109c1760();
    A->Unknown450 &= ~0x10;
    Unknown15 = false;
}
