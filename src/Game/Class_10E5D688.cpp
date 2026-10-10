// Game/Class_10E5D688.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A16120.h"
#include "Game/Class_10E5D688.h"

struct Struct_10A16120
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x10A16660 ?FUN_10a16660@Class_10E5D688@@UAEHH@Z
int Class_10E5D688::FUN_10a16660(int A)
{
    if (!FUN_10a16640(A))
        return 0;
    Struct_10A16120 Result;
    Result = Unknown30.FUN_10a16120(A);
    return Result.Unknown0C;
}
