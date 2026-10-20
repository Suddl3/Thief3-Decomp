// Game/Unsorted_10A84EB0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10AA3520.h"

class Class_10E6C390;

class Class_10A84DB0_Unknown08
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
    virtual bool Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual int Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual int Virtual22();
};

class Class_10B1BD70
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
    virtual bool Virtual14(int A, void* B);
    virtual bool Virtual15(int A);
    virtual void Virtual16();
    virtual bool Virtual17(Class_10E6C390* A);
    virtual void Virtual18();
    virtual bool Virtual19(int A);
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10E6C390
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
    virtual Class_10A84DB0_Unknown08* Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void FUN_10a84eb0();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();

    int Unknown04;
    Class_10A84DB0_Unknown08* Unknown08;
    int Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10A84EB0 ?FUN_10a84eb0@Class_10E6C390@@UAEXXZ
void Class_10E6C390::FUN_10a84eb0()
{
    if (Virtual16())
    {
        Unknown10++;
        Virtual16()->Virtual18();
        if (Unknown10 >= Virtual16()->Virtual18())
        {
            if (!DAT_10f35dec->UnknownBC->Virtual17(this))
                Virtual8();
        }
    }
}
