// Game/Unsorted_10C29020.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10C29410.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10C29220.h"

extern float DAT_10eafbdc;

float appFrand();

float FUN_10c00490();

class Class_10C29220_Unknown0C
{
public:
    Class_1098E330* Unknown00;
};

// FUNCTION: 0x10C29220 ?FUN_10c29220@Class_10C29220@@QAEXXZ
void Class_10C29220::FUN_10c29220()
{
    if (Unknown20 <= DAT_10eafbdc)
    {
        if (Unknown04 > 0 && !Unknown1C)
        {
            Class_1098E330* Obj = Unknown0C->Unknown00;
            if (Obj != 0)
            {
                float Y;
                float X;
                Obj->FUN_1098e330(0x10077f, (int*)&X);
                Obj->FUN_1098e330(0x100780, (int*)&Y);
                Unknown20 = (Y - X) * appFrand() + X;
                if (Unknown20 <= DAT_10eafbdc)
                {
                    Unknown1D = false;
                    Unknown20 = 0.0f;
                }
            }
        }
    }
    else
    {
        double Remaining = Unknown20;
        Unknown20 = Remaining - FUN_10c00490();
        if (Unknown20 <= DAT_10eafbdc)
        {
            Unknown1D = false;
            Unknown20 = 0.0f;
        }
    }
}

// FUNCTION: 0x10C29410 ?FUN_10c29410@Class_10C29410@@QAEXH@Z
void Class_10C29410::FUN_10c29410(int Value)
{
    Class_10BFBD70* Member = &Unknown04;
    int Count = Member->Unknown00;
    Member->FUN_10bfbd70(Count + 1);
    ((int*)Member->Unknown08)[Count] = Value;
    for (int i = 0; i < Member->Unknown00; i++)
    {
        if (((int*)Member->Unknown08)[i] == Value)
        {
            if (i == 0)
                FUN_10c29380(Value);
            return;
        }
    }
}
