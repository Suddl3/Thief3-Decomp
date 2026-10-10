// Game/Unsorted_10A370F0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_1096D780;

class Class_1096D780_Field98
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
    virtual int Virtual43(Class_1096D780* A, FVector B, int C, int D, int E);
};

class Class_10D9FEE0
{
public:
    void FUN_10da07c0(const FVector& V);
};

class Class_1096D780
{
public:
    void* Get();

    char Unknown00[0x98];
    void* Field98;
    char Unknown9C[0x14];
    Class_10D9FEE0* UnknownB0;
};

// FUNCTION: 0x10A37210 ?FUN_10a37210@@YA_NPAVClass_1096D780@@PBVFVector@@@Z
bool FUN_10a37210(Class_1096D780* A, const FVector* B)
{
    bool Result = static_cast<Class_1096D780_Field98*>(A->Get())->Virtual43(A, *B, 0, 0, 0) != 0;
    if (A->UnknownB0)
    {
        A->UnknownB0->FUN_10da07c0(*B);
        Result = true;
    }
    return Result;
}
