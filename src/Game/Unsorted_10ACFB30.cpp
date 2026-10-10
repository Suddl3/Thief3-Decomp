// Game/Unsorted_10ACFB30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

extern const char DAT_10e47660[];

class Class_Field04
{
public:
    int FUN_1098e290(int A, FString* B);
};

// FUNCTION: 0x10ACFB30 ?FUN_10acfb30@@YG?AVFString@@PAVClass_Field04@@@Z
FString __stdcall FUN_10acfb30(Class_Field04* Field)
{
    FString Name(DAT_10e47660);
    Field->FUN_1098e290(0x40337, &Name);
    return Name;
}
