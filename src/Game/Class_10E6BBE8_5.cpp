// Game/Class_10E6BBE8_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1098E3D0.h"
#include "Game/Class_10E6BBE8.h"

class AActor;

class Object_10A75810_B;

class Object_10A75810_C;

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
