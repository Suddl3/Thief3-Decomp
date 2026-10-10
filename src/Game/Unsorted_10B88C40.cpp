// Game/Unsorted_10B88C40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_1098E3D0
{
public:
    void FUN_1098e3d0(int A, void* B);
};

struct Struct_10E89478_Unknown08
{
    char Unknown00[4];
    Class_1098E3D0* Unknown04;
};

struct Struct_10B89760_Param
{
    FVector Unknown00;
    FVector Unknown0C;
    FVector Unknown18;
    INT Unknown24;
    INT Unknown28;
    INT Unknown2C;
    INT Unknown30;
    INT Unknown34;
};

class Class_10E89478
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
    virtual void FUN_10b89760();

    char Unknown04[4];
    Struct_10E89478_Unknown08* Unknown08;
    INT Unknown0C;
    char Unknown10[4];
    FVector* Unknown14;
    FVector Unknown18;
    FVector Unknown24;
    INT Unknown30;
    INT Unknown34;
    INT Unknown38;
    INT Unknown3C;
    INT Unknown40;
};

class Class_109A6AA0
{
public:
    int FUN_109a6aa0();

    float Unknown00;
    float Unknown04;
    float Unknown08;
};

class Class_10E89458
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual bool FUN_10b89280(Class_10E89458* Other);

    char Unknown04[0xC];
    FVector Unknown10;
};

// FUNCTION: 0x10B89280 ?FUN_10b89280@Class_10E89458@@UAE_NPAV1@@Z
bool Class_10E89458::FUN_10b89280(Class_10E89458* Other)
{
    FVector A = Unknown10;
    FVector B = Other->Unknown10;
    Class_109A6AA0 D;
    D.Unknown00 = B.X - A.X;
    D.Unknown04 = B.Y - A.Y;
    D.Unknown08 = B.Z - A.Z;
    return D.FUN_109a6aa0() != 0;
}

// FUNCTION: 0x10B89760 ?FUN_10b89760@Class_10E89478@@UAEXXZ
void Class_10E89478::FUN_10b89760()
{
    Struct_10B89760_Param Param;
    Param.Unknown00 = FVector(-1.0f, -1.0f, -1.0f);
    if (Unknown0C > 0)
        Param.Unknown00 = Unknown14[0];
    Param.Unknown0C = Unknown18;
    Param.Unknown18 = Unknown24;
    Param.Unknown24 = Unknown30;
    Param.Unknown28 = Unknown34;
    Param.Unknown2C = Unknown38;
    Param.Unknown30 = Unknown3C;
    Param.Unknown34 = Unknown40;
    Unknown08->Unknown04->FUN_1098e3d0(0x80706, &Param);
}
