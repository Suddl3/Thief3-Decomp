// Game/Class_10B47AB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B47AB0.h"
#include "Game/Class_10EC0E20.h"
#include "Game/Class_10B473D0.h"
#include "Game/Class_10AAB5C0.h"
#include "Game/cIntArray.h"
#include "Game/Class_10B3A460.h"

Class_10B3A460* GetEntries();

// FUNCTION: 0x10B47850 ?FUN_10b47850@Class_10B47AB0@@QAEXHHMHHH@Z
void Class_10B47AB0::FUN_10b47850(int A, int B, float C, int D, int E, int F)
{
    Unknown08->FUN_10b7ac80(0);
    Unknown08->Reset();
    Unknown08->FUN_10b7ab80(A, C);
    Unknown08->FUN_10b7abb0(0x3f800000);
    Unknown08->FUN_10b7b460(D, E, 0, F);
    Unknown08->FUN_10b7b610(B, F);
    if (GetEntries()->GetEntry(((Class_10AAB5C0*)Unknown08)->GetUnknown08())->Pad01[0])
    {
        ((Class_10B473D0*)this)->FUN_10b473d0();
    }
}
