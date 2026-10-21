// Game/Unsorted_10A7DB20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1096D780.h"

class Class_10A7DB20_Get
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
    virtual void VirtualA();
    virtual void VirtualB();
    virtual void VirtualC();
    virtual void VirtualD();
    virtual void VirtualE();
    virtual void VirtualF();
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
    virtual void Virtual1A();
    virtual void Virtual1B();
    virtual void Virtual1C();
    virtual void Virtual1D();
    virtual void Virtual1E();
    virtual void Virtual1F();
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
    virtual void Virtual2A();
    virtual void Virtual2B();
    virtual void Virtual44(Class_1096D780* Item, int B);
};

class Class_10E6BEA8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10a7db20();

    int Unknown04;
    int Unknown08;
    Class_1096D780** Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10A7DB20 ?FUN_10a7db20@Class_10E6BEA8@@UAEXXZ
void Class_10E6BEA8::FUN_10a7db20()
{
    for (int i = 0; i < Unknown04; i++)
    {
        Class_1096D780* Item = Unknown0C[i];
        if (Item)
        {
            Class_10A7DB20_Get* Target = (Class_10A7DB20_Get*)Item->Get();
            Target->Virtual44(Item, 0);
            Unknown0C[i] = 0;
        }
    }
    Unknown10 = 0;
}
