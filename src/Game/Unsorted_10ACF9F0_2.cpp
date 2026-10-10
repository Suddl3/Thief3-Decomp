// Game/Unsorted_10ACF9F0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_Field04
{
public:
    int FUN_1098e290(int A, FString* B);
};

extern const char DAT_10e47660[];

// FUNCTION: 0x10ACF9F0 ?FUN_10acf9f0@@YG?AVFString@@PAVClass_Field04@@@Z
FString __stdcall FUN_10acf9f0(Class_Field04* Field)
{
    FString Name(DAT_10e47660);
    Field->FUN_1098e290(0x40184, &Name);
    return Name;
}
