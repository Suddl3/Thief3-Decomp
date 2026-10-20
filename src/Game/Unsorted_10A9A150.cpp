// Game/Unsorted_10A9A150.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10A73EF0_Table.h"
#include "Game/Class_10A73EF0_Object.h"
#include "Game/Class_10AAAEB0.h"
#include "Game/Class_1098CFE0.h"

class Class_10ABCC20;

class Class_10A671D0_Item;

// GetUnknown08's class, with Class_10AAAEB0 (FUN_10aaaeb0's class) as its base.
class Class_10E6CE28 : public Class_10AAAEB0
{
public:
    int GetUnknown08();
};

class Class_109EFF30
{
public:
    FVector* FUN_109eff30(FVector* A);
};

// Class_10B06220 (include/Game/Class_10B06220.h) plus the method the call site shows.
class Class_10B06220 : public Class_1098CFE0
{
public:
    int FUN_10b06220();
    void FUN_10ada010(int Id);
    void FUN_10ad9c90(int Handle, Class_10A671D0_Item* const& Item);
    void FUN_10ad9c90(int Handle, Class_10ABCC20* const& Item);
    void FUN_10ad3df0(int Handle, int* Item, int C, int D);

    char Unknown00[0x24];
    int Unknown24;
    char Unknown28[0x10];
    Class_109EFF30 Unknown38;
};

class Class_10A9A4A0_Param3
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10E6CE28* Virtual4(int A);
};

// Class_10E6D110 (include/Game/Class_10E6D110.h) plus the methods the call sites show.
class Class_10E6D110
{
public:
    Class_10E6D110* Construct();
    int FUN_10a9a350(Class_10B06220* A, Class_10A9A4A0_Param3* B);
    void FUN_10a996f0(Class_10B06220* A, Class_10A73EF0_Object* B, int C, Class_10E6CE28* D);
    void FUN_10a999d0(Class_10ABCC20** A, int B, void* C, Class_10E6CE28* D);

    void* Unknown00;
};

extern UClass* DAT_10f3eda0;

Class_10A73EF0_Table* FUN_10af3470();

UClass* FUN_10af1d40(const char* A);

void FUN_10aef840();

void* FUN_10a9a150(Class_10A73EF0_Object* A, void* B, int* C);

// FUNCTION: 0x10A9A350 ?FUN_10a9a350@Class_10E6D110@@QAEHPAVClass_10B06220@@PAVClass_10A9A4A0_Param3@@@Z
int Class_10E6D110::FUN_10a9a350(Class_10B06220* A, Class_10A9A4A0_Param3* B)
{
    Class_10E6CE28* V = B->Virtual4(0);
    Class_10A73EF0_Object* Obj = FUN_10af3470()->FUN_10af33e0(V->GetUnknown08());
    if (!DAT_10f3eda0)
    {
        DAT_10f3eda0 = FUN_10af1d40("Core");
        FUN_10aef840();
    }
    if (((UObject*)Obj)->IsA(DAT_10f3eda0))
    {
        int Handle = 0;
        void* Result = FUN_10a9a150(Obj, V->FUN_10aaaeb0(), &Handle);
        int Item = 0;
        A->FUN_10ad3df0(V->GetUnknown08(), &Item, 0, 1);
        Class_10ABCC20* P = 0;
        P = (Class_10ABCC20*)Obj->Virtual51();
        if (Item)
            Obj->Virtual45(P, Item, 0);
        FUN_10a999d0(&P, Handle, Result, B->Virtual4(1));
        A->FUN_10ad9c90(V->GetUnknown08(), P);
        return 1;
    }
    FUN_10a996f0(A, Obj, V->GetUnknown08(), B->Virtual4(1));
    return 1;
}
