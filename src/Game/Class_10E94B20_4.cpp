// Game/Class_10E94B20_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAF570.h"

class FArchive;

class Class_10B39870;

class Class_10BF7F90;

class Class_10AA82D0 : public Class_10AAF570
{
public:
    Class_10B39870* FUN_10aa82d0();
};

class Class_10BF7F90 : public Class_10AA82D0
{
};

// The object a virtual is called on after FUN_10aaf570 or FUN_10bc4bf0 returns it.
class Class_10AAF570_Result
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
    virtual int Virtual48();
    virtual void Virtual49(int A);
};

// Copied from include/Game/Class_10BEFA10.h, with the virtuals this function calls.
class Class_10BEFA10
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();

    void FUN_10befa10();

    char Unknown00[0x124];
    unsigned char Unknown124;
    char Unknown125[0x133];
    int Unknown258;
};

// Only the first slot is virtual: the chain's other classes add no slots, so Class_10E94B20 keeps slots 0 to 2.
class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

class Class_10E94578 : public Class_10BC4160
{
public:
    void FUN_10bc5b50();
};

class Class_10E94100 : public Class_10E94578
{
public:
    void FUN_10bc4e30(int A);
    int FUN_10bc4bf0();
};

class Class_10E94B20 : public Class_10E94100
{
public:
    virtual void Virtual1();
    virtual void FUN_10bdb260();
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
    virtual void FUN_10bdbc30(FArchive& Ar);
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

    char Unknown04[0x3C];
    Class_10BEFA10* Unknown40;
    char Unknown44[0x10];
    bool Unknown54;
    bool Unknown55;
};

// FUNCTION: 0x10BDB260 ?FUN_10bdb260@Class_10E94B20@@UAEXXZ
void Class_10E94B20::FUN_10bdb260()
{
    if (Unknown40)
        Unknown40->Virtual2();
    if (FUN_10bc4160()->FUN_10aa82d0() == 0)
    {
        FUN_10bc4e30(0x40400000);
        if (Unknown54)
        {
            if (!Unknown55)
                ((Class_10AAF570_Result*)FUN_10bc4160()->FUN_10aaf570())->Virtual49(0);
            FUN_10bc5b50();
            return;
        }
        if (!Unknown55)
        {
            if (((Class_10AAF570_Result*)FUN_10bc4bf0())->Virtual48() != 0x10)
            {
                Virtual74();
                return;
            }
        }
        Virtual73();
        Unknown54 = true;
        if (Unknown40 && Unknown40->Virtual3() == 0x35)
            Unknown40->FUN_10befa10();
    }
}
