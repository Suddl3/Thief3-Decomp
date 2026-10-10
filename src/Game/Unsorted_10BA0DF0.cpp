// Game/Unsorted_10BA0DF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9E410.h"
#include "Game/Class_10BAA8A0.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BC9D40.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10DBD510.h"

class Class_10B9CAC0 : public Class_10B9E410
{
public:
    Class_10BC9D40* FUN_10b9cac0();
};

class Class_10970890;

class Class_10BBDB40;

class Class_109BC840
{
public:
    char Unknown00[0x49C];
    int Unknown49C;
    bool Unknown4A0;
    bool Unknown4A1;
};

class Class_10BAA580 : public Class_10C7D570
{
public:
    int FUN_10babe80();
    Class_109BC840* FUN_10baa580();
};

class Class_1098E330
{
public:
    Class_10970890* FUN_10991eb0();

    char Unknown00[0xC4];
    unsigned int Unknown0C4;
};

// FUNCTION: 0x10BA0DF0 ?FUN_10ba0df0@@YGXPAVClass_10BAA580@@@Z
void __stdcall FUN_10ba0df0(Class_10BAA580* Obj)
{
    if (Obj)
    {
        Obj->FUN_10babe80();
        ((Class_1098E330*)Obj->FUN_10c7d570())->FUN_10991eb0();
        Class_109BC840* Mode = Obj->FUN_10baa580();
        if (Mode)
        {
            Mode->Unknown49C = 0;
            Mode->Unknown4A0 = true;
            Mode->Unknown4A1 = false;
        }
        if (((Class_10DBD510*)Obj)->FUN_10dbd510(0x100647)->FUN_10bbdb40() > 0.0)
        {
            ((Class_1098E330*)Obj->FUN_10c7d570())->Unknown0C4 |= 0x10000000;
        }
    }
}

// FUNCTION: 0x10BA0E70 ?FUN_10ba0e70@@YGXPAVClass_10BAA8A0@@@Z
void __stdcall FUN_10ba0e70(Class_10BAA8A0* A)
{
    if (A)
    {
        Class_10B9CAC0* P = A->FUN_10baa750();
        if (P)
        {
            Class_10BC9D40* Q = P->FUN_10b9cac0();
            if (Q)
            {
                int R = Q->Virtual3();
                if (R == 5 || R == 0x23)
                    P->FUN_10b9d8d0();
            }
        }
    }
}
