// Game/Unsorted_10BC0F50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BC1BA0.h"

void FUN_10af42f0(int A, const char* B);

void FUN_10bc1b00(void* A, int B);

struct Struct_10BC1BA0
{
    char Unknown00[0x30];
    char Unknown30[0xC];
    char Unknown3C[0xC];
    char Unknown48[0xC];
    char Unknown54[0xC];
};

// FUNCTION: 0x10BC1BA0 ?ParsePathLinks@Class_10BC1BA0@@QAEXH@Z
void Class_10BC1BA0::ParsePathLinks(int A)
{
    FUN_10af42f0(A, "Begin PathLinks");
    FUN_10bc1b00(Unknown00->Unknown30, A);
    FUN_10bc1b00(Unknown00->Unknown3C, A);
    FUN_10bc1b00(Unknown00->Unknown48, A);
    FUN_10bc1b00(Unknown00->Unknown54, A);
    FUN_10af42f0(A, "End PathLinks");
}
