// Game/Class_10E8C884_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10E9CD90.h"
#include "Game/Class_10E74F70.h"
#include "Game/Struct_10BB0B90.h"
#include "Game/Class_10BB1020_B.h"

class Class_10B47720;

struct Struct_10B4C2C0;

class Class_10DBD510;

class Class_10B39870;

class Class_10AA82D0
{
public:
    Class_10B39870* FUN_10aa82d0();
};

struct Struct_10BB0B90_Unknown118
{
    char Unknown00[8];
    Class_10AA82D0* Unknown08;
    char Pad0C[0x4];
    Class_10DBD510* Unknown10;
};

class Class_10B39870
{
public:
    int FUN_10b39870(int A);
    int FUN_10b39870(Struct_10B4C2C0* A);

    char Unknown00[0xC];
    Class_10B47720* Unknown0C;
    char Pad10[0x20];
    Class_10E9CD90 Unknown30;
};

class Class_10E8C884
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10bb1240(int A, Class_10BB1020_B* B, int C);

    Class_10E8C884* FUN_10ba4c80();
};

Struct_10BB0B90* FUN_10bb0b90(int A);

// FUNCTION: 0x10BB1240 ?FUN_10bb1240@Class_10E8C884@@UAEHHPAVClass_10BB1020_B@@H@Z
int Class_10E8C884::FUN_10bb1240(int A, Class_10BB1020_B* B, int C)
{
    if (B && B->Virtual8())
    {
        Struct_10BB0B90* Owner = FUN_10bb0b90((int)B);
        if (Owner && Owner->Unknown118 && Owner->Unknown118->Unknown08)
        {
            Class_10B39870* Obj = Owner->Unknown118->Unknown08->FUN_10aa82d0();
            Class_10E9CD90* Light = &Obj->Unknown30;
            Light->Class_10E9CD90::SetPosition(0.0f);
            ((Class_10E74F70*)Light)->Class_10E74F70::FUN_10bfbb90(0);
            return 1;
        }
    }
    return 0;
}
