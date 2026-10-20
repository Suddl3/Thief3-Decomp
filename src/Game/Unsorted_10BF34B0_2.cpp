// Game/Unsorted_10BF34B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10971570.h"
#include "Game/Class_10AAF570.h"
#include "Game/Class_10BB8300.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10BF1C40.h"
#include "Game/Class_10BF1C40_Unknown40.h"

// The object the manager hands out; its slot 98 is the one asked for the message.
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

// The object the +0x10 field of a link holds; its slots 48 and 64 are the ones called here.
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
};

class Class_10BF7F90 : public Class_10AAF570
{
};

class Class_10BC4160
{
public:
    Class_10BF7F90* FUN_10bc4160();
};

// include/Game/Class_10BF5310.h copied whole, with the fields this function reads and writes.
class Class_10BF5310
{
public:
    void FUN_10bf42c0();
    int GetTargetLinkType();
    void FUN_10bf3d70(int A, float B, float C);

    char Unknown00[4];
    Class_10BB8300* Unknown04;
    char Unknown08[0x130];
    unsigned char Unknown138;
    char Unknown139[3];
    int Unknown13C;
    char Unknown140[0x118];
    int Unknown258;
};

float __cdecl appFrand();

extern float DAT_10e8738c;

extern float DAT_10e4a640;

extern float DAT_10e499a0;

class Class_10BF3400_Unknown04;

// include/Game/Class_10BF3400.h copied whole, with the base it really has.
class Class_10BF3400 : public Class_10BF1C40
{
public:
    int FUN_10bf3400(float A, int B);
    void FUN_10bf3180(int A, int B, float C, float D);

    Class_10BF3400_Unknown04* Unknown04;
    char Unknown08[0x110];
    int Unknown128;
    int Unknown12C;
};

class Class_10BF4410 : public Class_10BF3400
{
public:
    void FUN_10bf4410();
    bool FUN_10bf1d50(int A, int B, int C);

    int Unknown170;
};

// FUNCTION: 0x10BF42C0 ?FUN_10bf42c0@Class_10BF5310@@QAEXXZ
void Class_10BF5310::FUN_10bf42c0()
{
    Unknown13C = 3;
    Unknown138 = 0;
    Class_10971570* Obj = ((Class_10BF42C0_Result*)Unknown04->m_Owner->FUN_10c7d570())->Virtual98();
    if (!Obj)
        return;
    unsigned char Flag = 0;
    Obj->FUN_10971570(0x20000bd, (bool*)&Flag);
    switch (Flag)
    {
    case 5:
        if (((Class_10AAF570_Field10*)GetTargetLinkType())->Virtual48() == 0xe)
        {
            FUN_10bf3d70(0xb, 0.1f, 2.0f);
            Unknown258 = 0;
        }
        break;
    case 6:
        if (((Class_10AAF570_Field10*)GetTargetLinkType())->Virtual48() == 0xb)
        {
            FUN_10bf3d70(8, 0.1f, 2.0f);
            Unknown258 = 0;
        }
        break;
    case 3:
    {
        Class_10BF7F90* Link = ((Class_10BC4160*)this)->FUN_10bc4160();
        if (Link)
            ((Class_10AAF570_Field10*)Link->GetLinkType())->Virtual64(0);
        if (((Class_10AAF570_Field10*)GetTargetLinkType())->Virtual48() == 7)
        {
            FUN_10bf3d70(5, 0.1f, 2.0f);
            Unknown258 = 0;
        }
        break;
    }
    case 12:
        Unknown258 = 0;
        break;
    }
}

// FUNCTION: 0x10BF4410 ?FUN_10bf4410@Class_10BF4410@@QAEXXZ
void Class_10BF4410::FUN_10bf4410()
{
    float Value;
    if (Unknown40)
        Value = Unknown40->Virtual71();
    else
        Value = 0.0f;
    if (Unknown170 == 0x1b)
    {
        if (appFrand() < DAT_10e8738c)
        {
            if (FUN_10bef370() * DAT_10e4a640 < Value)
            {
                FUN_10bf3180(0x16, 2, 0.2f, 1.0f);
                Unknown170 = 0x16;
                return;
            }
            if (appFrand() < DAT_10e499a0)
            {
                FUN_10bf3180(0x15, 2, 0.2f, 1.0f);
                Unknown170 = 0x15;
                return;
            }
            FUN_10bf3180(0x1a, 2, 0.2f, 1.0f);
            Unknown170 = 0x1a;
            return;
        }
    }
    if (FUN_10bf1d50(0x1a, 2, 0))
    {
        if (appFrand() < 0.25f)
        {
            FUN_10bf3180(0x1a, 2, 0.2f, 1.0f);
            Unknown170 = 0x15;
            return;
        }
    }
    if (appFrand() < DAT_10e499a0)
    {
        int Result = FUN_10bf3400(0.5f, 2);
        if (Result)
        {
            Unknown170 = Result;
            return;
        }
    }
    if (FUN_10bf1d50(0x1b, 2, 0))
    {
        FUN_10bf3180(0x1b, 2, 0.2f, 1.0f);
        Unknown170 = 0x17;
    }
}
