// Game/Unsorted_10A12370.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_1098CFE0.h"
#include "Game/cIntArray.h"

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

    char Unknown00[0x18];
    int Unknown18;
    char Unknown1C[0x8];
    int Unknown24;
    char Unknown28[0x10];
    Class_109EFF30 Unknown38;
};

void* FUN_109cd110(int A, int B);

class Class_10A12370
{
public:
    void FUN_10a12370(Class_10B06220* Obj, int* Value);

    char Unknown00[0x14];
    cIntArray Unknown14;
};

// FUNCTION: 0x10A12370 ?FUN_10a12370@Class_10A12370@@QAEXPAVClass_10B06220@@PAH@Z
void Class_10A12370::FUN_10a12370(Class_10B06220* Obj, int* Value)
{
    if (Obj->FUN_10b06220())
    {
        int Handle;
        Unknown14.FindOrAdd(&Handle);
    }
    else
    {
        int Name = Obj->Unknown18;
        Obj->FUN_1098cfe0(FUN_109cd110(*Value, Name));
    }
}
