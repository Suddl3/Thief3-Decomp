// Game/Unsorted_10A121A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/cString.h"
#include "Game/Class_10970890.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_109709F0.h"

extern const char DAT_10e4a3c0[];

class Object_10970890
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual cString Virtual2();
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
    virtual int Virtual21();
    virtual cString& Virtual22(int Index);
};

class Class_1098E330 : public AActor
{
public:
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

    int FUN_1098e330(int Id, int* Out);
    Class_10970890* FUN_10991eb0();
    int FUN_10b22000();
    int FUN_10ad2700();
    void FUN_109714c0(int A, Class_109709F0* B);

    char Pad04[0x20];
    int Unknown24;
    char Pad28[0x4];
    int Unknown2C;
    char Pad30[0x94];
    unsigned int Unknown0C4;
    char PadC8[0x2c];
    int UnknownF4;
    int UnknownF8;
    int UnknownFC;
    int Unknown100;
    int Unknown104;
    int Unknown108;
};

// FUNCTION: 0x10A12250 ?FUN_10a12250@@YGXPAVClass_1098E330@@@Z
void __stdcall FUN_10a12250(Class_1098E330* Actor)
{
    if (!Actor->FUN_10ad2700())
    {
        Class_10970890* Mgr = Actor->FUN_10991eb0();
        if (Mgr)
        {
            Object_10970890* Obj = Mgr->FUN_10970890();
            if (Obj)
            {
                Class_109709F0 Temp;
                Temp.Unknown00 = *Obj->Virtual2();
                int Index = Mgr->Unknown5C;
                if (Index == -1)
                {
                    Temp.Unknown0C = DAT_10e4a3c0;
                }
                else
                {
                    Temp.Unknown0C = *Mgr->FUN_10970890()->Virtual22(Index);
                }
                Actor->FUN_109714c0(0x80038, &Temp);
            }
        }
    }
}
