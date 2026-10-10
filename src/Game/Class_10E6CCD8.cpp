// Game/Class_10E6CCD8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A93D00.h"
#include "Game/Class_10D52BD0.h"
#include "Game/Class_10E6CCD8.h"

Class_10D52BD0* __stdcall FUN_10d52dd0(int A, int B);

// FUNCTION: 0x10A93D00 ?FUN_10a93d00@Class_10E6CCD8@@UAEHHHPAVClass_10A93D00@@@Z
int Class_10E6CCD8::FUN_10a93d00(int A, int B, Class_10A93D00* C)
{
    int First = C->Virtual5(0);
    int Second = C->Virtual7(1);
    FUN_10d52dd0(First, Second)->FUN_10d52bd0();
    return 1;
}
