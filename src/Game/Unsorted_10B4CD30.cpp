// Game/Unsorted_10B4CD30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10971570.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10AC92F0.h"
#include "Game/Class_10B19300.h"
#include "Game/Class_10B22020.h"
#include "Game/Class_10F3A3D8.h"
#include "Game/Static_10B18D00.h"

class Class_10B4D010_Param
{
public:
    char Unknown00[0x448];
    Class_10971570* Unknown448;
    int Unknown44C;
};

class Class_10E7E9B8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10b4d010(Class_10B4D010_Param* A);

    void FUN_10b4c840(Class_10B4D010_Param* A);

    char Unknown04[0xC];
    int Unknown10;
};

class Object_10B4D050
{
public:
    char Unknown00[0x440];
    void* Unknown440;
    char Unknown444[8];
    int Unknown44C;
};

class Class_10E7EA00
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10b4d050(Object_10B4D050* P);

    void FUN_10b4cad0(Object_10B4D050* P);

    char Unknown04[0xC];
    int m_AnimationEnded;
    int Unknown14;
};

struct Struct_10B19300_Param;

Class_10B19300* FUN_10b190e0();

Static_10B18D00* FUN_10b18d00();

extern Class_10F3A3D8* DAT_10f3a3d8;

class Class_10E81590
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int FUN_10b4cd30(Class_1098E330* A);

    char Unknown04[0xC];
    bool m_AnimationEnded;
};

// FUNCTION: 0x10B4CD30 ?FUN_10b4cd30@Class_10E81590@@UAEHPAVClass_1098E330@@@Z
int Class_10E81590::FUN_10b4cd30(Class_1098E330* A)
{
    DAT_10f3a3d8->Unknown13C->FUN_10ac92f0();
    if (m_AnimationEnded)
        return 0x17;
    if (!A->FUN_10b22000())
    {
        FUN_10b18d00()->FUN_10b18d20((Class_10B22020*)A);
        FUN_10b190e0()->FUN_10b19300((Struct_10B19300_Param*)A, 1.0f);
    }
    return Virtual4();
}

// FUNCTION: 0x10B4D010 ?FUN_10b4d010@Class_10E7E9B8@@UAEXPAVClass_10B4D010_Param@@@Z
void Class_10E7E9B8::FUN_10b4d010(Class_10B4D010_Param* A)
{
    bool Value;
    A->Unknown448->FUN_10971570(0x20000bd, &Value);
    A->Unknown44C = Value;
    FUN_10b4c840(A);
    Unknown10 = 0x21;
}

// FUNCTION: 0x10B4D050 ?FUN_10b4d050@Class_10E7EA00@@UAEXPAVObject_10B4D050@@@Z
void Class_10E7EA00::FUN_10b4d050(Object_10B4D050* P)
{
    if (P->Unknown440 != 0 && P->Unknown44C != 0)
    {
        Unknown14 = 0;
        m_AnimationEnded = 0;
        FUN_10b4cad0(P);
    }
}
