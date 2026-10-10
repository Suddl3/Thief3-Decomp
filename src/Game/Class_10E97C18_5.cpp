// Game/Class_10E97C18_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10AA3520.h"

extern Struct_10AA3520* DAT_10f35dec;

class Class_10E97C18
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
    virtual void FUN_10c0b870();
    virtual void Virtual19(int A, int B);

    char Unknown04[8];
    int Unknown0C;
    char Unknown10[4];
    int Unknown14;
    char Unknown18[0x28];
    bool Unknown40;
};

// FUNCTION: 0x10C0B870 ?FUN_10c0b870@Class_10E97C18@@UAEXXZ
void Class_10E97C18::FUN_10c0b870()
{
    if (DAT_10f35dec && DAT_10f35dec->Unknown08)
    {
        if (Unknown40)
        {
            Virtual19(0, Unknown14);
            return;
        }
        if (Unknown0C < Unknown14)
            Virtual19(Unknown0C, Unknown0C + 1);
        Unknown0C = Unknown0C + 1;
        if (Unknown0C >= Unknown14)
            Unknown0C = 0;
    }
}
