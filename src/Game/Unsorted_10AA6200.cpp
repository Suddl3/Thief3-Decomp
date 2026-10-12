// Game/Unsorted_10AA6200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA6050.h"
#include "Game/cIntArray.h"
#include "Game/Struct_10AA6050.h"
#include "Game/Struct_10AA6340.h"

// FUNCTION: 0x10AA6340 ?SetEntry@Class_10AA6050@@QAEXHABUStruct_10AA6340@@ABVcIntArray@@@Z
void Class_10AA6050::SetEntry(int Value, const Struct_10AA6340& A, const cIntArray& B)
{
    Struct_10AA6050* Entry = FindEntry(Value);
    Entry->Unknown04 = A;
    Entry->Unknown20 = B;
}
