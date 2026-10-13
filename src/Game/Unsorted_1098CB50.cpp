// Game/Unsorted_1098CB50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_1098CB90.h"
#include "Engine/EngineClasses.h"

// FUNCTION: 0x1098CB80 ?InternalConstructor@APlayerPawn@@SAXPAX@Z
void APlayerPawn::InternalConstructor(void* p)
{
    new (p) APlayerPawn;
}

// FUNCTION: 0x1098CB90 ?FUN_1098cb90@Class_1098CB90@@QAEPAV1@HH@Z
Class_1098CB90* Class_1098CB90::FUN_1098cb90(int A, int B)
{
    Unknown00 = B;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = 0;
    Unknown20 = 0;
    Unknown24 = A;
    Unknown28 = -1;
    Unknown2C = 0;
    return this;
}
