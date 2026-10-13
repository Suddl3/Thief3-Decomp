// Game/Unsorted_10BC7050.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10C7D570.h"

class Class_10BB43E0
{
public:
    Class_10BB43E0(const cString& Name);
    ~Class_10BB43E0();

    char Unknown00[8];
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, void* B, Class_10BB43E0* C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10BC7050_Unknown04
{
public:
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

void FUN_10bc6f60(const cString& A, const cString& B, void* C);

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
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void FUN_10bc7050(const cString& Name);

    Class_10BC7050_Unknown04* Unknown04;
    char Unknown08[0x20];
    char Unknown28[0xc];
    char Unknown34[4];
};

// FUNCTION: 0x10BC7050 ?FUN_10bc7050@Class_10E8BE68@@UAEXABVcString@@@Z
void Class_10E8BE68::FUN_10bc7050(const cString& Name)
{
    FUN_10bc6f60(Name, Name, &Unknown28);
    FUN_10bc6f60(Name, Name, &Unknown34);
    if (DAT_10f46da0)
    {
        Class_10BB43E0 Local(Name);
        Class_10C7D570* Owner = Unknown04->Unknown08;
        DAT_10f46da0->Virtual5(0x78, Owner->FUN_10c7d570(), &Local, 0);
    }
}
