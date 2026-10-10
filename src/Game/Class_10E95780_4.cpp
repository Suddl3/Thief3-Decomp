// Game/Unsorted_10BE1B30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4AB88.h"
#include "Game/Class_10E6C390.h"
#include "Game/Class_10E95780.h"
#include "Game/Struct_10BE1AD0.h"

Class_10E6C390* FUN_10a86080();

// FUNCTION: 0x10BE1B30 ?FUN_10be1b30@Class_10E95780@@UAE_NH@Z
bool Class_10E95780::FUN_10be1b30(int A)
{
    if (FUN_10a86080()->Virtual14() != 3 && FUN_10a86080()->Virtual15(A) == 3)
        return true;
    return false;
}
