// Game/Unsorted_10938FE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10955C30.h"

class Class_109528B0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual bool Virtual7(int A);
    virtual void Virtual8();
    virtual void Virtual9(int A);

    void FUN_10939050();

    char Unknown04[0x2C];
    int Unknown30;
    char Unknown34[0x5C];
    Class_10955C30 Unknown90[9];
};

// FUNCTION: 0x10939050 ?FUN_10939050@Class_109528B0@@QAEXXZ
void Class_109528B0::FUN_10939050()
{
    for (int i = 0; i < 9; i++)
    {
        Unknown90[i].FUN_10955c30();
        if (Virtual7(i))
            Virtual9(i);
        Unknown30 &= ~(1 << i);
    }
    Unknown30 = 0;
}
