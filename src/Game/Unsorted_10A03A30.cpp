// Game/Unsorted_10A03A30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5D478.h"
#include "Game/Class_10E5D4B8.h"
#include "Game/InnerObject.h"

extern int DAT_10f39870;

extern int DAT_10f39874;

void FUN_10a123c0();

extern void* DAT_10e5d478[];

// FUNCTION: 0x10A0FFC0 ?FUN_10a0ffc0@@YAHXZ
int FUN_10a0ffc0()
{
    return DAT_10f39870;
}

// FUNCTION: 0x10A11EB0 ?FUN_10a11eb0@@YAHXZ
int FUN_10a11eb0()
{
    return DAT_10f39874;
}

// FUNCTION: 0x10A12AE0 ?FUN_10a12ae0@@YAXXZ
void FUN_10a12ae0()
{
    FUN_10a123c0();
}

// FUNCTION: 0x10A12DC0 ?FUN_10a12dc0@Class_10E5D4B8@@QAEHXZ
int Class_10E5D4B8::FUN_10a12dc0()
{
    return Field40->Field04;
}

// FUNCTION: 0x10A12F50 ?FUN_10a12f50@Class_10E5D478@@QAEXXZ
void Class_10E5D478::FUN_10a12f50()
{
    Field00 = (void*)DAT_10e5d478;
}
