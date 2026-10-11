// Game/Class_10E6C6FC_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"
#include "Game/Struct_10A8C2B0_Outer.h"

class FName
{
public:
    Class_109081E0 FUN_10af9730() const;

    unsigned long Value;
};

struct Struct_10A8C2B0_Inner
{
    char Unknown00[0x34];
    FName* Unknown34;
    int Unknown38;
};

Class_109081E0 FUN_1090a660(const char* Format, ...);

class Class_10E6C6FC
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10a8c200(int p1, Class_10E6C6FC* p2);
    virtual Class_109081E0 FUN_10a8c720();
    virtual void Virtual4();
    virtual void FUN_10a8c2b0();
    virtual void FUN_10a8c2f0();
    virtual int FUN_10a8c350();
    virtual void Virtual8();
    virtual bool FUN_10a8c1f0();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void FUN_10a8c410(Class_10E6C6FC* p1);

    Class_10E6C6FC();

    Struct_10A8C2B0_Outer* Unknown04;
    int Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x10A8C720 ?FUN_10a8c720@Class_10E6C6FC@@UAE?AVClass_109081E0@@XZ
Class_109081E0 Class_10E6C6FC::FUN_10a8c720()
{
    if (Unknown08 == -1)
        return Class_109081E0("Byte/Enum");
    if (Unknown04 && Unknown04->Unknown60 && Unknown08 < Unknown04->Unknown60->Unknown38)
        return Class_109081E0(Unknown04->Unknown60->Unknown34[Unknown08].FUN_10af9730());
    return Class_109081E0(FUN_1090a660("%d", Unknown08));
}
