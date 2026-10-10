// Game/Unsorted_10BB9600.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A2C2F0.h"
#include "Game/Class_10BB9FC0.h"
#include "Game/Class_10BBB410.h"
#include "Game/Class_10C7D570.h"

Class_10A2C2F0* FUN_10a2c6b0();

// FUNCTION: 0x10BB9F60 ?FUN_10bb9f60@Class_10BBB410@@QAEXHH@Z
void Class_10BBB410::FUN_10bb9f60(int A, int B)
{
    FUN_10bb9e90();
    if (Unknown284)
    {
        if (!FUN_10a2c6b0()->FUN_10a2c500(Unknown08->FUN_10c7d570(), &Unknown284))
        {
            Class_10C7D570* Item = Unknown08;
            FUN_10a2c6b0()->FUN_10a2daa0(Item->FUN_10c7d570(), A, &Unknown284, B);
        }
    }
}
