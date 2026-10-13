// Game/Unsorted_10BAD9B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10E8D7B8.h"
#include "Game/Class_10E8DBA4.h"

class Class_10A68D20;

void FUN_10a68d20(Class_10A68D20* Owner, int A, int B, int C);

extern const char DAT_10e8d94c[];

// FUNCTION: 0x10BAD9B0 ?FUN_10bad9b0@Class_10E8D7B8@@UAEXPAVClass_10A68D20@@@Z
void Class_10E8D7B8::FUN_10bad9b0(Class_10A68D20* Owner)
{
    FUN_10a68d20(Owner, (int)&Unknown08, (int)&Unknown14, Unknown18);
}

// FUNCTION: 0x10BAEB10 ?GetLineName@@YA?AVcString@@XZ
cString GetLineName()
{
    return cString(DAT_10e8d94c);
}
