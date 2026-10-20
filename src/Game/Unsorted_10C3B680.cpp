// Game/Unsorted_10C3B680.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"
#include "Game/Class_10E5CBD8.h"
#include "Game/Class_10BA9F20.h"
#include "Game/Class_10978090.h"
#include "Game/Struct_10BA9F20.h"
#include "Game/Struct_10BA9EF0.h"

struct Struct_10C3CAC0
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

float FUN_10a4aa80(int A, int B, float C, float D);

void FUN_10c3cac0(Struct_10C3CAC0* Out, const Struct_10BA9EF0& A, const Struct_10BA9F20& B, int Y);

extern float DAT_10eafbdc;

extern float DAT_10e49684;

// FUNCTION: 0x10C3C9A0 ?FUN_10c3c9a0@@YAMMMMMM@Z
float FUN_10c3c9a0(float A, float B, float C, float D, float E)
{
    if (A < DAT_10eafbdc)
        A = DAT_10eafbdc;
    else if (A > DAT_10e49684)
        A = DAT_10e49684;
    if (B < DAT_10eafbdc)
        B = DAT_10eafbdc;
    else if (B > DAT_10e49684)
        B = DAT_10e49684;
    if (C < DAT_10eafbdc)
        C = DAT_10eafbdc;
    else if (C > DAT_10e49684)
        C = DAT_10e49684;
    if (D < DAT_10eafbdc)
        D = DAT_10eafbdc;
    else if (D > DAT_10e49684)
        D = DAT_10e49684;
    if (E < DAT_10eafbdc)
        E = DAT_10eafbdc;
    else if (E > DAT_10e49684)
        E = DAT_10e49684;
    float Result = A * B;
    Result = Result * E;
    Result = Result * D;
    Result = Result * C;
    if (Result < DAT_10eafbdc)
        Result = DAT_10eafbdc;
    return Result;
}

// FUNCTION: 0x10C3CB40 ?FUN_10c3cb40@@YAMPAMPAVClass_10E5CBD8@@H@Z
float FUN_10c3cb40(float* Out, Class_10E5CBD8* Obj, int Y)
{
    if (Obj->FUN_10dbd510()->FUN_10bbdad0(0x4010039c) == 1.0f)
        return Obj->FUN_10dbd510()->FUN_10bbdad0(0x4010039c);
    Struct_10C3CAC0 Pair;
    FUN_10c3cac0(&Pair, Obj->FUN_10ba9ef0(), ((Class_10BA9F20*)Obj)->FUN_10ba9f20(), Y);
    if (Pair.Unknown04 > 0x7fff)
        Pair.Unknown04 = 0xffff - Pair.Unknown04;
    float Scaled = (float)Pair.Unknown04 * 0.005493298f;
    *Out = Scaled;
    return FUN_10a4aa80((int)((Class_10978090*)Obj->FUN_10dbd510())->FUN_10978090(), 0x4000549, Scaled, 1.0f);
}
