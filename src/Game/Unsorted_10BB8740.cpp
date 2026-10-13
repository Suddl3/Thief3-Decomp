// Game/Unsorted_10BB8740.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B9BCA0.h"
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10B9BCA0.h"
#include "Game/cStateStack.h"
#include "Game/Class_10BFC190.h"
#include "Game/Class_10B9CAC0.h"

class AAIPawn;

Class_10B9BCA0* GetAIPawnController(AAIPawn* Pawn);

class Class_10BB8300;

class Class_10BC9D40;

class Class_10bb8960_Result
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
};

struct Struct_10BB8960
{
    int Unknown00;
    char Unknown04[4];
    Class_10bb8960_Result** Unknown08;
};

class Class_10BB8960
{
public:
    Class_10bb8960_Result* FUN_10bb8960();

    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

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
    virtual bool Virtual53();
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

    void ResetTimer();

    Class_10BE3FF0_Field04* Unknown04;
    char Unknown08[4];
    float Unknown0C;
};

struct Struct_10BB89D0
{
    int Unknown00;
    int Unknown04;
    Class_10BE3FF0** Unknown08;
};

class Class_10BB89D0
{
public:
    Class_10BE3FF0* FUN_10bb89d0();
    void FUN_10bbc0f0(int A);

    char Unknown00[8];
    Class_10C7D570* Unknown08;
    char Unknown0C[0x24];
    Class_10BFC190 Unknown30;
    char Pad50[0x2ec];
    float Unknown33C;
    char Pad340[0x20];
};

// FUNCTION: 0x10BB8960 ?FUN_10bb8960@Class_10BB8960@@QAEPAVClass_10bb8960_Result@@XZ
Class_10bb8960_Result* Class_10BB8960::FUN_10bb8960()
{
    Class_10B9BCA0* Controller = GetAIPawnController((AAIPawn*)Unknown08->FUN_10c7d570());
    if (Controller && Controller->Unknown118 && Controller->Unknown118->Unknown08)
    {
        Struct_10BB8960* List = (Struct_10BB8960*)Controller->Unknown118->Unknown08->FUN_10aa9da0();
        for (int i = List->Unknown00 - 1; i >= 0; i--)
        {
            Class_10bb8960_Result* Item = List->Unknown08[i];
            if (Item && (Item->Virtual3() == 0x16 || List->Unknown08[i]->Virtual3() == 0x17))
                return List->Unknown08[i];
        }
    }
    return 0;
}

// FUNCTION: 0x10BB89D0 ?FUN_10bb89d0@Class_10BB89D0@@QAEPAVClass_10BE3FF0@@XZ
Class_10BE3FF0* Class_10BB89D0::FUN_10bb89d0()
{
    Class_10B9BCA0* Controller = GetAIPawnController((AAIPawn*)Unknown08->FUN_10c7d570());
    if (Controller && Controller->Unknown118 && Controller->Unknown118->Unknown08)
    {
        Struct_10BB89D0* List = (Struct_10BB89D0*)Controller->Unknown118->Unknown08->FUN_10aa9da0();
        for (int i = List->Unknown00 - 1; i >= 0; i--)
        {
            Class_10BE3FF0* Item = List->Unknown08[i];
            if (Item && Item->Virtual53())
                return List->Unknown08[i];
        }
    }
    return 0;
}
