// Game/Unsorted_10A6FF60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/Class_10A707F0.h"
#include "Game/Class_10B06220.h"
#include "Game/cString.h"
#include "Game/Class_1091CA00.h"
#include "Game/Class_1091DEE0.h"
#include "Core/Core.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Struct_10ABC6F0.h"
#include "Game/Class_10A701F0.h"
#include "Game/Class_10B37FE0_Unknown04.h"
#include "Game/Class_10B37FE0_Unknown04_Unknown460.h"
#include "Game/Class_10B37FE0_Unknown0B4.h"
#include "Game/Struct_10978840.h"

extern Class_1091DEE0* DAT_10f2c928;

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10A701F0 ?FUN_10a701f0@Class_10A701F0@@QAEX_N@Z
void Class_10A701F0::FUN_10a701f0(bool Flag)
{
    Unknown04 = Flag;
    if (!Flag && Unknown10 != -1)
    {
        Class_1091CA00* Font;
        {
            cString Name("font10");
            Font = DAT_10f2c928->FUN_1091dc40(Name);
        }
        Font->FUN_1091ca00(Unknown10);
        Unknown10 = -1;
    }
}

// FUNCTION: 0x10A705E0 ?FUN_10a705e0@@YGXPAVClass_10B37FE0_Unknown04_Unknown460@@PAVClass_10B37FE0_Unknown04@@@Z
void __stdcall FUN_10a705e0(Class_10B37FE0_Unknown04_Unknown460* A, Class_10B37FE0_Unknown04* B)
{
    if (A && B)
    {
        Struct_10978840 Out;
        if (B->FUN_10978840(0x80861, &Out))
        {
            Struct_10ABC6F0 S;
            S.Unknown00 = Out.Unknown00;
            S.Unknown04 = A->Unknown2C - B->Unknown2C;
            S.Unknown04.Normalize();
            S.Unknown10 = B->Unknown2C;
            S.Unknown1C = Out.Unknown04;
            S.Unknown1D = 0;
            S.Unknown20 = -1;
            DAT_10f35dec->Unknown0B4->Virtual5(A, B, &S, 0);
        }
    }
}
