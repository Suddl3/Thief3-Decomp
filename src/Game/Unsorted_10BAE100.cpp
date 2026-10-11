// Game/Unsorted_10BAE100.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10BAE080.h"
#include "Game/VisualSubsystem.h"

extern "C" int __cdecl sprintf(char* Out, const char* Format, ...);

extern const char DAT_10e8d7d0[];

extern const char DAT_10e48c2c[];

// FUNCTION: 0x10BAE2B0 ?FUN_10bae2b0@Class_10BAE080@@QAEXABV1@@Z
void Class_10BAE080::FUN_10bae2b0(const Class_10BAE080& Other)
{
    FUN_10bad9d0(Other.Unknown00);
    for (int i = 0; i < Unknown00; i++)
        Unknown08[i] = Other.Unknown08[i];
}

// FUNCTION: 0x10BAE330 ?FUN_10bae330@@YA?AVClass_109081E0@@H@Z
Class_109081E0 FUN_10bae330(int Value)
{
    char Buffer[8];
    if (Value < 10)
        sprintf(Buffer, DAT_10e8d7d0, Value);
    else
    {
        if (Value > 99)
            Value = 99;
        sprintf(Buffer, DAT_10e48c2c, Value);
    }
    return Class_109081E0(Buffer);
}
