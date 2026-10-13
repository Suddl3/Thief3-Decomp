// Game/Unsorted_10C2F1B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BAA6F0.h"
#include "Game/Class_10BAA8A0.h"
#include "Game/Class_10B9CAC0.h"
#include "Game/Class_10BC9D40.h"
#include "Game/Class_10BBA080.h"
#include "Game/Class_10BB8300.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10AA82D0.h"

extern float DAT_10e49684;

class Class_10B47720;

struct Struct_10B4C2C0;

class Class_10B39870
{
public:
    int FUN_10b39870(int A);
    int FUN_10b39870(Struct_10B4C2C0* A);

    char Unknown00[0xC];
    Class_10B47720* Unknown0C;
    char Pad10[0xB0];
    float UnknownC0;
    char PadC4[0x14];
    float UnknownD8;
};

class Class_10C2F1B0
{
public:
    float FUN_10c2f1b0();

    char Unknown00[8];
    Class_10BAA6F0* Unknown08;
};

// FUNCTION: 0x10C2F1B0 ?FUN_10c2f1b0@Class_10C2F1B0@@QAEMXZ
float Class_10C2F1B0::FUN_10c2f1b0()
{
    if (((Class_10BBA080*)Unknown08->FUN_10baa6f0())->FUN_10bb8c60() != 3)
    {
        if (!((Class_10BB8300*)Unknown08->FUN_10baa6f0())->FUN_10bb8c00())
        {
            if (((Class_10BAA8A0*)Unknown08)->FUN_10baa750())
            {
                if (((Class_10BAA8A0*)Unknown08)->FUN_10baa750()->GetCurrent()->Virtual3() == 5)
                {
                    Class_10B39870* Linked = (Class_10B39870*)((Class_10AA82D0*)((Class_10C7D570*)Unknown08)->FUN_10dbd510())->GetLinkedObject();
                    return Linked->UnknownD8;
                }
            }
            return DAT_10e49684;
        }
    }
    Class_10B39870* Linked2 = (Class_10B39870*)((Class_10AA82D0*)((Class_10C7D570*)Unknown08)->FUN_10dbd510())->GetLinkedObject();
    return Linked2->UnknownC0;
}
