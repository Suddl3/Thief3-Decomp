// Game/Unsorted_10919490.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1093E930.h"
#include "Game/Class_1093EDB0.h"
#include "Game/Class_10E4A538.h"
#include "Game/Class_10937730.h"
#include "Game/Config.h"

double FUN_10d20ec0(double A);

extern Class_10E4A538* DAT_10f2c8e4;

extern Class_1093E930* DAT_10f340ac;

extern Class_1093EDB0* DAT_10f340c0;

extern Class_10937730* DAT_10f31bdc;

extern int DAT_10efefb4;

extern int DAT_10efefb8;

extern bool DAT_10f2c8d7;

extern bool DAT_10f2c8d8;

extern bool DAT_10f2c8d9;

extern float DAT_10f2c8dc;

extern float DAT_10f2c8e0;

extern float DAT_10e49684;

extern float DAT_10eafbdc;

// FUNCTION: 0x10919490 ?FUN_10919490@@YAXXZ
void FUN_10919490()
{
    int Anisotropy;
    int Mip;
    int Tolerance;

    DAT_10efefb4 = 2;
    DAT_10efefb8 = 2;
    DAT_10f2c8d7 = false;
    DAT_10f2c8d8 = false;
    DAT_10f2c8d9 = false;

    if (Config::Instance()->FUN_10910a20("Flesh", "MaxAnisotropy", &Anisotropy, 0))
    {
        if (Anisotropy < 0 || Anisotropy > 4)
        {
            Anisotropy = 2;
        }
        DAT_10efefb4 = Anisotropy;
    }

    if (Config::Instance()->FUN_10910a20("Flesh", "MipFilter", &Mip, 0))
    {
        if (Mip < 0 || Mip > 5)
        {
            Mip = 2;
        }
        DAT_10efefb8 = Mip;
    }

    if (Config::Instance()->FUN_10910a20("Flesh", "ShadowIntensityTolerance", &Tolerance, 0))
    {
        DAT_10f2c8dc = (float)Tolerance * 0.001f;
        if (DAT_10f2c8dc > DAT_10e49684)
        {
            DAT_10f2c8dc = 1.0f;
        }
        else if (DAT_10f2c8dc < DAT_10eafbdc)
        {
            DAT_10f2c8dc = 0.0f;
        }
    }

    if (Config::Instance()->FUN_10910a20("Flesh", "LightIntensityTolerance", &Tolerance, 0))
    {
        DAT_10f2c8e0 = (float)Tolerance * 0.001f;
        if (DAT_10f2c8e0 > DAT_10e49684)
        {
            DAT_10f2c8e0 = 1.0f;
        }
        else if (DAT_10f2c8e0 < DAT_10eafbdc)
        {
            DAT_10f2c8e0 = 0.0f;
        }
    }
}

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
