// Game/Unsorted_10C08130.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BA9FD0.h"
#include "Game/Class_10BAA6F0.h"
#include "Game/Class_10BABED0.h"
#include "Game/Class_10BB7670.h"
#include "Game/Class_10BB89D0.h"

class Class_10BE3FF0_Field04;

class Class_10BE3FF0
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
    virtual float Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual void Virtual74();
    virtual bool Virtual75();

    virtual void Virtual76();
    virtual void Virtual77();
    virtual void Virtual78();
    virtual void Virtual79();
    virtual float Virtual80();

    void ResetTimer();
    void FUN_10be7ae0();

    Class_10BE3FF0_Field04* Unknown04;
    char Unknown08[4];
    float Unknown0C;
};

class Class_10BAA6B0_Param;

Class_10BABED0* FUN_10baa6b0(Class_10BAA6B0_Param* Object);

double GetTimeSeconds();

class Class_10C083C0
{
public:
    float FUN_10c083c0();
    int Count;
    int Unknown04;
    Class_10BAA6B0_Param** Data;
    int Unknown0C;
    int Unknown10;
    float Unknown14;
    float Unknown18;
};

// FUNCTION: 0x10C083C0 ?FUN_10c083c0@Class_10C083C0@@QAEMXZ
float Class_10C083C0::FUN_10c083c0()
{
    if (GetTimeSeconds() - Unknown14 < (double)0.1f)
        return Unknown18;
    Unknown14 = (float)GetTimeSeconds();
    float Maximum = 0.0f;
    for (int Index = 0; Index < Count; ++Index)
    {
        if (Data[Index])
        {
            Class_10BABED0* Object = FUN_10baa6b0(Data[Index]);
            if (Object && ((Class_10BB7670*)((Class_10BA9FD0*)Object)->FUN_10ba9fd0())->FUN_10bb7670())
            {
                Class_10BE3FF0* State = ((Class_10BB89D0*)((Class_10BAA6F0*)Object)->FUN_10baa6f0())->FUN_10bb89d0();
                if (State)
                {
                    float Value = State->Virtual80();
                    if (Value > Maximum)
                        Maximum = Value;
                }
            }
        }
    }
    Unknown18 = Maximum;
    return Maximum;
}
