// Game/Unsorted_10BF8CC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10AF7F80.h"

class Object_10BF9030
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

    char Unknown04[0x74];
    int Unknown78;
};

class Class_10BF8F60_Item;

class Class_10BF8F60_Virtual93
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
    virtual int Virtual14();
    virtual void Virtual15();
    virtual Class_10BF8F60_Item* Virtual16(int Index);
};

class Class_10BF8F60_UnknownC0
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
    virtual Class_10BF8F60_Virtual93* Virtual93();
};

class Class_10BF8F60_Unknown10
{
public:
    char Unknown00[0xC0];
    Class_10BF8F60_UnknownC0* UnknownC0;
};

class Class_10BF8F60
{
public:
    Class_10BF8F60_Item* FUN_10bf8f60();

    char Unknown00[0x10];
    Class_10BF8F60_Unknown10* Unknown10;
};

// FUNCTION: 0x10BF8F60 ?FUN_10bf8f60@Class_10BF8F60@@QAEPAVClass_10BF8F60_Item@@XZ
Class_10BF8F60_Item* Class_10BF8F60::FUN_10bf8f60()
{
    Class_10BF8F60_Virtual93* Items = Unknown10->UnknownC0->Virtual93();
    if (!Items)
        return 0;
    for (int i = 0; i < Items->Virtual14(); i++)
    {
        Class_10BF8F60_Item* Item = Items->Virtual16(i);
        if (Item)
            return Item;
    }
    return 0;
}

// FUNCTION: 0x10BF8FB0 ?FUN_10bf8fb0@@YA?AVFString@@PAVClass_10AF7F80@@PAH@Z
FString FUN_10bf8fb0(Class_10AF7F80* Src, int* Pos)
{
    char Buf[1024];
    int Count = 0;
    const char* Text = Src->FUN_10af7f80();
    while (*Pos < Src->Len())
    {
        char C = Text[*Pos];
        if (C == '|')
            break;
        Buf[Count] = C;
        Count++;
        (*Pos)++;
    }
    (*Pos)++;
    Buf[Count] = 0;
    return FString(Buf);
}

// FUNCTION: 0x10BF9030 ?FUN_10bf9030@@YA_NPAVObject_10BF9030@@@Z
bool FUN_10bf9030(Object_10BF9030* Obj)
{
    if (Obj && (Obj->Unknown78 & 4))
        return Obj->Virtual34();
    return false;
}
