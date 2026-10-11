// Game/Class_10E89AA0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B92DB0.h"

class Class_10970890;

struct Struct_10978840
{
    FLOAT Unknown00;
    FLOAT Unknown04;
};

// Game/Class_1098E330.h copied whole, with FUN_10978840 added and Virtual44's real return type (FCoords by value).
// The AActor base is left out: its UObject slots would move Virtual44 to slot 64; accepted units number this class's slots from 0.
class Class_1098E330
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
    virtual FCoords Virtual44();
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
    int FUN_10978840(int Id, Struct_10978840* Out);
    Class_10970890* FUN_10991eb0();
    int FUN_10b22000();

    char Pad00[0x4];
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

class Class_10E89AA0
{
public:
    void FUN_10b92f40(float A, float B);
    void FUN_10da0ca0(Class_10B92DB0* A);

    char Pad00[0x4];
    Class_1098E330* Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10B92F40 ?FUN_10b92f40@Class_10E89AA0@@QAEXMM@Z
void Class_10E89AA0::FUN_10b92f40(float A, float B)
{
    Class_10B92DB0 Obj;
    Obj.FUN_10b92db0();
    if (Unknown04 != 0)
    {
        Obj.Unknown40 = 0.0f;
        Obj.Unknown30.Y = B * 0.4536f;
        if (!Unknown04->FUN_1098e330(0x1002ab, (int*)&Obj.Unknown40))
        {
            Obj.Unknown40 = 0.5f;
        }
        Obj.Unknown44 = 0.0f;
        if (!Unknown04->FUN_1098e330(0x1002ac, (int*)&Obj.Unknown44))
        {
            Obj.Unknown44 = 0.4f;
        }
        Struct_10978840 Out;
        if (Unknown04->FUN_10978840(0x8053a, &Out))
        {
            Obj.Unknown30.Z = Out.Unknown00;
            Obj.Unknown3C = Out.Unknown04;
        }
        float Value2 = 0.0f;
        if (Unknown04->FUN_1098e330(0x100604, (int*)&Value2))
        {
            Obj.Unknown30.Z = Value2;
        }
        float Value3 = 0.0f;
        if (Unknown04->FUN_1098e330(0x100605, (int*)&Value3))
        {
            Obj.Unknown3C = Value3;
        }
        Obj.Unknown00 = Unknown04->Virtual44();
    }
    Obj.Unknown30.X = A;
    Obj.Unknown48 = 2 + (Unknown08 != 0);
    FUN_10da0ca0(&Obj);
}
