// Game/Class_10E92230.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BB89D0.h"
#include "Game/Class_10BBB410.h"
#include "Game/Class_10BFF460.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10BC9A50.h"

class Class_10E97B00
{
public:
    virtual void FUN_10c01ff0(void* A);

    Class_10E97B00(const char* Name);
    Class_10E97B00(const Class_10E97B00& Other);
    Class_10E97B00(const Class_1090A780& Name);
    Class_10E97B00& operator=(const Class_10E97B00& Other);

    Class_109081E0 Unknown04;
};

class Class_10bf7f90
{
public:
    void FUN_10bf7f90(int A, int B);
};

class Class_10BF7F90 : public Class_10bf7f90
{
};

class Class_10BC4160_Member;

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

class Class_10E92230 : public Class_10BC4160
{
public:
    virtual void FUN_10bcc9e0(int Unused);
};

// FUNCTION: 0x10BCC9E0 ?FUN_10bcc9e0@Class_10E92230@@UAEXH@Z
void Class_10E92230::FUN_10bcc9e0(int Unused)
{
    ((Class_10BB89D0*)Unknown04)->FUN_10bbc0f0(0x80801);
    Class_10BF7F90* Obj = FUN_10bc4160();
    Obj->FUN_10bf7f90(0, 1);
    Class_10E97B00 Name("+fatigue:episode");
    Class_10BFF460* Item = ((Class_10BBB410*)Unknown04)->FUN_10bbb410();
    if (Item && Item->FUN_10bff330())
    {
        Name = Class_10E97B00(",?evidence:clearly_seen");
    }
    {
        Class_109081E0 Text(DAT_10e47660);
        ((Class_10BC9A50*)this)->FUN_10bc7d70(&Name, 0x14, 2, &Text, true);
    }
}
