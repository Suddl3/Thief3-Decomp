// Game/Unsorted_10B8D520.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B8C9B0.h"
#include "Game/Class_10AA82D0.h"

class Class_10B8CB20 : public Class_10B8C9B0
{
public:
    bool FUN_10b8cb20(int p1, int p2, int p3, int p4);
};

class Class_10B8D800 : public Class_10B8CB20
{
public:
    bool FUN_10b8d800(int A, int B, int C, int D);

    char Unknown0C[0xD];
    bool Unknown19;
};

class FVector;

class Class_109671D0
{
public:
    int FUN_109671d0();

    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10D9FEE0 : public Class_10AA82D0
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
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void FUN_10da03a0(int A);
    virtual void Virtual12();
    virtual void Virtual13(int A);
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void FUN_10d9fdb0();

    void FUN_10d9fee0(int A, int B);
    void FUN_10da0640(Class_109671D0* A, int B);
    void FUN_10da01b0(const FVector& A);
    void FUN_10da0710(const FVector& A);
    FVector FUN_10da00f0();
    bool FUN_10d9feb0();
    void FUN_10da07c0(const FVector& V);
    void FUN_10da0000(bool A);
    unsigned FUN_10da0400();

    char Pad04[0x4];
    int Unknown08;
};

// FUNCTION: 0x10B8D800 ?FUN_10b8d800@Class_10B8D800@@QAE_NHHHH@Z
bool Class_10B8D800::FUN_10b8d800(int A, int B, int C, int D)
{
    if (C == -1)
    {
        FUN_10b8cb20(A, B, -1, D);
    }
    else if (Unknown19)
    {
        Class_10D9FEE0* Obj = (Class_10D9FEE0*)FUN_10b8c9b0(C);
        Class_109671D0 Local;
        if (Obj)
        {
            Class_109671D0* Src = (Class_109671D0*)A;
            Local = *Src;
        }
        else
        {
            Local.Unknown00 = 0;
            Local.Unknown04 = 0;
            Local.Unknown08 = 0;
        }
        if (!Local.FUN_109671d0())
        {
            Obj->FUN_10d9fee0(1, 1);
            Obj->FUN_10da0640(&Local, B);
            return true;
        }
    }
    return false;
}
