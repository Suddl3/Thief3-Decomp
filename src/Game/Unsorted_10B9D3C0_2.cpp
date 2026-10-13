// Game/Unsorted_10B9D3C0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BB8300.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// The header's cString has a base and an implicit destructor that schedules Unknown00 - 4 after
// GetAllocator(); this function computes it before, so the copy has no base and its own destructor.
class cString
{
public:
    cString(const char* In);
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
        }
    }

    char* Unknown00;
};

class Object_10B9CAC0
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
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35(const cString& A, int B);
};

class Class_10B9CAC0
{
public:
    void FUN_10b9d3c0(int A);

    char Unknown00[0xC];
    Class_10BB8300* Unknown0C;
    int Unknown10;
    char Unknown14[4];
    Object_10B9CAC0** Unknown18;
};

// FUNCTION: 0x10B9D3C0 ?FUN_10b9d3c0@Class_10B9CAC0@@QAEXH@Z
void Class_10B9CAC0::FUN_10b9d3c0(int A)
{
    if (Unknown0C->FUN_10bb8c00())
    {
        cString Name("+combatwitness:ally_fleeing");
        (Unknown10 == 0 ? 0 : Unknown18[Unknown10 - 1])->Virtual35(Name, 1);
    }
}
