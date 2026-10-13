// Game/Unsorted_10BDE880.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BC4160.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10971570.h"
#include "Game/Class_10E8BE68.h"
#include "Game/Class_10BF5310.h"

class Class_10BC4160_Member;

class Class_10BBDB40;

class Class_10BC4160_Member
{
public:
    char Pad00[0x8];
    Class_10C7D570* Unknown08;
};

class Class_10BDECC0_Result
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

struct Struct_10BDECC0
{
    char Pad00[3];
    unsigned char Flag03;
};

class Class_10E94B20 : public Class_10BC4160
{
public:
    void FUN_10bdeb10(int A, float B);
    void FUN_10bdecc0(int A);

    char Pad08[0x38];
    Class_10BF5310* Unknown40;
};

// FUNCTION: 0x10BDECC0 ?FUN_10bdecc0@Class_10E94B20@@QAEXH@Z
void Class_10E94B20::FUN_10bdecc0(int A)
{
    Struct_10BDECC0 Local;
    Class_10971570* Obj = ((Class_10BDECC0_Result*)Unknown04->Unknown08->FUN_10c7d570())->Virtual98();
    if (Unknown40)
    {
        Unknown40->FUN_10bef610(0);
    }
    if (Obj)
    {
        Local.Flag03 = 0;
        if (Obj->FUN_10971570(0x20000bd, (bool*)&Local.Flag03))
        {
            FUN_10bc4160();
            switch (Local.Flag03)
            {
            case 5:
                FUN_10bdeb10(12, 1.5f);
                break;
            case 6:
                FUN_10bdeb10(9, 1.5f);
                return;
            }
        }
    }
}
