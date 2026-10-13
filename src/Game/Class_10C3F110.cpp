// Game/Class_10C3F110.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C3F110.h"
#include "Game/CadenceManager.h"
#include "Game/Class_10C3FF10.h"

// FUNCTION: 0x10C3F110 ?FUN_10c3f110@Class_10C3F110@@QAEHH@Z
int Class_10C3F110::FUN_10c3f110(int p1)
{
    return Unknown2C[p1];
}

// FUNCTION: 0x10C3F120 ?FUN_10c3f120@Class_10C3F110@@QAEXHM@Z
void Class_10C3F110::FUN_10c3f120(int Index, float Value)
{
    Unknown2C[Index] = (int)(Value * 100.0f);
}
