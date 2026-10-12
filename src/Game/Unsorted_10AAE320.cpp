// Game/Unsorted_10AAE320.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAEBD0.h"
#include "Game/Class_10AAEBF0.h"
#include "Game/XBInputInterface.h"

// FUNCTION: 0x10AAE320 ?IsAxis@@YG_NH@Z
bool __stdcall IsAxis(int A)
{
    if ((A >= 200 && A <= 215) || (A >= 240 && A <= 243))
        return true;
    return false;
}

// FUNCTION: 0x10AAEBD0 ?Advance@Class_10AAEBD0@@QAEXH@Z
void Class_10AAEBD0::Advance(int param)
{
    Unknown814 += Unknown81c * param;
}

// FUNCTION: 0x10AAEBF0 ?Advance@Class_10AAEBF0@@QAEXH@Z
void Class_10AAEBF0::Advance(int param)
{
    Unknown818 += Unknown81c * param;
}

// FUNCTION: 0x10AAF4D0 ?FUN_10aaf4d0@XBInputInterface@@QAEXH@Z
void XBInputInterface::FUN_10aaf4d0(int A)
{
    FUN_10aaf320(A);
    if (Unknown812)
        FUN_10aae8b0();
}
