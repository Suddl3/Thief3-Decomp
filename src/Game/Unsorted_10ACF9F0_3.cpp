// Game/Unsorted_10ACF9F0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_Field04.h"

extern const char DAT_10e47660[];

// FUNCTION: 0x10ACFA80 ?FUN_10acfa80@@YG?AVFString@@PAVClass_Field04@@@Z
FString __stdcall FUN_10acfa80(Class_Field04* Field)
{
    FString Name(DAT_10e47660);
    Field->FUN_1098e290(0x40183, &Name);
    return Name;
}
