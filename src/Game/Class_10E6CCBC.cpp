// Game/Class_10E6CCBC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A93D00.h"
#include "Game/Class_10D52BD0.h"
#include "Game/Class_10E6CCBC.h"

Class_10D52BD0* __stdcall FUN_10d52dd0();

// FUNCTION: 0x10A93C80 ?FUN_10a93c80@Class_10E6CCBC@@UAEHHPAVClass_10A93D00@@@Z
int Class_10E6CCBC::FUN_10a93c80(int A, Class_10A93D00* C)
{
    int First = C->Virtual5(0);
    int Second = C->Virtual7(1);
    int Third = C->Virtual7(2);
    int Lo = C->Virtual7(3);
    int Hi = C->Virtual7(4);
    int X = FUN_10d52dd0()->FUN_10d52ca0(First, Second, Third);
    if (X >= Lo && X <= Hi)
        return 1;
    return 0;
}
