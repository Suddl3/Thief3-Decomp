// Game/Class_10B32B50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B21360.h"
#include "Game/Class_10B32B50.h"
#include "Game/Class_10B21340.h"
#include "Game/Options.h"
#include "Game/Class_10AC14F0.h"

class Class_10F3A3D8
{
public:
    char Unknown00[0x10];
    Class_10AC14F0* Unknown10;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

Options* GetOptions();

// FUNCTION: 0x10B32620 ?FUN_10b32620@Class_10B32B50@@QAEXPAVClass_10B21340@@@Z
void Class_10B32B50::FUN_10b32620(Class_10B21340* A)
{
    Info_10B21360 Info;
    FUN_10b31fb0(&Info.Unknown00, A);
    int Value = Unknown34;
    if (Value != 0)
    {
        if (Value > 0)
        {
            Unknown34 = (int)((float)Value - A->Unknown454 * 1200.0f);
            if (Unknown34 < 0)
                Unknown34 = 0;
        }
        else
        {
            Unknown34 = (int)(A->Unknown454 * 1200.0f + (float)Value);
            if (Unknown34 > 0)
                Unknown34 = 0;
        }
    }
    Info.Unknown00 -= Unknown34;
    ((Class_10B21360*)A)->FUN_10b21360(&Info);
}

// FUNCTION: 0x10B326B0 ?FUN_10b326b0@Class_10B32B50@@QAEXPAVClass_10B21340@@@Z
void Class_10B32B50::FUN_10b326b0(Class_10B21340* A)
{
    float First;
    int Second;
    float Third;
    if (GetOptions()->Get(10))
    {
        if (!FUN_10b32200(A))
        {
            First = 20.0f;
            Second = 0x40000000;
            Third = 30.0f;
            A->FUN_1098e330(0x100509, (int*)&First);
            A->FUN_1098e330(0x10050b, &Second);
            A->FUN_1098e330(0x10050a, (int*)&Third);
            DAT_10f3a3d8->Unknown10->FUN_10ac14f0(First, Second, Third, false);
        }
    }
}
