// Game/Unsorted_10B15660.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B15840.h"
#include "Game/Class_10B274B0.h"
#include "Game/Class_10B274D0.h"
#include "Game/Class_10E7FB08.h"

class Class_10B274B0;

Class_10B274B0* __stdcall FUN_10b15660(int A);

// FUNCTION: 0x10B15840 ?FUN_10b15840@Class_10B15840@@QAEPAVClass_10B274B0@@HHHHHH@Z
Class_10B274B0* Class_10B15840::FUN_10b15840(int A, int B, int C, int D, int E, int F)
{
    Class_10B274B0* P = FUN_10b15660(A);
    if (P)
    {
        P->FUN_10b274b0(B);
        ((Class_10B274D0*)P)->FUN_10b274d0(C);
        P->FUN_10b27e00(D, E);
        ((Class_10E7FB08*)P)->FUN_10a5d460();
        P->Virtual7();
        P->Unknown1C8 = F;
        Virtual4(P);
    }
    return P;
}
