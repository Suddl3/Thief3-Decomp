// Game/Class_10E89540_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10D9B090.h"
#include "Game/Class_10B87EC0.h"
#include "Game/Class_10CAFD00.h"

Class_10D9B090* FUN_10d9dcb0();

class Class_10B87EC0_Member;

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
