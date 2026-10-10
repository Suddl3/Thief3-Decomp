// Game/Unsorted_10AA6200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA6050.h"
#include "Game/Class_10BFBD70.h"
#include "Game/Struct_10AA6050.h"
#include "Game/Struct_10AA6340.h"

// FUNCTION: 0x10AA6340 ?FUN_10aa6340@Class_10AA6050@@QAEXHABUStruct_10AA6340@@ABVClass_10BFBD70@@@Z
void Class_10AA6050::FUN_10aa6340(int Value, const Struct_10AA6340& A, const Class_10BFBD70& B)
{
    Struct_10AA6050* Entry = FUN_10aa6050(Value);
    Entry->Unknown04 = A;
    Entry->Unknown20 = B;
}
