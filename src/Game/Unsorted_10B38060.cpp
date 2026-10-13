// Game/Unsorted_10B38060.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/PlayerStateController.h"
#include "Game/Class_10B38DE0.h"
#include "Game/Struct_10B38DE0_Vec.h"

class Class_10B38DE0_Result
{
public:
    char Pad00[0x40];
    Struct_10B38DE0_Vec Unknown40;
};

class Class_10B38DE0_Unknown0B0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Class_10B38DE0_Result* Virtual6();
};

class Class_10B38DE0_Unknown04
{
public:
    char Pad00[0xb0];
    Class_10B38DE0_Unknown0B0* Unknown0B0;
    char Pad0B4[0x36c];
    int Unknown420;
    int Unknown424;
};

class Class_10B38DE0_Param2
{
public:
    char Pad00[4];
    int Unknown04;
};

float FUN_10abc4a0(int A, const Struct_10B38DE0_Vec* B);

// FUNCTION: 0x10B38DE0 ?FUN_10b38de0@Class_10B38DE0@@QAEXHPAVClass_10B38DE0_Param2@@H@Z
void Class_10B38DE0::FUN_10b38de0(int A, Class_10B38DE0_Param2* B, int C)
{
    if (Unknown0C == -1.0f)
    {
        Class_10B38DE0_Unknown0B0* Provider = Unknown04->Unknown0B0;
        if (Provider && Provider->Virtual6())
        {
            Struct_10B38DE0_Vec V = Unknown04->Unknown0B0->Virtual6()->Unknown40;
            Unknown0C = FUN_10abc4a0(Unknown04->Unknown420, &V);
            Unknown10 = FUN_10abc4a0(Unknown04->Unknown424, &V);
        }
    }
    if (B->Unknown04 == 1 && Unknown0C != -1.0f)
        FUN_10b38140();
    Unknown08->FUN_10b22bd0(B->Unknown04);
}
