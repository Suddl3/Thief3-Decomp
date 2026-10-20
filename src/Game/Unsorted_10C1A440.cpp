// Game/Unsorted_10C1A440.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10971570.h"

class Class_10BB96F0_Virtual93
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
    virtual int Virtual14();
    virtual void Virtual15();
    virtual Class_10971570* Virtual16(int Index);
};

class Class_10BB96F0_FUN_10c7d570
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
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual void Virtual74();
    virtual void Virtual75();
    virtual void Virtual76();
    virtual void Virtual77();
    virtual void Virtual78();
    virtual void Virtual79();
    virtual void Virtual80();
    virtual void Virtual81();
    virtual void Virtual82();
    virtual void Virtual83();
    virtual void Virtual84();
    virtual void Virtual85();
    virtual void Virtual86();
    virtual void Virtual87();
    virtual void Virtual88();
    virtual void Virtual89();
    virtual void Virtual90();
    virtual void Virtual91();
    virtual void Virtual92();
    virtual Class_10BB96F0_Virtual93* Virtual93();
};

class Class_10E98CE4
{
public:
    virtual char FUN_10c1a440(Class_10BB96F0_FUN_10c7d570* Arg);
    virtual void Virtual1();
    virtual void Virtual2();

    int Unknown04;
};

// FUNCTION: 0x10C1A440 ?FUN_10c1a440@Class_10E98CE4@@UAEDPAVClass_10BB96F0_FUN_10c7d570@@@Z
char Class_10E98CE4::FUN_10c1a440(Class_10BB96F0_FUN_10c7d570* Arg)
{
    Class_10BB96F0_Virtual93* Items = Arg->Virtual93();
    if (!Items)
        return Unknown04 == 0;
    for (int i = 0; i < Items->Virtual14(); i++)
    {
        Class_10971570* Item = Items->Virtual16(i);
        if (!Item)
            continue;
        bool Flag = false;
        Item->FUN_10971570(0x20000BD, &Flag);
        int Value = Flag;
        switch (Unknown04)
        {
        case 0:
            if (Value != 0 && Value != 8)
                return false;
            break;
        case 1:
            if (Value == 13 || Value == 11 || Value == 2 || Value == 10 || Value == 4 || Value == 1)
                return true;
            break;
        case 2:
            if (Value == 3 || Value == 12 || Value == 7 || Value == 6 || Value == 5)
                return true;
            break;
        case 3:
            if (Value != 0 && Value != 8)
                return true;
            break;
        }
    }
    return Unknown04 == 0;
}
