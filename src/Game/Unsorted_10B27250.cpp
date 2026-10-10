// Game/Unsorted_10B27250.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A55050.h"
#include "Game/Class_10B27450.h"
#include "Game/Class_10B274B0.h"
#include "Game/Class_10B274D0.h"
#include "Game/Class_10E684A8.h"

// FUNCTION: 0x10B27450 ?FUN_10b27450@Class_10B27450@@QAEXHH@Z
void Class_10B27450::FUN_10b27450(int A, int B)
{
    if (Unknown1D0)
    {
        Unknown1D0->FUN_10a55780(A);
        if (!Virtual58())
        {
            Unknown1D0->FUN_10a55050(0xff);
            Unknown1D0->Virtual86(0, 2.0f, 0, 255.0f, B);
        }
    }
}

// FUNCTION: 0x10B274B0 ?FUN_10b274b0@Class_10B274B0@@QAEXH@Z
void Class_10B274B0::FUN_10b274b0(int p1)
{
    if (Unknown1D0)
        Unknown1D0->FUN_10a556f0(p1);
}

// FUNCTION: 0x10B274D0 ?FUN_10b274d0@Class_10B274D0@@QAEXH@Z
void Class_10B274D0::FUN_10b274d0(int p1)
{
    if (Unknown1D4)
        Unknown1D4->FUN_10a556f0(p1);
}
