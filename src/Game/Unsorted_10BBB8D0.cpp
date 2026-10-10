// Game/Unsorted_10BBB8D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10971570.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10BBDC30.h"
#include "Game/Struct_10BBD8B0.h"

// FUNCTION: 0x10BBD8B0 ?FUN_10bbd8b0@Class_10BBDC30@@QAE_NHPA_N@Z
bool Class_10BBDC30::FUN_10bbd8b0(int A, bool* B)
{
    for (int i = 0; i < Unknown18; i++)
    {
        Struct_10BBD8B0* Entry = Unknown20[i];
        if (Entry->Unknown04 == A)
        {
            bool* Value = Entry->Unknown0C;
            if (!Value)
                return false;
            *B = *Value;
            return true;
        }
    }
    return false;
}

// FUNCTION: 0x10BBDAD0 ?FUN_10bbdad0@Class_10BBDC30@@QAEMH@Z
float Class_10BBDC30::FUN_10bbdad0(int A)
{
    float Result = 0.0f;
    if (FUN_10bbd870(A, &Result) != true)
        Unknown04->FUN_1098e330(A, (int*)&Result);
    return Result;
}
