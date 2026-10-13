// Game/Unsorted_10A4EB60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A4EB60.h"
#include "Game/Class_10A4FD00.h"
#include "Game/Class_10AF4B90.h"
#include "Game/InnerClass_10A4EB40.h"
#include "Engine/EngineClasses.h"

extern void* DAT_10e67b54[];

// FUNCTION: 0x10A4EB60 ?FUN_10a4eb60@Class_10A4EB60@@QAEXPAXH@Z
void Class_10A4EB60::FUN_10a4eb60(void* A, int B)
{
    Field1c.FUN_10a4e3d0(A, 0x40, 0);
    Field1c.FUN_10a4e6f0(A, B);
    Field1c.FUN_10a4e7e0(A, B);
}

// FUNCTION: 0x10A4FD00 ?FUN_10a4fd00@Class_10A4FD00@@QAEPAV1@XZ
Class_10A4FD00* Class_10A4FD00::FUN_10a4fd00()
{
    Unknown04.FUN_10af4b90(9, DAT_10e67b54);
    return this;
}

// FUNCTION: 0x10A500E0 ?FUN_10a500e0@APawn@@UAEXH@Z
void APawn::Virtual95(int param)
{
    FUN_10a6ea30(0x402001a4, param);
}
