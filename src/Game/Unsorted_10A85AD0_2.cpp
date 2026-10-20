// Game/Unsorted_10A85AD0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10AA3520.h"
#include "Game/Class_10AA7850.h"
#include "Game/Class_10AA78A0.h"

extern Struct_10AA3520* DAT_10f35dec;

class Class_10A85DB0;

class Class_10A85DB0_Target;

// The manager the global points at.
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
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual bool Virtual17(Class_10A85DB0* A);
    virtual bool Virtual18(void* A);
};

// The item the loop walks over.
class Class_10A85DB0_Item
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
    virtual int Virtual85();
    char Unknown04[0x74];
    unsigned char Unknown78;
};

// What the list hands back: a count and the array.
class Class_10A85DB0_Count
{
public:
    int Unknown00;
    int Unknown04;
    Class_10A85DB0_Item** Unknown08;
};

class Class_10A85DB0_List
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10A85DB0_Count* Virtual4();
};

class Class_10A85DB0_Unknown20
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(void* A);
};

class Class_10A85DB0_Target
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
    virtual int Virtual18();
};

class Class_10A85DB0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual bool Virtual3();
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
    virtual Class_10A85DB0_Target* Virtual16();
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
    char Unknown04[0xC];
    int Unknown10;
    bool Unknown14;
    bool Unknown15;
    char Pad16[2];
    Class_10AA7850* Unknown18;
    Class_10A85DB0_List* Unknown1C;
    Class_10A85DB0_Unknown20* Unknown20;

    void FUN_10a85db0(void* Arg);
    int FUN_10a85c90(Class_10A85DB0_Target* A);
};

// FUNCTION: 0x10A85DB0 ?FUN_10a85db0@Class_10A85DB0@@QAEXPAX@Z
void Class_10A85DB0::FUN_10a85db0(void* Arg)
{
    if (this->Virtual3())
    {
        Class_10A85DB0_Count* Count = this->Unknown1C->Virtual4();
        for (int i = 0; i < Count->Unknown00; i++)
        {
            Class_10A85DB0_Item* Item = Count->Unknown08[i];
            if (Item == 0)
                continue;
            if ((Item->Unknown78 & 4) == 0)
                continue;
            if (Item->Virtual85() == 1 || Item->Virtual85() == 2)
            {
                if (!DAT_10f35dec->UnknownBC->Virtual17(this))
                {
                    this->Virtual8();
                    break;
                }
            }
        }
    }
    if (DAT_10f35dec->UnknownBC->Virtual18(Arg))
        return;
    this->Unknown20->Virtual4(Arg);
    if (!this->Unknown14)
    {
        if (this->Virtual16())
        {
            Class_10A85DB0_Target* Target = this->Virtual16();
            if (this->Unknown10 < Target->Virtual18())
                this->Virtual24();
        }
    }
    else if (this->Unknown18)
    {
        char Ok = this->Unknown18->FUN_10aa7850();
        if (Ok)
            return;
        this->Unknown14 = 0;
        ((Class_10AA78A0*)this->Unknown18)->FUN_10aa78a0();
        this->Unknown18 = 0;
        this->Virtual26();
        return;
    }
    else if (this->Unknown15)
    {
        this->Unknown14 = 0;
        this->Unknown15 = 0;
        if (this->Virtual16())
        {
            if (this->FUN_10a85c90(this->Virtual16()) == 2)
            {
                this->Unknown14 = 1;
                this->Unknown15 = 1;
            }
        }
    }
}
