// Game/Unsorted_10C64B00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AB5B20.h"
#include "Game/Class_10C662F0.h"
#include "Game/Object_10AB5B20.h"

class Class_10E9CB00;

struct Struct_10C64E10
{
    Class_10E9CB00* Unknown00;
    int Unknown04;
};

// FUNCTION: 0x10C64E10 ?FUN_10c64e10@Class_10C662F0@@QAEXPAVClass_10E9CB00@@@Z
void Class_10C662F0::FUN_10c64e10(Class_10E9CB00* A)
{
    for (int i = 0; i < Unknown178; i++)
    {
        Struct_10C64E10* Entry = &Unknown180[i];
        if (Entry->Unknown00 == A)
            Entry->Unknown04++;
    }
}

// FUNCTION: 0x10C64E50 ?FUN_10c64e50@@YA?AVClass_10AB5B20@@PAV1@@Z
Class_10AB5B20 FUN_10c64e50(Class_10AB5B20* Other)
{
    return *Other;
}
