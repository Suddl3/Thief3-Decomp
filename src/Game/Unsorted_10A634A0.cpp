// Game/Unsorted_10A634A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_1090A780.h"
#include "Game/cMenu.h"

class Class_10E6AC98
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
    virtual Class_1090A780 FUN_10a631d0();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void FUN_10c63a40(int p1);
    virtual Class_1090A780 FUN_10a63210();
    virtual void FUN_10a634a0(const Class_109081E0& A);

    char Unknown04[0xC];
    Class_1090A780 Unknown10;
    Class_109081E0 Unknown14;
    Class_1090A780 Unknown18;
    int Unknown1C;
};

// FUNCTION: 0x10A634A0 ?FUN_10a634a0@Class_10E6AC98@@UAEXABVClass_109081E0@@@Z
void Class_10E6AC98::FUN_10a634a0(const Class_109081E0& A)
{
    FUN_10905aa0()->Virtual8(0, 0);
    Unknown14 = A;
    FUN_10905aa0()->Virtual9();
}

// FUNCTION: 0x10A634D0 ?FUN_10a634d0@cMenu@@UAEXABVClass_109081E0@@@Z
void cMenu::FUN_10a634d0(const Class_109081E0& A)
{
    FUN_10905aa0()->Virtual8(0, 0);
    Unknown10 = A;
    FUN_10905aa0()->Virtual9();
}
