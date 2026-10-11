// Game/Unsorted_10A9E4E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_1096D780.h"

class ULevel;

class AAIPathPoint;

int FUN_10a48b30(int A, int B);

void FUN_10a4a160(int A, int B, int C, int D);

AAIPathPoint* FUN_10a49f00(ULevel* Level, UClass* Class, int C, int D, FVector E, FVector F, FRotator G,
                           FRotator H, bool I);

class Class_10A9E4E0_Param
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
    virtual Class_1096D780* Virtual8();
};

// FUNCTION: 0x10A9E4E0 ?FUN_10a9e4e0@@YGXPAVUClass@@HHPAVClass_10A9E4E0_Param@@@Z
void __stdcall FUN_10a9e4e0(UClass* Class, int B, int C, Class_10A9E4E0_Param* P)
{
    if (B && Class)
    {
        if (FUN_10a48b30(B, C) != -1)
        {
            FVector Lc;
            FRotator L18;
            FUN_10a4a160(B, C, (int)&Lc, (int)&L18);
            if (P->Virtual8()->Get())
            {
                FUN_10a49f00((ULevel*)P->Virtual8()->Get(), Class, 1, 0, Lc, FVector(0, 0, 0), L18,
                             FRotator(0, 0, 0), false);
            }
        }
    }
}
