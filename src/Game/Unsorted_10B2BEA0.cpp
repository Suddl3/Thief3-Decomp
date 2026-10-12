// Game/Unsorted_10B2BEA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10B2BC90_Unknown.h"
#include "Game/Class_10E68F8C.h"

extern void* DAT_10e7b558[];

extern float DAT_10e49684;

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

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

class Object_10B2BF10 : public Class_10E7B558
{
public:
    Class_10E68F8C Unknown0C;
};

class Class_10B2BF10_Param0
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
    virtual void Virtual56(int A);
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
    virtual void Virtual77(Class_10E7B558* A);
};

class Class_10A52EE0
{
public:
    Class_10B2BC90_Unknown* GetItem(int Index);
    void FUN_10b2bf10(Class_10B2BF10_Param0* Target, int Index, int Unknown);

    char Unknown00[0xB8];
    int m_Count;
    char UnknownBC[4];
    int* m_Items;
    char UnknownC4[0x58];
    int Unknown11C;
    char Unknown120[8];
    int Unknown128[1];
};

// FUNCTION: 0x10B2BF10 ?FUN_10b2bf10@Class_10A52EE0@@QAEXPAVClass_10B2BF10_Param0@@HH@Z
void Class_10A52EE0::FUN_10b2bf10(Class_10B2BF10_Param0* Target, int Index, int Unknown)
{
    Object_10B2BF10* Obj = new(0, 0, 0, 0, 0) Object_10B2BF10;
    char Buffer[12];
    FVector Vector;
    Class_10B2BC90_Unknown* Elem = GetItem(Unknown128[Index]);
    if (Elem)
        Vector = *Elem->Virtual8();
    else
    {
        Vector.X = 0.0f;
        Vector.Y = 0.0f;
        Vector.Z = 0.0f;
    }
    int Result = Target->Virtual6(Buffer);
    Obj->Unknown0C.Virtual0(Result, &Vector, 0.35f);
    float Scale;
    if (Unknown11C == 0)
        Scale = DAT_10e49684;
    else
    {
        if (Unknown11C < 0)
            Scale = (float)(1 - Unknown11C);
        else
            Scale = (float)(Unknown11C + 1);
        if (Scale > 6.0f)
            Scale = 6.0f;
    }
    Obj->Unknown04 = Scale;
    Target->Virtual77(Obj);
    Target->Virtual56(1);
}
