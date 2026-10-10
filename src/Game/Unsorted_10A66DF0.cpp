// Game/Unsorted_10A66DF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A66DF0.h"

// FUNCTION: 0x10A66DF0 ?FUN_10a66df0@Class_10A66DF0@@QAE_NH@Z
bool Class_10A66DF0::FUN_10a66df0(int A)
{
    bool Result = false;
    if (Unknown08 && A)
    {
        Virtual3();
        Virtual4();
        Unknown08 = 0;
        Result = true;
    }
    return Result;
}
