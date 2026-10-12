// Game/Unsorted_10C20DA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C223A0.h"
#include "Game/Class_10C24940.h"

Class_10905A90_Member* GetAllocator();

extern float DAT_10eafbdc;

// FUNCTION: 0x10C211C0 ?FUN_10c211c0@@YAHPAVFVector@@00@Z
UBOOL FUN_10c211c0(FVector* Normal, FVector* A, FVector* B)
{
    FVector V(A->X - B->X, A->Y - B->Y, 0.0f);
    V.Normalize();
    return V.Z * Normal->Z + V.Y * Normal->Y + V.X * Normal->X > DAT_10eafbdc;
}

// FUNCTION: 0x10C223A0 ?Clear@Class_10C223A0@@QAEXXZ
void Class_10C223A0::Clear()
{
    FUN_10c20c70(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10C24940 ?Clear@Class_10C24940@@QAEXXZ
void Class_10C24940::Clear()
{
    SetCount(0);
    if (m_Capacity)
    {
        GetAllocator()->Virtual5(m_Items);
        m_Items = 0;
        m_Capacity = 0;
    }
}
