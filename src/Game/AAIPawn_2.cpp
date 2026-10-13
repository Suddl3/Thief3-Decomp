// Game/AAIPawn_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B9BCA0.h"
#include "Game/Class_10B9CAC0.h"
#include "Game/Struct_10B9BCA0.h"
#include "AICore/AICoreClasses.h"

class AAIPawn;

Class_10B9BCA0* GetAIPawnController(AAIPawn* Pawn);

// FUNCTION: 0x10BC2F50 ?FUN_10bc2f50@AAIPawn@@UAE_NH@Z
bool AAIPawn::Virtual74(int A)
{
    Class_10B9BCA0* Controller = GetAIPawnController(this);
    if (Controller && Controller->Unknown118 && Controller->Unknown118->Unknown08)
        return Controller->Unknown118->Unknown08->FUN_10b9d0c0(A);
    return false;
}
