// Game/Class_10E9B570.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10E9B570.h"
#include "Game/Class_10C3EA90.h"

FVector GetProjectileLocation(int p1);

FVector GetProjectileRotation(int p1);

// FUNCTION: 0x10C3ED70 ?GetRotation@Class_10E9B570@@UAE?AVFVector@@XZ
FVector Class_10E9B570::GetRotation()
{
    return GetProjectileRotation(m_Owner);
}

// FUNCTION: 0x10C3ED90 ?FUN_10c3ed90@Class_10E9B570@@UAE?AVFVector@@XZ
FVector Class_10E9B570::FUN_10c3ed90()
{
    return GetProjectileLocation(m_Owner);
}
