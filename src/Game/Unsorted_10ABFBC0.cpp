// Game/Unsorted_10ABFBC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AC10E0.h"
#include "Game/Class_10E6F414.h"

extern float DAT_10eafbdc;

class Class_10E6F414_Member;

class Class_10E6F414_Member
{
public:
    virtual void Virtual0();
    virtual int Virtual1(int A, int B, int C);
};

class Class_10ACCAA0 : public Class_10E6F414, public Class_10E6F414_Member
{
public:
    int FUN_10accaa0(int A, int B, int C, int D, int E, int F, int G);
};

// FUNCTION: 0x10AC0560 ?FireWeapon@Class_10E6F414@@UAEHHHHHHHHH@Z
int Class_10E6F414::FireWeapon(int A, int B, int C, int D, int E, int F, int G, int H)
{
    Class_10E6F414_Member* Result = Virtual1(A);
    switch (Result->Virtual1(A, B, 0))
    {
    case 2:
    {
        Class_10ACCAA0* Owner = (Class_10ACCAA0*)Result;
        return Owner->FUN_10accaa0(A, B, D, E, F, G, H);
    }
    }
    return 0;
}

// FUNCTION: 0x10AC10E0 ?FUN_10ac10e0@Class_10AC10E0@@QAEHXZ
int Class_10AC10E0::FUN_10ac10e0()
{
    if (Unknown30 > DAT_10eafbdc && Unknown0C == 4)
        return 1;
    return 0;
}
