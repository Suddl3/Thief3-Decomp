// Game/Unsorted_10919490.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1093E930.h"
#include "Game/Class_1093EDB0.h"
#include "Game/Class_10E4A538.h"
#include "Game/Class_10937730.h"

double FUN_10d20ec0(double A);

extern Class_10E4A538* DAT_10f2c8e4;

extern Class_1093E930* DAT_10f340ac;

extern Class_1093EDB0* DAT_10f340c0;

extern Class_10937730* DAT_10f31bdc;

// FUNCTION: 0x10919610 ?FUN_10919610@@YAXXZ
void FUN_10919610()
{
    if (DAT_10f2c8e4)
        DAT_10f2c8e4->Virtual2();
    DAT_10f340ac->Release();
    DAT_10f340c0->DeleteShaders();
    DAT_10f31bdc->FUN_10937730();
}

// FUNCTION: 0x10919B10 ?FUN_10919b10@@YAMM@Z
float FUN_10919b10(float A)
{
    int I = (int)(A * 100.0f);
    return FUN_10d20ec0((float)I * 0.01f);
}
