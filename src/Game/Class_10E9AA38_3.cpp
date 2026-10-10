// Game/Class_10E9AA38_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10E9AA38.h"
#include "Game/Struct_10FF66B0.h"

extern "C" int __cdecl sprintf(char* Out, const char* Format, ...);

extern Struct_10FF66B0 DAT_10ff66b0[];

extern const char DAT_10e9aa64[];

// FUNCTION: 0x10C2E690 ?FUN_10c2e690@Class_10E9AA38@@UAE?AVClass_109081E0@@XZ
Class_109081E0 Class_10E9AA38::FUN_10c2e690()
{
    char Buffer[0x34];
    sprintf(Buffer, DAT_10e9aa64, DAT_10ff66b0[Unknown50].Unknown00);
    return Class_109081E0(Buffer);
}
