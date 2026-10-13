// Game/Unsorted_10ACD6C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/cActorManager.h"
#include "Game/Class_10E70060.h"
#include "Game/Class_10E700D4.h"
#include "Game/Class_10E700F0.h"
#include "Game/Class_10E70150.h"

// FUNCTION: 0x10ACE1D0 ?FUN_10ace1d0@Class_10E700D4@@UAEMPAVClass_1098E330@@H0@Z
float Class_10E700D4::FUN_10ace1d0(Class_1098E330* A, int B, Class_1098E330* C)
{
    float First = 0.0f;
    A->FUN_1098e330(0x10058b, (int*)&First);
    float Second = 0.0f;
    if (C)
        C->FUN_1098e330(0x100589, (int*)&Second);
    return Second + First;
}
