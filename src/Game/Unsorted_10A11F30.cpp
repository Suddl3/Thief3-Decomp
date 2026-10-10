// Game/Unsorted_10A11F30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

struct Struct_10B21820_Object;

class Class_109B7A10
{
public:
    void FUN_109b7a10(FString Name);
};

Class_109B7A10* FUN_1098d000(Struct_10B21820_Object* Obj);

class Class_10B06220
{
public:
    int FUN_10b06220();
};

class Class_10B21820 : public Class_10B06220
{
public:
    int FUN_10ad19b0(int A);
    Struct_10B21820_Object* FUN_10991e10();
};

// FUNCTION: 0x10A12140 ?FUN_10a12140@@YGXPAVClass_10B21820@@ABVFString@@@Z
void __stdcall FUN_10a12140(Class_10B21820* Owner, const FString& Name)
{
    if (Owner->FUN_10b06220() == 0)
    {
        if (Owner->FUN_10ad19b0(0x4067b))
        {
            Class_109B7A10* Target = FUN_1098d000(Owner->FUN_10991e10());
            if (Target)
                Target->FUN_109b7a10(Name);
        }
    }
}
