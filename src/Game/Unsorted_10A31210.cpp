// Game/Unsorted_10A31210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"

bool FUN_10d39910(const cString& A);

// FUNCTION: 0x10A315F0 ?FUN_10a315f0@@YG_NABVcString@@AAV1@@Z
bool __stdcall FUN_10a315f0(const cString& A, cString& B)
{
    if (!FUN_10d39910(A))
    {
        B = A;
        return false;
    }
    return true;
}
