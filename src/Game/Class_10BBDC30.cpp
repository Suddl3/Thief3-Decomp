// Game/Class_10BBDC30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDC30.h"
#include "Game/Struct_10BBD8B0.h"
#include "Game/Class_10971570.h"
#include "Game/Class_1098E330.h"

// FUNCTION: 0x10BBD840 ?FUN_10bbd840@Class_10BBDC30@@QAE_NH@Z
bool Class_10BBDC30::FUN_10bbd840(int A)
{
    for (int i = 0; i < Unknown18; i++)
    {
        if (Unknown20[i]->Unknown04 == A)
            return true;
    }
    return false;
}

// FUNCTION: 0x10BBD870 ?FUN_10bbd870@Class_10BBDC30@@QAE_NHPAM@Z
bool Class_10BBDC30::FUN_10bbd870(int A, float* B)
{
    for (int i = 0; i < Unknown18; i++)
    {
        Struct_10BBD8B0* Entry = Unknown20[i];
        if (Entry->Unknown04 == A)
        {
            float* Value = Entry->Unknown08;
            if (!Value)
                return false;
            *B = *Value;
            return true;
        }
    }
    return false;
}

// FUNCTION: 0x10BBDC30 ?FUN_10bbdc30@Class_10BBDC30@@QAE_NH@Z
bool Class_10BBDC30::FUN_10bbdc30(int A)
{
    bool Result = false;
    if (FUN_10bbd8b0(A, &Result) != true)
        Unknown0C->FUN_10971570(A, &Result);
    return Result;
}

// FUNCTION: 0x10BBDCC0 ?FUN_10bbdcc0@Class_10BBDC30@@QAE_NH@Z
bool Class_10BBDC30::FUN_10bbdcc0(int A)
{
    bool Result = false;
    if (FUN_10bbd8b0(A, &Result) != true)
        Unknown14->FUN_10971570(A, &Result);
    return Result;
}
