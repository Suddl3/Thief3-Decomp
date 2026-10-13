// Game/Unsorted_10BE8780.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFD210.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BB8A30.h"

class Class_10BC9D40;

class Class_10C7D570;

class Class_10DC1750_Result;

struct Struct_10DC1750_Result_1C
{
    int Count;
    char Unknown04[4];
    int* Items;
};

class Class_10DC1750_Result
{
public:
    char Unknown00[0x1C];
    Struct_10DC1750_Result_1C Unknown1C;
};

// Game/Class_10C7D570.h copied whole, with the FUN_10dc1750 this function calls on Unknown08 added
class Class_10C7D570
{
public:
    void* FUN_10c7d570();
    Class_10BBDB40* FUN_10dbd510(int Id);
    Class_10BBDB40* FUN_10dbd510();
    Class_10DC1750_Result* FUN_10dc1750();

    char Unknown00[0x64];
    bool Unknown64;
};

class Class_10BC9D40
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
    virtual bool Virtual57();
};

class Class_10E960D8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual bool Virtual5();
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
    virtual bool FUN_10be8780();

    Class_10BB8A30* Unknown04;
};

// FUNCTION: 0x10BE8780 ?FUN_10be8780@Class_10E960D8@@UAE_NXZ
bool Class_10E960D8::FUN_10be8780()
{
    if (!Unknown04->GetCurrent()->Virtual57())
        return false;
    Class_10DC1750_Result* Result = Unknown04->Unknown08->FUN_10dc1750();
    Struct_10DC1750_Result_1C* List = &Result->Unknown1C;
    int Index = -1;
    for (int i = 0; i < List->Count; i++)
    {
        if (List->Items[i] == 0x13)
        {
            Index = i;
            break;
        }
    }
    if (Index == -1)
    {
        Class_10BB8A30* Owner = Unknown04;
        float L = Owner->Unknown30.FUN_10bfc3a0();
        Class_10BBDB40* Source = Unknown04->Unknown08->FUN_10dbd510();
        float Y = Source->GetFloat(0x40100244);
        if (Y < L)
            return true;
    }
    return false;
}
