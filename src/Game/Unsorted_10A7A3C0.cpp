// Game/Unsorted_10A7A3C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10AF7F80 : public FString
{
public:
    const char* FUN_10af7f80();
};

class AActor
{
    DECLARE_CLASS(AActor, UObject, 0x800, Engine)
};

int FUN_10977fa0(int Unknown);

class Class_10E6BD90
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
    virtual void Virtual17(int A, int B);
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void FUN_10a7a920(UObject* Obj, int Unknown04, int Unknown08);
};

// FUNCTION: 0x10A7A770 ?FUN_10a7a770@@YG?AVFString@@PAVClass_10AF7F80@@PAH@Z
FString __stdcall FUN_10a7a770(Class_10AF7F80* Src, int* Pos)
{
    char Buf[128];
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

// FUNCTION: 0x10A7A920 ?FUN_10a7a920@Class_10E6BD90@@UAEXPAVUObject@@HH@Z
void Class_10E6BD90::FUN_10a7a920(UObject* Obj, int Unknown04, int Unknown08)
{
    if (Obj && Obj->Class->ClassDefaultObject != Obj && Obj->IsA(AActor::StaticClass()))
    {
        int Result = FUN_10977fa0((int)Obj);
        Virtual17(Result, 0);
    }
}
