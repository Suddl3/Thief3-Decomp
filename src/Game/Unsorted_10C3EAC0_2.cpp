// Game/Unsorted_10C3EAC0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10E9B570.h"
#include "Game/Class_10C3EA90.h"

extern Class_10C3EA90* DAT_10ff70a4;

FVector GetProjectileRotation(int p1);

// FUNCTION: 0x10C3EB80 ?ReleaseHashTable@@YAXXZ
void ReleaseHashTable()
{
    --DAT_10ff70a4->m_RefCount;
    if (DAT_10ff70a4->m_RefCount == 0)
    {
        delete DAT_10ff70a4;
        DAT_10ff70a4 = 0;
    }
}

// FUNCTION: 0x10C3ED70 ?GetRotation@Class_10E9B570@@UAE?AVFVector@@XZ
FVector Class_10E9B570::GetRotation()
{
    return GetProjectileRotation(m_Owner);
}
