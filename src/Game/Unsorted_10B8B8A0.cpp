// Game/Unsorted_10B8B8A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10D9FEE0.h"

struct Struct_10B8B830;

extern float DAT_10eafbdc;

extern float DAT_10e5bd88;

extern float DAT_10e895f8;

class Class_10B8B9F0_Unknown10
{
public:
    bool FUN_10dab5a0();
    float FUN_10dab640();
    float FUN_10dad300();
    void FUN_10dab5f0(int A);
    void FUN_10dab620(int A);

    char Pad00[0x4];
    int Unknown04;
};

class Class_10B8B830
{
public:
    void FUN_10b8b830(int Arg);
    bool FUN_10b8b640();
    void FUN_10b8b9f0(int A);

    int Unknown00;
    int Unknown04;
    Struct_10B8B830* Unknown08;
    int Unknown0C;
    Class_10B8B9F0_Unknown10* Unknown10;
};

// FUNCTION: 0x10B8B9F0 ?FUN_10b8b9f0@Class_10B8B830@@QAEXH@Z
void Class_10B8B830::FUN_10b8b9f0(int A)
{
    Class_10D9FEE0* Obj = (Class_10D9FEE0*)Unknown08;
    Class_10B8B9F0_Unknown10* Ctrl = Unknown10;
    if (!Ctrl || Ctrl->FUN_10dab5a0())
        return;
    float V = DAT_10eafbdc;
    if (Unknown10->Unknown04 == 0)
        V = Unknown10->FUN_10dab640();
    else if (Unknown10->Unknown04 == 1)
        V = Unknown10->FUN_10dad300();
    switch (Unknown0C)
    {
    case 1:
        if (!(V > DAT_10e895f8))
            return;
        FUN_10b8b830(0);
        break;
    case 2:
        if (!(V < DAT_10e5bd88))
            return;
        FUN_10b8b830(3);
        break;
    default:
        return;
    }
    if (FUN_10b8b640())
    {
        Ctrl->FUN_10dab5f0(0);
        Ctrl->FUN_10dab620(0);
        Obj->FUN_10da0000(true);
    }
}
