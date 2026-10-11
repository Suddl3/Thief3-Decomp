// Game/Unsorted_10BA9220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C7D570.h"

class Class_10BA9D80_Unknown14
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
    virtual bool Virtual11();
    virtual void Virtual12();
    virtual float Virtual13();
};

class Class_10FF667C
{
public:
    char Unknown00[0x14];
    Class_10BA9D80_Unknown14* Unknown14;
};

extern Class_10FF667C* DAT_10ff667c;

class Class_10BA9D80
{
public:
    virtual void Virtual0();
    virtual bool Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A);

    int FUN_10ba9ae0(int A2, int A3, int A4, int A5, int A6, int A7, int A8, int A9, int A10, Class_10C7D570* Owner, int A13);
    int FUN_10ba9d80(int A2, int A3, int A4, int A5, int A6, int A7, int A8, int A9, int A10, Class_10C7D570* Owner, bool A12, int A13);

    char Unknown04[4];
    float Unknown08;
    void* Unknown0C;
};

// FUNCTION: 0x10BA9D80 ?FUN_10ba9d80@Class_10BA9D80@@QAEHHHHHHHHHHPAVClass_10C7D570@@_NH@Z
int Class_10BA9D80::FUN_10ba9d80(int A2, int A3, int A4, int A5, int A6, int A7, int A8, int A9, int A10, Class_10C7D570* Owner, bool A12, int A13)
{
    if (!DAT_10ff667c->Unknown14->Virtual11())
        return 2;
    if (Virtual1())
    {
        if (Unknown0C != Owner->FUN_10c7d570())
            return 2;
    }
    DAT_10ff667c->Unknown14->Virtual12();
    int Result = FUN_10ba9ae0(A2, A3, A4, A5, A6, A7, A8, A9, A10, Owner, A13);
    float Delta = DAT_10ff667c->Unknown14->Virtual13();
    if (Result >= 0 && Result <= 1)
        Virtual4(0);
    float Sum = Delta + Unknown08;
    Unknown08 = Sum;
    if (!A12 && Sum > 6.25f && Result != 1)
    {
        Virtual4(0);
        return 0;
    }
    return Result;
}
