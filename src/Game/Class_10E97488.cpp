// Game/Unsorted_10BED000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BB8D60.h"

double FUN_10c00480();

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

    bool FUN_10bc40e0();
    bool FUN_10bc4af0();
    void FUN_10bc5b50();
};

class Class_10E975A0 : public Class_10E8BE68
{
public:
    void FUN_10bece10();
};

class Class_10E97488 : public Class_10E975A0
{
public:
    virtual void FUN_10bed000();

    Class_10BB8D60* Unknown04;
    char Unknown08[8];
    int Unknown10;
    char Unknown14[0x30];
    float Unknown44;
    char Unknown48[0x10];
    int Unknown58;
};

// FUNCTION: 0x10BED000 ?FUN_10bed000@Class_10E97488@@UAEXXZ
void Class_10E97488::FUN_10bed000()
{
    if (!FUN_10bc40e0())
    {
        if (FUN_10bc4af0())
            return;
        if (Unknown10 == 10)
            Unknown04->FUN_10bb8d60();
    }
    if (Unknown58 < 1 && FUN_10c00480() > Unknown44)
    {
        FUN_10bc5b50();
        return;
    }
    FUN_10bece10();
}
