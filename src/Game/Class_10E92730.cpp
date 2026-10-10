// Game/Class_10E92730.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAF570.h"
#include "Game/Class_10C7D570.h"
#include "Game/Object_10AAF570.h"
#include "Game/Struct_10BDF610.h"

class Class_10BF7F90 : public Class_10AAF570
{
};

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

class Class_10992010
{
public:
    float FUN_10992010();
};

struct Struct_10BCBE30_A
{
    char Unknown00[0x2C];
    Struct_10BDF610 Unknown2C;
};

struct Struct_10BCBE30_B
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

class Class_10E95288 : public Class_10BC4160
{
public:
    void FUN_10bdf610(Struct_10BDF610* A, float B, float C, float D, float E, unsigned char F);
    void FUN_10be02e0();
};

class Class_10E92730 : public Class_10E95288
{
public:
    virtual void Virtual1();
    virtual void FUN_10bcbf00();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void FUN_10bcbe30(int A);

    Struct_10BCBE30_B* Unknown04;
};

// FUNCTION: 0x10BCBE30 ?FUN_10bcbe30@Class_10E92730@@UAEXH@Z
void Class_10E92730::FUN_10bcbe30(int A)
{
    ((Object_10AAF570*)FUN_10bc4160()->FUN_10aaf570())->Virtual49(3);
    Class_10C7D570* Obj = Unknown04->Unknown08;
    FUN_10bdf610(&((Struct_10BCBE30_A*)Obj->FUN_10c7d570())->Unknown2C, 800.0f,
                 ((Class_10992010*)Obj->FUN_10c7d570())->FUN_10992010() * 3.0f, 0.0f, 0.0f, true);
    FUN_10be02e0();
}
