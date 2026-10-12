// Game/Unsorted_10B30050.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_Field04.h"
#include "Game/Class_10AF7F80.h"
#include "Game/cString.h"
#include "Game/Class_10B154C0.h"

struct FColor
{
    FColor() {}
    int Unknown00;
};

void FUN_10a26c10(cString* A, cString* B);

void FUN_10a293b0(cString* A, int B);

FColor FUN_10abc760(int A);

void* FUN_10b154c0();

// FUNCTION: 0x10B30050 ?FUN_10b30050@@YGXH@Z
void __stdcall FUN_10b30050(int A)
{
    FString Name;
    ((Class_Field04*)A)->FUN_1098e290(0x401c7, &Name);
    cString Key;
    {
        cString Text(((Class_10AF7F80*)&Name)->FUN_10af7f80());
        FUN_10a26c10(&Text, &Key);
    }
    FUN_10a293b0(&Key, 1);
    ((Class_10B154C0*)FUN_10b154c0())->FUN_10b15e30(&Key, FUN_10abc760(0).Unknown00);
}
