// Game/Class_10E7EAD8_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E7E6A0.h"
#include "Game/Class_10B21570.h"
#include "Game/Class_10ACA6A0.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10F3A3D8.h"

struct Struct_10B4F4B0_B
{
    char Unknown00[0xC];
    int Unknown0C;
};

class Object_10B4F4B0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Struct_10B4F4B0_B* Virtual6();
};

struct Struct_10B4F4B0
{
    char Unknown00[0xB0];
    Object_10B4F4B0* UnknownB0;
};

class Class_10E7EA90
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void FUN_10b4f4b0(Struct_10B4F4B0* Other);
    virtual void Virtual8(int Value);
};

class AGarrett;

class Class_10E7EB20 : public Class_10E7E6A0
{
public:
    virtual void FUN_10b4f490(AGarrett* Param);
};

class Class_1098E3D0;

class Class_10B39870;

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    Class_10B39870* FUN_10aa82d0();
};

class Class_1098E3D0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

class Class_10E7EAD8 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual int OnAnimationEnd(Class_10B21570* A, Class_1098E3D0* B);

    char Unknown04[0xC];
    int Unknown10;
    char Unknown14[4];
    bool Unknown18;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

// FUNCTION: 0x10B4EC60 ?OnAnimationEnd@Class_10E7EAD8@@UAEHPAVClass_10B21570@@PAVClass_1098E3D0@@@Z
int Class_10E7EAD8::OnAnimationEnd(Class_10B21570* A, Class_1098E3D0* B)
{
    if (B == (Class_1098E3D0*)0xa8)
    {
        if (A->FUN_10b21570())
        {
            DAT_10f3a3d8->Unknown120->FUN_10aca6a0(&B, 0, 0);
            if (B)
            {
                B->Virtual2();
            }
            ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0xa6, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
            ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0xa9, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
            Unknown18 = false;
            return Virtual4();
        }
        return 0;
    }
    return Virtual4();
}

// FUNCTION: 0x10B4F490 ?FUN_10b4f490@Class_10E7EB20@@UAEXPAVAGarrett@@@Z
void Class_10E7EB20::FUN_10b4f490(AGarrett* Param)
{
    ReleaseArm(Param);
    FUN_10b3adc0(Param);
}

// FUNCTION: 0x10B4F4B0 ?FUN_10b4f4b0@Class_10E7EA90@@UAEXPAUStruct_10B4F4B0@@@Z
void Class_10E7EA90::FUN_10b4f4b0(Struct_10B4F4B0* Other)
{
    Struct_10B4F4B0_B* Item = Other->UnknownB0->Virtual6();
    Virtual8(Item->Unknown0C);
}
