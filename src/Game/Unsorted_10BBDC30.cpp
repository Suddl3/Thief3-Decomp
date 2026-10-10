// Game/Unsorted_10BBDC30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10971570.h"
#include "Game/Class_10BBDC30.h"

// FUNCTION: 0x10BBDC30 ?FUN_10bbdc30@Class_10BBDC30@@QAE_NH@Z
bool Class_10BBDC30::FUN_10bbdc30(int A)
{
    bool Result = false;
    if (FUN_10bbd8b0(A, &Result) != true)
        Unknown0C->FUN_10971570(A, &Result);
    return Result;
}
