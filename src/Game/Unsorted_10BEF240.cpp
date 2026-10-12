// Game/Unsorted_10BEF240.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BEF4F0.h"
#include "Game/Class_10BEF5B0.h"
#include "Game/Class_10BF0360.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10DBD510.h"
#include "Game/Struct_10AA3520.h"

float appFrand();

struct Struct_10BF0360
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

struct Struct_10BEF5B0
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

extern float DAT_10eafbdc;

struct Struct_10BEF4F0
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

class Class_10C7D570_Result
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
    virtual int Virtual98();
};

class Class_10AA3520_Item
{
public:
    virtual float Virtual0(int A, int B, int C);
};

class Class_10AA3520_Member
{
public:
    virtual void Virtual0();
    virtual Class_10AA3520_Item* Virtual1(int A);
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10BEF4F0 ?FUN_10bef4f0@Class_10BEF4F0@@QAEMXZ
float Class_10BEF4F0::FUN_10bef4f0()
{
    if (Unknown120)
        return DAT_10eafbdc;
    float Result = 1.0f;
    int Id = ((Class_10C7D570_Result*)Unknown04->Unknown08->FUN_10c7d570())->Virtual98();
    if (Id)
    {
        Class_10AA3520_Item* Item = DAT_10f35dec->Unknown0C0->Virtual1(Id);
        Result = Item->Virtual0(Id, 0, 0);
    }
    return Result;
}

// FUNCTION: 0x10BEF550 ?GetRandomInRange@Class_10BF0360@@QAEMXZ
float Class_10BF0360::GetRandomInRange()
{
    float Min = Unknown04->Unknown08->FUN_10dbd510(0x100645)->FUN_10bbdc80();
    float Max = Unknown04->Unknown08->FUN_10dbd510(0x100646)->FUN_10bbdc80();
    return Min + (Max - Min) * appFrand();
}

// FUNCTION: 0x10BEF5B0 ?GetRandomInRange@Class_10BEF5B0@@QAEMXZ
float Class_10BEF5B0::GetRandomInRange()
{
    float Min = Unknown04->Unknown08->FUN_10dbd510(0x100643)->FUN_10bbdc80();
    float Max = Unknown04->Unknown08->FUN_10dbd510(0x100644)->FUN_10bbdc80();
    return Min + (Max - Min) * appFrand();
}
