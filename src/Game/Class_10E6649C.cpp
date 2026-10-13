// Game/Class_10E6649C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6649C.h"

// FUNCTION: 0x10A34780 ?FUN_10a34780@Class_10E6649C@@UAEHPB_J0@Z
int Class_10E6649C::FUN_10a34780(const __int64* A, const __int64* B)
{
    if (A[0] == B[0] && A[1] == B[1])
        return 0;
    bool Greater;
    if (A[0] > B[0])
        Greater = true;
    else if (B[0] > A[0])
        Greater = false;
    else
        Greater = A[1] > B[1];
    return Greater ? 1 : -1;
}
