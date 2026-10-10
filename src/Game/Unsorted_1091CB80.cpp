// Game/Unsorted_1091CB80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1091CB20.h"

// FUNCTION: 0x1091CB80 ?FUN_1091cb80@Class_1091CB20@@QAEHI@Z
int Class_1091CB20::FUN_1091cb80(unsigned int Index)
{
    if (Index >= Count())
        Index = Count() - 1;
    return Unknown08[Index];
}
