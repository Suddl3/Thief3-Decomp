// Game/Unsorted_10911950.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10E49384.h"

extern void* DAT_10e49384[];

extern const char DAT_10e492f8[];

extern "C" __declspec(dllimport) int __cdecl wsprintfA(char* Out, const char* Format, ...);

// FUNCTION: 0x10912D80 ?FUN_10912d80@@YA?AVClass_109081E0@@I@Z
Class_109081E0 FUN_10912d80(unsigned Value)
{
    char Buffer[20];
    wsprintfA(Buffer, DAT_10e492f8, Value);
    return Class_109081E0(Buffer);
}

// FUNCTION: 0x10913A40 ?FUN_10913a40@Class_10E49384@@QAEPAV1@XZ
Class_10E49384* Class_10E49384::FUN_10913a40()
{
    VTable = DAT_10e49384;
    Unknown04 = 0;
    return this;
}
