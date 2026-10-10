// Game/Unsorted_1093EDB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

struct Struct_10940180
{
    char Unknown00[0x64];
    int Unknown64;
};

class Class_10940180
{
public:
    void FUN_10940180(Struct_10940180* P);
    void FUN_1093fed0(Struct_10940180* P);
    void FUN_1093ff60(Struct_10940180* P);
};

class Class_109418E0
{
public:
    void FUN_109418e0();

    char Unknown00[6];
    char Unknown06;
    char Unknown07[0x31];
    int Unknown38;
};

class Class_10941C40
{
public:
    void FUN_10941b10(int A);
    void FUN_10941c40();

    char Unknown00[0x10];
    int Unknown10;
    char Unknown14[8];
    Class_109418E0* Unknown1C;
};

class Class_10951730
{
public:
    void FUN_10951730(int p1);
};

class Class_10E4A668
{
public:
    virtual void Virtual0();
    virtual void FUN_10942030(int p1);

    char Unknown04[0xAC];
    Class_10951730* UnknownB0;
};

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
};

Class_10905A90_Member* FUN_10905aa0();

class Class_1093EFB0
{
public:
    void FUN_1093ee90(int A);
    void FUN_1093efb0();

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

class IDirect3DDevice8
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
    virtual int __stdcall Virtual3();
    virtual int __stdcall Virtual4();
    virtual int __stdcall Virtual5();
    virtual int __stdcall Virtual6();
    virtual int __stdcall Virtual7();
    virtual int __stdcall Virtual8();
    virtual int __stdcall Virtual9();
    virtual int __stdcall Virtual10();
    virtual int __stdcall Virtual11();
    virtual int __stdcall Virtual12();
    virtual int __stdcall Virtual13();
    virtual int __stdcall Virtual14();
    virtual int __stdcall Virtual15();
    virtual int __stdcall Virtual16();
    virtual int __stdcall Virtual17();
    virtual int __stdcall Virtual18();
    virtual int __stdcall Virtual19();
    virtual int __stdcall Virtual20();
    virtual int __stdcall Virtual21();
    virtual int __stdcall Virtual22();
    virtual int __stdcall Virtual23();
    virtual int __stdcall Virtual24();
    virtual int __stdcall Virtual25();
    virtual int __stdcall Virtual26();
    virtual int __stdcall Virtual27();
    virtual int __stdcall Virtual28();
    virtual int __stdcall Virtual29();
    virtual int __stdcall Virtual30();
    virtual int __stdcall Virtual31();
    virtual int __stdcall Virtual32();
    virtual int __stdcall Virtual33();
    virtual int __stdcall Virtual34();
    virtual int __stdcall Virtual35();
    virtual int __stdcall Virtual36();
    virtual int __stdcall Virtual37();
    virtual int __stdcall Virtual38();
    virtual int __stdcall Virtual39();
    virtual int __stdcall Virtual40();
    virtual int __stdcall Virtual41();
    virtual int __stdcall Virtual42();
    virtual int __stdcall Virtual43();
    virtual int __stdcall Virtual44();
    virtual int __stdcall Virtual45();
    virtual int __stdcall Virtual46();
    virtual int __stdcall Virtual47();
    virtual int __stdcall Virtual48();
    virtual int __stdcall Virtual49();
    virtual int __stdcall Virtual50();
    virtual int __stdcall Virtual51();
    virtual int __stdcall Virtual52();
    virtual int __stdcall Virtual53();
    virtual int __stdcall Virtual54();
    virtual int __stdcall Virtual55();
    virtual int __stdcall Virtual56();
    virtual int __stdcall Virtual57();
    virtual int __stdcall Virtual58();
    virtual int __stdcall Virtual59();
    virtual int __stdcall Virtual60();
    virtual int __stdcall Virtual61();
    virtual int __stdcall Virtual62();
    virtual int __stdcall Virtual63();
    virtual int __stdcall Virtual64();
    virtual int __stdcall Virtual65();
    virtual int __stdcall Virtual66();
    virtual int __stdcall Virtual67();
    virtual int __stdcall Virtual68();
    virtual int __stdcall Virtual69();
    virtual int __stdcall Virtual70();
    virtual int __stdcall Virtual71();
    virtual int __stdcall Virtual72();
    virtual int __stdcall Virtual73();
    virtual int __stdcall Virtual74();
    virtual int __stdcall Virtual75();
    virtual int __stdcall Virtual76();
    virtual int __stdcall Virtual77();
    virtual int __stdcall Virtual78(int Handle);
    virtual int __stdcall Virtual79();
    virtual int __stdcall Virtual80();
    virtual int __stdcall Virtual81();
    virtual int __stdcall Virtual82();
    virtual int __stdcall Virtual83();
    virtual int __stdcall Virtual84();
    virtual int __stdcall Virtual85();
    virtual int __stdcall Virtual86();
    virtual int __stdcall Virtual87();
    virtual int __stdcall Virtual88();
    virtual int __stdcall Virtual89();
    virtual int __stdcall Virtual90(int Handle);
};

extern IDirect3DDevice8* GDirect3DDevice8;

class Class_1093EDB0_Element
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

class Class_1093EDB0
{
public:
    bool FUN_1093edb0();

    int Unknown00;
    int Unknown04;
    Class_1093EDB0_Element* Unknown08;
};

class Class_109081E0
{
public:
    void FUN_10907870(int Length, int Flag);

    char* Unknown00;
};

// FUNCTION: 0x1093EDB0 ?FUN_1093edb0@Class_1093EDB0@@QAE_NXZ
bool Class_1093EDB0::FUN_1093edb0()
{
    int Count = Unknown00;
    for (int i = 0; i < Count; i++)
    {
        if (Unknown08[i].Unknown04)
        {
            if (Unknown08[i].Unknown08 == 0)
                GDirect3DDevice8->Virtual78(Unknown08[i].Unknown04);
            else
                GDirect3DDevice8->Virtual90(Unknown08[i].Unknown04);
            Unknown08[i].Unknown04 = 0;
        }
    }
    return true;
}

// FUNCTION: 0x1093EE10 ?FUN_1093ee10@@YAXPAVClass_109081E0@@PBDZZ
void FUN_1093ee10(Class_109081E0* Out, const char* Format, ...)
{
    char Buffer[0x1000];
    if (Format)
    {
        va_list Args;
        va_start(Args, Format);
        _vsnprintf(Buffer, 0x1000, Format, Args);
        int Length = strlen(Buffer);
        if (Length)
        {
            Out->FUN_10907870(Length, 0);
            strcpy(Out->Unknown00, Buffer);
        }
    }
}

// FUNCTION: 0x1093EFB0 ?FUN_1093efb0@Class_1093EFB0@@QAEXXZ
void Class_1093EFB0::FUN_1093efb0()
{
    FUN_1093ee90(0);
    if (Unknown04)
    {
        FUN_10905aa0()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10940180 ?FUN_10940180@Class_10940180@@QAEXPAUStruct_10940180@@@Z
void Class_10940180::FUN_10940180(Struct_10940180* P)
{
    switch (P->Unknown64)
    {
    case 4:
        FUN_1093fed0(P);
        break;
    case 5:
        FUN_1093ff60(P);
        break;
    }
}

// FUNCTION: 0x10941C40 ?FUN_10941c40@Class_10941C40@@QAEXXZ
void Class_10941C40::FUN_10941c40()
{
    if (Unknown1C == 0)
        FUN_10941b10(0);
    int Value = Unknown10;
    Class_109418E0* Item = Unknown1C;
    Item->Unknown06 = 0;
    Item->Unknown38 = Value;
    Item->FUN_109418e0();
}

// FUNCTION: 0x10942030 ?FUN_10942030@Class_10E4A668@@UAEXH@Z
void Class_10E4A668::FUN_10942030(int p1)
{
    if (UnknownB0)
        UnknownB0->FUN_10951730(p1);
}
