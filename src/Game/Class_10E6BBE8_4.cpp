// Game/Class_10E6BBE8_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first
#include "Game/Class_1098E3D0.h"
#include "Core/Core.h"

class AActor;

class Object_10A75810_B;

class Object_10A75810_C;

UClass* FUN_109015c0();

class Class_10E6BBE8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, int C, int D);
    virtual void Virtual6();
    virtual void Virtual7(int A);
    virtual void FUN_10a75810(AActor* A, Object_10A75810_B* B, Object_10A75810_C* C);
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual int FUN_10a76490(int A, int B, int C);
    virtual void Virtual14();
    virtual void FUN_10a757b0(int A);
    virtual void FUN_10a757e0(int A);

    void FUN_10a757a0();
    void FUN_10a759b0(int A, int B);
    void FUN_10a76260(int A, int B);
    void FUN_10a76500(int A, int B, int C);
};

// FUNCTION: 0x10A76500 ?FUN_10a76500@Class_10E6BBE8@@QAEXHHH@Z
void Class_10E6BBE8::FUN_10a76500(int A, int B, int C)
{
    Class_1098E3D0* Obj = (Class_1098E3D0*)A;
    int Key;
    Obj->FUN_1098e330(0x80028b, &Key);
    if (Key != 0)
    {
        return;
    }
    int Value;
    if (!Obj->FUN_1098e330(0x20029c, &Value))
    {
        return;
    }
    Value = Value - B;
    if (Value < 0)
    {
        Value = 0;
    }
    Obj->FUN_1098e3d0(0x20029c, &Value);
    if (Value > 0)
    {
        return;
    }
    if (C == 0 || !((UObject*)C)->IsA(FUN_109015c0()))
    {
        Obj->FUN_1098e330(0x2047b, &C);
    }
    FUN_10a759b0((int)Obj, C);
}
