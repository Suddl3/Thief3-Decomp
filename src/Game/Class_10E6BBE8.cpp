// Game/Class_10E6BBE8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E6BBE8.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_1098E330.h"
// Declarations first
#include "Game/Class_1098E3D0.h"
#include "Core/Core.h"

class Class_10E6BBE8;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6BBE8* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

UClass* FUN_109015c0();

// FUNCTION: 0x10A757B0 ?FUN_10a757b0@Class_10E6BBE8@@UAEXH@Z
void Class_10E6BBE8::FUN_10a757b0(int A)
{
    Virtual5(A, 0, 1, 0);
    DAT_10f46da0->Virtual1(this, 0x20, A, -1);
}

// FUNCTION: 0x10A76490 ?FUN_10a76490@Class_10E6BBE8@@UAEHHHH@Z
int Class_10E6BBE8::FUN_10a76490(int A, int B, int C)
{
    Class_1098E330* Obj = (Class_1098E330*)A;
    int Key;
    int Local;
    Obj->FUN_1098e330(0x80028b, &Key);
    if (Key != 0)
    {
        ((APawn*)Obj)->FUN_10a6ea30(0x80028b, 0);
        Obj->FUN_1098e330(0x2047b, &Local);
        FUN_10a759b0((int)Obj, Local);
        return 1;
    }
    FUN_10a76260((int)Obj, 0);
    return 1;
}

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

// FUNCTION: 0x10A765B0 ?FUN_10a765b0@Class_10E6BBE8@@QAEXHH@Z
void Class_10E6BBE8::FUN_10a765b0(int A, int B)
{
    Class_1098E3D0* Obj = (Class_1098E3D0*)A;
    int Key;
    Obj->FUN_1098e330(0x80028b, &Key);
    if (Key != 0)
    {
        int Value;
        if (Obj->FUN_1098e330(0x20029d, &Value))
        {
            Value = Value - B;
            if (Value < 0)
                Value = 0;
            Obj->FUN_1098e3d0(0x20029d, &Value);
            if (Value <= 0)
                FUN_10a76260(A, 0);
        }
    }
}
