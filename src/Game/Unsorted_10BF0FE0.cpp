// Game/Unsorted_10BF0FE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBB410.h"
#include "Game/Class_10BFF460.h"
#include "Game/Class_10BFF280.h"
#include "Game/Class_10971570.h"
#include "Game/Class_10AAF570.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10BF0870.h"
#include "Game/Class_10BC4BF0.h"

double GetTimeSeconds();

class Class_10BF7F90;

class Class_10BC4160_Member;

// Game/Class_10BC4160.h copied whole, with FUN_10bc4160's return type as the symbol has it.
class Class_10BC4160
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

    Class_10BF7F90* FUN_10bc4160();

    Class_10BC4160_Member* Unknown04;
};

class Class_10BF7F90 : public Class_10AAF570
{
};

// The link object the link type points at; its slots 38, 64, 65, 66 and 67 are called here.
class Class_10AAF570_Field10
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
    virtual int Virtual38();
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
    virtual void Virtual64(int A);
    virtual bool Virtual65();
    virtual void Virtual66();
    virtual bool Virtual67();
};

// The owner of the message; its slot 98 hands out the object the message is sent to.
class Class_10BF42C0_Result
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
    virtual void Virtual93();
    virtual void Virtual94();
    virtual void Virtual95();
    virtual void Virtual96();
    virtual void Virtual97();
    virtual Class_10971570* Virtual98();
};

class Class_10BF1380
{
public:
    void FUN_10bf1380();

    char Unknown00[4];
    Class_10BBB410* Unknown04;
    char Unknown08[0x11C];
    unsigned char Unknown124;
    char Unknown125[0x13];
    unsigned char Unknown138;
    char Unknown139[0x11B];
    float Unknown254;
    int Unknown258;
};

// FUNCTION: 0x10BF1380 ?FUN_10bf1380@Class_10BF1380@@QAEXXZ
void Class_10BF1380::FUN_10bf1380()
{
    Class_10BFF460* Cur = Unknown04->GetCurrent();
    if (Cur && Cur->FUN_10bff330() && Cur->FUN_10bff460())
    {
        switch (((Class_10AAF570_Field10*)((Class_10BC4BF0*)this)->GetTargetLinkType())->Virtual38())
        {
        case 6:
        case 9:
        case 10:
        case 12:
        case 13:
            return;
        case 7:
        case 8:
        case 11:
        default:
        {
            Class_10BF42C0_Result* Owner = (Class_10BF42C0_Result*)Unknown04->Unknown08->FUN_10c7d570();
            Class_10971570* Obj = Owner->Virtual98();
            unsigned char Flag = 0;
            bool Ok = false;
            if (Obj && Obj->FUN_10971570(0x20000bd, (bool*)&Flag) && Flag == 3)
            {
                Class_10BF7F90* Link = ((Class_10BC4160*)this)->FUN_10bc4160();
                Class_10BFF460* Cur2 = Unknown04->GetCurrent();
                if (Cur2 && Link)
                    ((Class_10AAF570_Field10*)Link->GetLinkType())->Virtual64(((Class_10BFF280*)Cur2)->FUN_10bff280());
                if (Unknown124)
                {
                    ((Class_10AAF570_Field10*)Link->GetLinkType())->Virtual66();
                    Unknown124 = 0;
                    return;
                }
                if (((Class_10AAF570_Field10*)Link->GetLinkType())->Virtual67())
                    Ok = ((Class_10AAF570_Field10*)Link->GetLinkType())->Virtual65();
            }
            else
            {
                Ok = ((Class_10BF0870*)this)->FUN_10bf0870();
            }
            if (!Ok)
                return;
            double Time = Unknown254;
            if (!(GetTimeSeconds() > Time))
                return;
        }
        }
    }
    Unknown138 = 1;
    Unknown258 = 1;
}
