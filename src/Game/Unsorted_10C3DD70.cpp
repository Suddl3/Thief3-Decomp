// Game/Unsorted_10C3DD70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Arg_10A48720.h"
#include "Game/Class_109BBBA0.h"
#include "Game/Class_10C3DA10.h"
#include "Game/Object_10C3D160.h"

class Class_10E9B370
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
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void FUN_10c3dec0(int A);

    void FUN_10c3db00(int A);

    char Unknown04[0x18];
    Class_10C3DA10 Unknown1C;
};

void FUN_10a48720(int A, int* B, int C, int D, Class_109BBBA0* E, int F, Arg_10A48720 G);

class Class_10E9B168;

float FUN_10c3db60(Class_10E9B168* P);

class Class_10E9B168
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void CopyFrom(Object_10C3D160* Obj);
    virtual void FUN_10c3de20(int A);

    char Unknown04[0x18];
    FVector Unknown1C;
    float m_Range;
    bool Unknown2C;
    char Unknown2D[0xF];
    int Unknown3C;
    int Unknown40;
    int Unknown44;
    char Unknown48[0xC];
    int m_Handle;
    char Unknown58[0xC];
    Class_109BBBA0* m_Manager;
};

// FUNCTION: 0x10C3DE20 ?FUN_10c3de20@Class_10E9B168@@UAEXH@Z
void Class_10E9B168::FUN_10c3de20(int A)
{
    FUN_10a48720(A, &Unknown3C, Unknown44, Unknown40, m_Manager, m_Handle, Arg_10A48720());
    m_Manager->FUN_109b5d00(m_Handle, FUN_10c3db60(this));
}

// FUNCTION: 0x10C3DEC0 ?FUN_10c3dec0@Class_10E9B370@@UAEXH@Z
void Class_10E9B370::FUN_10c3dec0(int A)
{
    FUN_10c3db00(A);
    Unknown1C.FUN_10c3da10(A);
}
