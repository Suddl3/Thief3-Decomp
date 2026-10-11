// Game/Unsorted_10B7FB40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <vector>
#include "Game/Class_10B7FC20.h"
#include "Game/Struct_10B7FC20_Item.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10970890.h"

class Class_10B7FEE0
{
public:
    void FUN_10b7fee0();

    int Unknown00;
    void* Unknown04;
    int Unknown08;
    int Unknown0C;
};

// The object Class_10970890::FUN_10970890 returns: the virtual table up to the slot called here.
class Object_10970890
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
    virtual bool Virtual44(int A);
};

// FUNCTION: 0x10B7FB40 ?FUN_10b7fb40@@YAHPAVClass_1098E330@@@Z
int FUN_10b7fb40(Class_1098E330* A)
{
    int Result = 0;
    Class_10970890* Owner = A->FUN_10991eb0();
    if (Owner)
    {
        Object_10970890* Object = Owner->FUN_10970890();
        if (Object)
        {
            if (Object->Virtual44(1))
                Result = 1;
            else if (Object->Virtual44(2))
                Result = 2;
            else if (Object->Virtual44(4))
                Result = 4;
            else if (Object->Virtual44(8))
                Result = 8;
            else if (Object->Virtual44(0x10))
                Result = 0x10;
            else if (Object->Virtual44(0x20))
                Result = 0x20;
            else if (Object->Virtual44(0x40))
                Result = 0x40;
        }
    }
    return Result;
}

// FUNCTION: 0x10B7FC20 ?FUN_10b7fc20@Class_10B7FC20@@QAEHXZ
int Class_10B7FC20::FUN_10b7fc20()
{
    return Unknown00.size();
}
