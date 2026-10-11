// Game/Unsorted_10A6FD60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_1098CFE0.h"
#include "Game/Class_10A370C0.h"
#include "Game/Class_10A707F0.h"
#include "Game/Struct_10AA3520.h"

class Class_10A671D0_Item;

class Class_10ABCC20;

class Class_109EFF30
{
public:
    FVector* FUN_109eff30(FVector* A);
};

class Class_10B06220 : public Class_1098CFE0
{
public:
    int FUN_10b06220();
    void FUN_10ada010(int Id);
    void FUN_10ad9c90(int Handle, Class_10A671D0_Item* const& Item);
    void FUN_10ad9c90(int Handle, Class_10ABCC20* const& Item);

    char Unknown00[0x24];
    int Unknown24;
    char Unknown28[0x10];
    Class_109EFF30 Unknown38;
};

class Struct_10AA3520_Unknown78
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
    virtual void Virtual21(Class_10B06220* A, int B, int C, FVector* D, int E);
};

extern Struct_10AA3520* DAT_10f35dec;

struct Struct_10A6FE10_Arg
{
    int Unknown00;
    char Unknown04[0x8];
    int Unknown0C;
};

bool FUN_10a37080(Class_10A370C0* A, FVector& B);

// FUNCTION: 0x10A6FE10 ?FUN_10a6fe10@Class_10A707F0@@QAEXPAVClass_10B06220@@HH@Z
void Class_10A707F0::FUN_10a6fe10(Class_10B06220* A, int B, int C)
{
    Class_10B06220* Other = (Class_10B06220*)B;
    if (A && Other && A->Unknown24 == Other->Unknown24)
        return;
    FVector Pos;
    FVector Out;
    if (!FUN_10a37080((Class_10A370C0*)A, Pos))
    {
        FVector Tmp;
        Pos = *A->Unknown38.FUN_109eff30(&Tmp);
    }
    {
        FVector Dir = Pos;
        Dir.Normalize();
        Out = Dir;
        Struct_10A6FE10_Arg* Arg = (Struct_10A6FE10_Arg*)C;
        DAT_10f35dec->Unknown78->Virtual21(A, B, Arg->Unknown00 + 0xc, &Out, Arg->Unknown0C);
    }
}
