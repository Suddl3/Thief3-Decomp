// Game/Class_10E6BBE8_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E6BBE8.h"
#include "Engine/EngineClasses.h"

class Class_1098E330
{
public:
    void FUN_1098e330(int A, int* B);
};

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
