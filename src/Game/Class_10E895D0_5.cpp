// Game/Class_10E895D0_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1098E3D0.h"
#include "Game/Class_10D9FD70.h"
#include "Game/Class_10B8B9F0_Unknown10.h"

class Class_10B8C1F0_UnknownE8
{
public:
    char Unknown00[8];
    float Unknown08;
    float Unknown0C;
};

class Class_10B8C1F0_Unknown08
{
public:
    char Pad00[0xe8];
    Class_10B8C1F0_UnknownE8* UnknownE8;
};

struct Struct_10B8C1F0_Param
{
    bool Unknown00;
    float Unknown04;
    float Unknown08;
};

extern float DAT_11006e34;

class Class_10E895D0
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
    virtual void FUN_10b8c1f0();

    void SetState(int Arg);
    bool FUN_10b8b640();
    void FUN_10b8b9f0(int A);
    Class_10B8B9F0_Unknown10* FUN_10b8b8a0();
    void FUN_10b8bf80();

    int Unknown04;
    Class_10D9FD70* Unknown08;
    bool m_State;
    Class_10B8B9F0_Unknown10* m_Controller;
    char Pad14[0x20];
    bool Unknown34;
    char Pad35[0x3];
};

// FUNCTION: 0x10B8C1F0 ?FUN_10b8c1f0@Class_10E895D0@@UAEXXZ
void Class_10E895D0::FUN_10b8c1f0()
{
    Class_10B8B9F0_Unknown10* Controller = FUN_10b8b8a0();
    Class_10D9FD70* Obj = Unknown08;
    m_Controller = Controller;
    Struct_10B8C1F0_Param Param;
    Param.Unknown00 = m_State;
    Param.Unknown04 = 0.0f;
    Param.Unknown08 = 0.0f;
    Class_1098E3D0* Target = Obj->Unknown04;
    if (Controller)
    {
        if (Controller->Unknown04 == 0)
        {
            Class_10B8C1F0_UnknownE8* Y = Controller->Unknown08->UnknownE8;
            Param.Unknown04 = Y->Unknown08;
            Param.Unknown08 = Y->Unknown0C;
        }
        else if (Controller->Unknown04 == 1)
        {
            float Scale = Controller->FUN_10dacdb0();
            Param.Unknown04 = DAT_11006e34 * Scale;
            Param.Unknown08 = Controller->FUN_10dacdd0();
        }
        else
        {
            Obj->FUN_10d9fd70();
        }
    }
    else
    {
        Obj->FUN_10d9fd70();
    }
    Target->FUN_1098e3d0(0x806eb, &Param);
}
