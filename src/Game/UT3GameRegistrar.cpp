// Game/UT3GameRegistrar.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "T3Game/T3GameClasses.h"
#include "Game/Class_10ACEE50.h"
#include "Game/Class_10B1D170.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10AB3D50 ?InternalConstructor@UT3GameRegistrar@@SAXPAX@Z
void UT3GameRegistrar::InternalConstructor(void* X)
{
    new ((EInternal*)X) UT3GameRegistrar();
}

// FUNCTION: 0x10ABD7D0 ?Register@UT3GameRegistrar@@UAEXXZ
void UT3GameRegistrar::Register()
{
    Class_10ACEE50 A;
    A.FUN_10acee50();
    Class_10B1D170 B;
    B.FUN_10b1d170();
}
