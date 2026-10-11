// Game/Class_10E94B20_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"
#include "Game/Class_10E97B00.h"

extern const char DAT_10e94f94[];

class Class_10BC4160_Member;

class Class_10BF7F90;

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

class Class_10BF7F90
{
public:
    void FUN_10bf7f90(int A, int B);
};

class Class_10E94B20 : public Class_10BC4160
{
public:
    virtual void NotifyGrenadeThrown(int A);

    void FUN_10bc7d70(Class_10E97B00* Name, int Flags, int Count, Class_109081E0* Out, bool Flag);

    char Unknown08[0x4D];
    bool Unknown55;
};

// FUNCTION: 0x10BDC600 ?NotifyGrenadeThrown@Class_10E94B20@@UAEXH@Z
void Class_10E94B20::NotifyGrenadeThrown(int A)
{
    FUN_10bc4160()->FUN_10bf7f90(0, 1);
    if (!Unknown55)
    {
        Class_109081E0 Text(DAT_10e47660);
        FUN_10bc7d70(&Class_10E97B00(DAT_10e94f94), 0x14, 0, &Text, true);
    }
}
