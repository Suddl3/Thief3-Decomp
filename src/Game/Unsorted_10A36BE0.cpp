// Game/Unsorted_10A36BE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10AF8250.h"

extern FString DAT_10f39ff4;

extern FString DAT_10f3a000;

// FUNCTION: 0x10A36BE0 ?FUN_10a36be0@@YA?AVClass_10AF8250@@XZ
Class_10AF8250 FUN_10a36be0()
{
    return Class_10AF8250(*(Class_10AF8250*)&DAT_10f39ff4);
}

// FUNCTION: 0x10A36C00 ?FUN_10a36c00@@YA?AVClass_10AF8250@@XZ
Class_10AF8250 FUN_10a36c00()
{
    return Class_10AF8250(*(Class_10AF8250*)&DAT_10f3a000);
}
