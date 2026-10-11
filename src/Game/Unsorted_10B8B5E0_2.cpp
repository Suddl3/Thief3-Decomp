// Game/Unsorted_10B8B5E0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10D9B090.h"

Class_10D9B090* FUN_10d9dcb0();

class Class_10CAFD00
{
public:
    void FUN_10cafd00(int A);
    void FUN_10cb1b90(int A);

    char Pad00[0x1];
    char Pad01[0xC3];
    int Unknown0C4;
};

class Class_10B87EC0_Member;

class Class_10B87EC0
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
    virtual void Virtual17(int A, int B);

    bool FUN_10b87ec0();

    int Unknown04;
    char Pad08[0x70];
    Class_10B87EC0_Member* Unknown78;
};

class Class_10E89540
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void FUN_10b8b5e0(int A, int B);
    virtual void Virtual5();
    virtual void Virtual6();
    virtual Class_10B87EC0* Virtual7();

    void FUN_10da0b20(int A, int B);
};

// FUNCTION: 0x10B8B5E0 ?FUN_10b8b5e0@Class_10E89540@@UAEXHH@Z
void Class_10E89540::FUN_10b8b5e0(int A, int B)
{
    Class_10D9B090* Mgr = FUN_10d9dcb0();
    if (Mgr->Unknown04 && Mgr->Unknown04->Unknown0C4)
    {
        Class_10B87EC0* Obj = Virtual7();
        if (Obj && Obj->FUN_10b87ec0())
        {
            Obj->Virtual17(A, B);
            return;
        }
        FUN_10da0b20(A, B);
    }
}
