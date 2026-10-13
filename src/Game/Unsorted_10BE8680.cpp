// Game/Unsorted_10BE8680.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BB8A30.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10BFD210.h"
#include "Game/Class_10DC1750.h"
#include "Game/Class_10DC1750_Result.h"
#include "Game/Struct_10DC1750_Result_1C.h"

class Class_10BB8140;

class Object_10BE58C0;

// Copied whole from include/Game/Class_10BC9D40.h with Virtual26 to Virtual57 added (Virtual57 returns bool).
class Class_10BC9D40
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
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

    bool FUN_10bc9d40();
};

// Copied whole from include/Game/Class_10E960D8.h (its base dropped: the field sits at +4) with slot 74 named FUN_10be8680.
class Class_10E960D8
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
    virtual void FUN_10be4250(bool A);
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
    virtual void Serialize(Object_10BE58C0* Ar);
    virtual float FUN_10be4340();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual int FUN_10be4170();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual bool FUN_10be8680();
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
    virtual bool Virtual86();

    Class_10E960D8(int A, int B);

    bool FUN_10be4540();
    void FUN_10be4ef0(Object_10BE58C0* Ar);
    void FUN_10be7ea0();
    void FUN_10be85b0();
    int FUN_10be4280();
    int FUN_10be42a0();
    void FUN_10be8f70();
    void FUN_10be8ee0();

    Class_10BB8140* Unknown04;
    char Pad08[0x60];
    int m_Interval;
    char Pad6C[0x8];
};

// FUNCTION: 0x10BE8680 ?FUN_10be8680@Class_10E960D8@@UAE_NXZ
bool Class_10E960D8::FUN_10be8680()
{
    if (!((Class_10BB8A30*)Unknown04)->GetCurrent()->Virtual57())
        return false;
    Class_10DC1750_Result* Result = ((Class_10DC1750*)((Class_10BB8A30*)Unknown04)->Unknown08)->FUN_10dc1750();
    Struct_10DC1750_Result_1C* List = &Result->Unknown1C;
    int Index = 0;
    for (; Index < List->Count; Index++)
    {
        if (List->Items[Index] == 0x13)
        {
            if (Index != -1)
                return false;
            break;
        }
    }
    Class_10BB8A30* Owner = (Class_10BB8A30*)Unknown04;
    float L = Owner->Unknown30.FUN_10bfc3a0();
    Class_10BBDB40* Value = ((Class_10BB8A30*)Unknown04)->Unknown08->FUN_10dbd510();
    float Y = Value->GetFloat(0x40100243);
    if (Y < L)
        return true;
    return false;
}
