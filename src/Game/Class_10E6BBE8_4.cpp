// Game/Class_10E6BBE8_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
// Declarations first
#include "Game/Class_1098E3D0.h"
#include "Core/Core.h"
#include "Game/Class_10E6BBE8.h"

class AActor;

class Object_10A75810_B;

class Object_10A75810_C;

UClass* FUN_109015c0();

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
