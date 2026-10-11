// Game/Unsorted_10BCCB20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Object_10BCE8D0.h"
#include "Game/Class_10E92D60.h"

class Class_10BCE6E0_Member
{
public:
    char Unknown00[0x1D0];
    unsigned char Unknown1D0;
};

class Class_10E8BE68
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
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void FUN_10bce6e0(int p1);

    void FUN_10bce0d0(int p1);

    Class_10BCE6E0_Member* Unknown04;
};

// FUNCTION: 0x10BCE6E0 ?FUN_10bce6e0@Class_10E8BE68@@UAEXH@Z
void Class_10E8BE68::FUN_10bce6e0(int p1)
{
    FUN_10bce0d0(Unknown04->Unknown1D0);
}

// FUNCTION: 0x10BCE8D0 ?FUN_10bce8d0@Class_10E92D60@@UAEXPAVObject_10BCE8D0@@@Z
void Class_10E92D60::FUN_10bce8d0(Object_10BCE8D0* A)
{
    FUN_10bce7b0(A);
    A->Virtual1(&Unknown54, 1);
}
