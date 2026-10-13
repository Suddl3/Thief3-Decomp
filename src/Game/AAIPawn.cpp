// Game/AAIPawn.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "AICore/AICoreClasses.h"
#include "Game/Class_10B9BCA0.h"
#include "Game/Class_10B9CAC0.h"
#include "Game/Struct_10B9BCA0.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

class AAIPawn;

Class_10B9BCA0* GetAIPawnController(AAIPawn* Pawn);

// FUNCTION: 0x10B97B40 ?InternalConstructor@AAIPawn@@SAXPAX@Z
void AAIPawn::InternalConstructor(void* X)
{
    new ((EInternal*)X) AAIPawn();
}

// FUNCTION: 0x10BC2F50 ?FUN_10bc2f50@AAIPawn@@UAE_NH@Z
bool AAIPawn::Virtual74(int A)
{
    Class_10B9BCA0* Controller = GetAIPawnController(this);
    if (Controller && Controller->Unknown118 && Controller->Unknown118->Unknown08)
        return Controller->Unknown118->Unknown08->FUN_10b9d0c0(A);
    return false;
}

// FUNCTION: 0x10BC2F80 ?FUN_10bc2f80@AAIPawn@@UAE_NH@Z
bool AAIPawn::Virtual75(int A)
{
    Class_10B9BCA0* Controller = GetAIPawnController(this);
    if (Controller && Controller->Unknown118 && Controller->Unknown118->Unknown08)
        return Controller->Unknown118->Unknown08->FUN_10b9d0e0(A);
    return false;
}
