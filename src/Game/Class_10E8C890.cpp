// Game/Class_10E8C890.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1090A780.h"
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10BB0B90.h"
#include "Game/Class_10C13130.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10E8C890.h"

class Class_10BBDB40;

class Class_10BB12A0_B;

class Class_10BB12A0_C;

class Class_10C13130;

class Struct_10BB0B90;

class Class_10BB12A0_B
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
    virtual int Virtual8();
};

class Class_10BB12A0_C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10C13130* Virtual4(int A);
};

struct Struct_10BB0B90_Unknown118
{
    char Unknown00[0x10];
    Class_10C7D570* Unknown10;
};

Struct_10BB0B90* FUN_10bb0b90(int A);

// FUNCTION: 0x10BB12A0 ?FUN_10bb12a0@Class_10E8C890@@UAEHHPAVClass_10BB12A0_B@@PAVClass_10BB12A0_C@@@Z
int Class_10E8C890::FUN_10bb12a0(int A, Class_10BB12A0_B* B, Class_10BB12A0_C* C)
{
    Class_10C13130* X = C->Virtual4(0);
    X->Virtual4(X->FUN_10c13130());
    int First = X->Unknown08;
    int Second = B->Virtual8();
    Struct_10BB0B90* Owner = FUN_10bb0b90((int)B);
    if (Owner && Owner->Unknown118 && Owner->Unknown118->Unknown10)
    {
        Class_10BBDB40* Target = Owner->Unknown118->Unknown10->FUN_10dbd510();
        if (Target)
            Target->FUN_10bbd370(First, Second);
    }
    return 1;
}
