// Game/ASpellProjectile.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "T3Game/T3GameClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10AB4D50 ?InternalConstructor@ASpellProjectile@@SAXPAX@Z
void ASpellProjectile::InternalConstructor(void* X)
{
    new ((EInternal*)X) ASpellProjectile();
}
