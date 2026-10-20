// Game/Unsorted_10BE9F50_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10E8BE68.h"
#include "Game/Class_10C7D570.h"
#include "Game/cAISpeech.h"
#include "Game/Class_10913D70.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Class_10BC4160_Member.h"

extern Struct_10AA3520* DAT_10f35dec;

class Class_10E97B00 : public Class_10913D70
{
public:
    Class_10E97B00(const char* Name);
    Class_10E97B00(const Class_10E97B00& Other);
    Class_10E97B00(const Class_1090A780& Name);
    Class_10E97B00& operator=(const Class_10E97B00& Other);
};

class Class_10BEA1A0_Target
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual float Virtual3(int A, int B, void* C);
};

class Class_10AA3520_Member
{
public:
    virtual void* Virtual0();
    virtual Class_10BEA1A0_Target* Virtual1(int A);
};

class Class_10bf7f90
{
public:
    void FUN_10bf7f90(int A, int B);
};

class Class_10BF7F90 : public Class_10bf7f90
{
};

// Game/Class_10BC4160.h types FUN_10bc4160 as returning int; the symbol
// says it returns a Class_10BF7F90*.
class Class_10BC4160
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

    Class_10BF7F90* FUN_10bc4160();

    Class_10BC4160_Member* Unknown04;
};

class Class_10E96FD0
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
    virtual void FUN_10bea1a0(int A);

    Class_10BC4160_Member* Unknown04;
    char Pad08[0x38];
    int Unknown40;
    float Unknown44;
};

// FUNCTION: 0x10BEA1A0 ?FUN_10bea1a0@Class_10E96FD0@@UAEXH@Z
void Class_10E96FD0::FUN_10bea1a0(int A)
{
    if (!Unknown40)
    {
        ((Class_10E8BE68*)this)->PopState();
        return;
    }
    Class_10E97B00 Name(DAT_10e47660);
    Name.Assign(&Class_10E97B00("+generic:startled"));
    {
        cString Text(DAT_10e47660);
        ((cAISpeech*)this)->FUN_10bc7d70(&Name, 0x1e, 8, &Text, true);
    }
    ((Class_10BC4160*)this)->FUN_10bc4160()->FUN_10bf7f90(0, 1);
    Unknown44 = 160.0f;
    Class_10BEA1A0_Target* Target = DAT_10f35dec->Unknown0C0->Virtual1(Unknown40);
    if (Target)
    {
        Unknown44 = Target->Virtual3(Unknown40, 0, Unknown04->Unknown08->FUN_10c7d570());
    }
}
