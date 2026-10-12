// Game/Unsorted_10BD1EF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10BA91E0.h"

extern float DAT_10eafbdc;

float Distance(const Struct_10BA91E0* A, const Struct_10BA91E0* B);

struct Struct_10BD1EF0
{
    int Count;
    char Unknown04[4];
    Struct_10BA91E0* Data;
};

// FUNCTION: 0x10BD1EF0 ?FUN_10bd1ef0@@YAMHHHPAUStruct_10BD1EF0@@@Z
float FUN_10bd1ef0(int A, int B, int C, Struct_10BD1EF0* D)
{
    if (D->Count == 0)
        return DAT_10eafbdc;
    float Total = 0.0f;
    for (int i = 0; i < D->Count - 1; i++)
        Total += Distance(&D->Data[i], &D->Data[i + 1]);
    return Total;
}
