// Game/Unsorted_10C26600.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_109B6D50.h"

class Class_10E9925C
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
    virtual bool Virtual8();

    Class_109B6D50* FUN_10c26490();

    char Unknown04[8];
    int Unknown0C;
    Class_109081E0 Unknown10;
    char Unknown14[0x20];
    bool Unknown34;
};

class Class_10E992D4 : public Class_10E9925C
{
public:
    void FUN_10c26600();
};

// FUNCTION: 0x10C26600 ?FUN_10c26600@Class_10E992D4@@QAEXXZ
void Class_10E992D4::FUN_10c26600()
{
    if (Unknown34 && FUN_10c26490() && Unknown0C >= 0)
    {
        if (FUN_10c26490()->FUN_109b6c50(Unknown0C) != -1)
            FUN_10c26490()->FUN_109c33f0(Unknown0C, Unknown10);
        Virtual7();
        Unknown34 = false;
    }
}
