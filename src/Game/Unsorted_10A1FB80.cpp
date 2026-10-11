// Game/Unsorted_10A1FB80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A1FD90.h"
#include "Game/Class_10A21480.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10A1FD90 ?FUN_10a1fd90@Class_10A1FD90@@QAEXHHH@Z
void Class_10A1FD90::FUN_10a1fd90(int A, int B, int C)
{
    int Offset = Unknown38 * C + Unknown48;
    Virtual37(Offset + A, B ? Offset + B : 0);
}

// FUNCTION: 0x10A21480 ?FUN_10a21480@Class_10A21480@@QAEXXZ
void Class_10A21480::FUN_10a21480()
{
    FUN_10a20f60(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
