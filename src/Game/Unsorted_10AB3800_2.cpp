// Game/Unsorted_10AB3800_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10AB3C20.h"

bool FUN_1094c430(const cString& A, const cString& B);

// FUNCTION: 0x10AB3C20 ?SetValue@Class_10AB3C20@@QAEXABVcString@@@Z
void Class_10AB3C20::SetValue(const cString& Value)
{
    if (FUN_1094c430(Unknown04, Value))
    {
        Unknown04 = Value;
        FUN_10ab3ab0();
    }
}
