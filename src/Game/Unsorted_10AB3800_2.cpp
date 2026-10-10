// Game/Unsorted_10AB3800_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10AB3C20.h"

bool FUN_1094c430(const Class_109081E0& A, const Class_109081E0& B);

// FUNCTION: 0x10AB3C20 ?FUN_10ab3c20@Class_10AB3C20@@QAEXABVClass_109081E0@@@Z
void Class_10AB3C20::FUN_10ab3c20(const Class_109081E0& Value)
{
    if (FUN_1094c430(Unknown04, Value))
    {
        Unknown04 = Value;
        FUN_10ab3ab0();
    }
}
