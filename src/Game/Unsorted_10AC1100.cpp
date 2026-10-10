// Game/Unsorted_10AC1100.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AC1100.h"
#include "Game/Struct_10AC1100.h"
#include "Game/Struct_10AC1100_Frame.h"

// FUNCTION: 0x10AC1100 ?FUN_10ac1100@Class_10AC1100@@QAEPAV1@ABUStruct_10AC1100@@00@Z
Class_10AC1100* Class_10AC1100::FUN_10ac1100(const Struct_10AC1100& A, const Struct_10AC1100& B,
                                             const Struct_10AC1100& C)
{
    Unknown00[0].Unknown08 = A;
    Unknown00[0].Unknown14 = B;
    Unknown00[0].Unknown20 = C;
    Unknown00[1] = Unknown00[0];
    Unknown00[2] = Unknown00[0];
    Unknown00[3] = Unknown00[0];
    return this;
}
