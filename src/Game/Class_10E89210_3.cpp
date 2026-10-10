// Game/Class_10E89210_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B8C810.h"
#include "Game/Class_10CAFE00.h"

class Class_10D9B090
{
public:
    char Unknown00[4];
    Class_10CAFE00* Unknown04;
};

Class_10D9B090* FUN_10d9dcb0();

struct Struct_10B82130
{
    char Unknown00[8];
    int Unknown08;
};

class Class_10E89210
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
    virtual void FUN_10b82130();

    char Unknown04[0x74];
    Class_10B8C810* Unknown78;
    char Unknown7C[0x10];
    Struct_10B82130* Unknown8C;
    Struct_10B82130* Unknown90;
};

// FUNCTION: 0x10B82130 ?FUN_10b82130@Class_10E89210@@UAEXXZ
void Class_10E89210::FUN_10b82130()
{
    Class_10B8C810* Owner = Unknown78;
    if (Owner)
        Owner->FUN_10b8c810();
    if (Unknown8C && Unknown8C->Unknown08)
    {
        Class_10D9B090* Manager = FUN_10d9dcb0();
        Manager->Unknown04->FUN_10cafe00((int)Unknown8C);
    }
    if (Unknown90 && Unknown90->Unknown08)
    {
        Class_10D9B090* Manager = FUN_10d9dcb0();
        Manager->Unknown04->FUN_10cafe00((int)Unknown90);
    }
}
