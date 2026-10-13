// Game/ANavMeshInsertionPoint.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "AICore/AICoreClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10B94050 ??_GANavMeshInsertionPoint@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B94080's definition in this unit.

// FUNCTION: 0x10B94080 ??1ANavMeshInsertionPoint@@UAE@XZ
ANavMeshInsertionPoint::~ANavMeshInsertionPoint()
{
    ConditionalDestroy();
}

// FUNCTION: 0x10B95260 ?InternalConstructor@ANavMeshInsertionPoint@@SAXPAX@Z
void ANavMeshInsertionPoint::InternalConstructor(void* X)
{
    new ((EInternal*)X) ANavMeshInsertionPoint();
}
