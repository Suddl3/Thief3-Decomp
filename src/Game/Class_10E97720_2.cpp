// Game/Class_10E97720_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1098E330.h"
#include "Game/Class_10C7D570.h"
#include "Game/Object_10BF1500.h"
#include "Game/Struct_10BF1500.h"

class Class_10E97720
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
    virtual void Virtual71(int A);

    void FUN_10bf2f70(int A);

    Struct_10BF1500* Unknown04;
    char Unknown08[0x134];
    int Unknown13C;
    char Unknown140[0xFC];
    int Unknown23C;
};

// FUNCTION: 0x10BF2F70 ?FUN_10bf2f70@Class_10E97720@@QAEXH@Z
void Class_10E97720::FUN_10bf2f70(int A)
{
    if (Unknown13C == 2)
    {
        Class_1098E330* Obj = ((Object_10BF1500*)Unknown04->Unknown08->FUN_10c7d570())->Virtual98();
        bool Found = false;
        if (Obj)
        {
            int Value = 0;
            Obj->FUN_1098e330(0x8007b1, &Value);
            Found = Value != 0;
        }
        if (Found)
        {
            Virtual71(A);
            Unknown23C++;
        }
    }
}
