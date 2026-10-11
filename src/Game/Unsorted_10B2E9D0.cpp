// Game/Unsorted_10B2E9D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10B2ED00.h"

// The object at +0x118: its slot 38 fills the array passed in.
class Class_10B2ED00_Unknown118
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
    virtual void Virtual38(Class_10BFBD70* Out);
};

// The object at +0x11C: its slot 38 fills the array passed in.
class Class_10B2ED00_Unknown11c
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
    virtual void Virtual38(Class_10BFBD70* Out);
};

// FUNCTION: 0x10B2ED00 ?FUN_10b2ed00@Class_10B2ED00@@QAE_NXZ
bool Class_10B2ED00::FUN_10b2ed00()
{
    if (Unknown149 != 0)
    {
        if (Unknown11c != 0)
        {
            Class_10BFBD70 Items;
            Unknown11c->Virtual38(&Items);
            int Value;
            if (Items.Count != 0)
                Value = Items.Data[0];
            else
                Value = 0;
            return Value != 0;
        }
    }
    else
    {
        if (Unknown118 != 0)
        {
            Class_10BFBD70 Items;
            Unknown118->Virtual38(&Items);
            int Value;
            if (Items.Count != 0)
                Value = Items.Data[0];
            else
                Value = 0;
            return Value != 0;
        }
    }
    return false;
}
