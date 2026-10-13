// Game/Unsorted_10C1A170_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10C05A80.h"
#include "Game/Class_10C1A170_Arg.h"

class Class_10970890;

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
    virtual int Virtual34();
    virtual int Virtual35();
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

    int FUN_1098e330(int Id, int* Out);
    Class_10970890* FUN_10991eb0();
    int FUN_10b22000();

    char Pad04[0x18];
    int Unknown1C;
    char Pad20[0x4];
    int Unknown24;
    char Pad28[0x4];
    Struct_10C05A80 Unknown2C;
    char Pad38[0x88];
    int Unknown0C0;
    unsigned int m_Flags;
    char PadC8[0x2c];
    int UnknownF4;
    int UnknownF8;
    int UnknownFC;
    int Unknown100;
    int Unknown104;
    int Unknown108;
};

class Class_10C1A170_Filter
{
public:
    virtual bool Virtual0(Class_1098E330* Actor);
};

float DistanceSquared3D(const Struct_10C05A80* A, const Struct_10C05A80* B);

float FUN_109675f0(float Value);

extern float DAT_10eafbdc;

// FUNCTION: 0x10C1A170 ?FUN_10c1a170@@YA_NPAVClass_10C1A170_Arg@@PAUStruct_10C05A80@@MPAVClass_10C1A170_Filter@@M@Z
bool FUN_10c1a170(Class_10C1A170_Arg* Arg, Struct_10C05A80* Pos, float Radius, Class_10C1A170_Filter* Filter, float Dist)
{
    if (!Arg->Unknown0C0)
        return false;
    if (Arg->Unknown1C & 0x800000)
        return false;
    if (Arg->Unknown0C0->Unknown1C & 0x800000)
        return false;
    if (!Arg->Unknown0C0->Unknown0C0 || Arg->Unknown0C0->Virtual34())
        return false;
    int Value = 0;
    if (Arg->Unknown0C0->Virtual35() == 0 && Arg->Unknown0C0->FUN_1098e330(0x40800056, &Value) && Value)
        return false;
    if (DistanceSquared3D(Pos, &Arg->Unknown0C0->Unknown2C) > Radius)
        return false;
    if (Dist != DAT_10eafbdc && FUN_109675f0(Arg->Unknown0C0->Unknown2C.Unknown08 - Pos->Unknown08) > Dist)
        return false;
    if (Filter && !Filter->Virtual0(Arg->Unknown0C0))
        return false;
    return true;
}
