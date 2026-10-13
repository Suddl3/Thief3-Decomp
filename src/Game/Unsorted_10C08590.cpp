// Game/Unsorted_10C08590.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10BB7670.h"
#include "Game/Class_10BFD210.h"
#include "Game/Class_10BBDB40.h"

double GetTimeSeconds();

class Class_10BAA6B0_Param
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
};

class Class_10C08590_Owner
{
public:
    char Pad00[0x30];
    Class_10BFD210 Unknown30;
};

class Class_10BABED0
{
public:
    Class_10BB7670* FUN_10ba9fd0();
    Class_10C08590_Owner* FUN_10baa6f0();
    Class_10BBDB40* FUN_10dbd510(int Id);
};

Class_10BABED0* FUN_10baa6b0(Class_10BAA6B0_Param* Param);

class Class_10C08590 : public cIntArray
{
public:
    bool FUN_10c08590();

    float LastTime;
    bool LastResult;
};

// FUNCTION: 0x10C08590 ?FUN_10c08590@Class_10C08590@@QAE_NXZ
bool Class_10C08590::FUN_10c08590()
{
    if (GetTimeSeconds() - LastTime < 0.1f)
        return LastResult;
    LastTime = (float)GetTimeSeconds();
    for (int i = 0; i < Count; i++)
    {
        Class_10BAA6B0_Param* Item = (Class_10BAA6B0_Param*)Data[i];
        if (!Item)
            continue;
        if (Item->Virtual85())
        {
            int Value = Data[i];
            int Index = FindIndex(Value);
            if (Index != -1)
                RemoveAt(Index);
            i--;
        }
        else
        {
            Class_10BABED0* Obj = FUN_10baa6b0((Class_10BAA6B0_Param*)Data[i]);
            if (Obj)
            {
                Class_10BB7670* Node = Obj->FUN_10ba9fd0();
                if (Node->FUN_10bb7670())
                {
                    Class_10C08590_Owner* Owner = Obj->FUN_10baa6f0();
                    float L = Owner->Unknown30.FUN_10bfc3a0();
                    float Y = Obj->FUN_10dbd510(0x40100577)->GetFloat();
                    if (Y < L)
                    {
                        LastResult = false;
                        return false;
                    }
                }
            }
        }
    }
    LastResult = true;
    return true;
}
