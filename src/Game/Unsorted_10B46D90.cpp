// Game/Unsorted_10B46D90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

extern void* DAT_10e7b558[];

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E68F8C
{
public:
    virtual void Virtual0(int A, int* B, float C);

    char Unknown04[0x3C];
};

class Class_10E7B558
{
public:
    Class_10E7B558()
    {
        Unknown04 = 1.0f;
        Unknown08 = 0;
        VTable = DAT_10e7b558;
    }

    void** VTable;
    float Unknown04;
    int Unknown08;
};

class Object_10B46D90 : public Class_10E7B558
{
public:
    Class_10E68F8C Unknown0C;
};

class Class_10B46D90
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int Virtual6(void* A);
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
    virtual int Virtual39();
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
    virtual void Virtual77(void* A);

    void FUN_10b46d90();

    char Unknown04[0xC];
    int Unknown10;
    char Unknown14[0xA4];
    int Unknown0B8;
    char Unknown0BC[0x4];
    Class_10B46D90** Unknown0C0;
};

class Object_10B46E50 : public Class_10E7B558
{
public:
    Class_10E68F8C Unknown0C;
};

class Class_10B46E50
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int Virtual6(FVector* A);
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
    virtual int Virtual39();
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
    virtual void Virtual77(Object_10B46E50* A);

    void FUN_10b46e50();

    char Unknown04[0xB4];
    int Unknown0B8;
    char Unknown0BC[4];
    Class_10B46E50** Unknown0C0;
    char Unknown0C4[0x90];
    int Unknown154;
};

// FUNCTION: 0x10B46D90 ?FUN_10b46d90@Class_10B46D90@@QAEXXZ
void Class_10B46D90::FUN_10b46d90()
{
    Object_10B46D90* Obj = new(0, 0, 0, 0, 0) Object_10B46D90;
    char Buffer[12];
    int Value = Virtual6(Buffer);
    Obj->Unknown0C.Virtual0(Value, &Unknown10, 0.1f);
    Virtual77(Obj);
    for (int i = 0; i < Unknown0B8; i++)
    {
        Class_10B46D90* Elem = Unknown0C0[i];
        if (Elem && Elem->Virtual39() == 0x6c)
            Elem->FUN_10b46d90();
    }
}

// FUNCTION: 0x10B46E50 ?FUN_10b46e50@Class_10B46E50@@QAEXXZ
void Class_10B46E50::FUN_10b46e50()
{
    Object_10B46E50* Obj = new(0, 0, 0, 0, 0) Object_10B46E50;
    FVector Vector;
    int Result = Virtual6(&Vector);
    Obj->Unknown0C.Virtual0(Result, &Unknown154, 0.1f);
    Virtual77(Obj);
    for (int i = 0; i < Unknown0B8; i++)
    {
        Class_10B46E50* Item = Unknown0C0[i];
        if (Item && Item->Virtual39() == 0x6c)
            Item->FUN_10b46e50();
    }
}
