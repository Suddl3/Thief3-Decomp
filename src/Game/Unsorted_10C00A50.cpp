// Game/Unsorted_10C00A50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C00A50.h"
#include "Game/Class_10C00C70.h"
#include "Game/Class_10C01F50.h"
#include "Game/Class_10C01FC0.h"

// FUNCTION: 0x10C00A50 ?FUN_10c00a50@Class_10C00A50@@QAEPAHH@Z
int* Class_10C00A50::FUN_10c00a50(int p1)
{
    return &Unknown08[p1];
}

// FUNCTION: 0x10C00C70 ?FUN_10c00c70@Class_10C00C70@@QAE_NXZ
bool Class_10C00C70::FUN_10c00c70()
{
    return Unknown00 > 0;
}

// FUNCTION: 0x10C01F50 ?Free@Class_10C01F50@@QAEXXZ
void Class_10C01F50::Free()
{
    Clear(0x40);
    ::operator delete(m_Buckets);
    m_Count = 0;
    m_BucketCount = 0;
    m_Buckets = 0;
    Unknown00 = 0;
}

// FUNCTION: 0x10C01FC0 ?Free@Class_10C01FC0@@QAEXXZ
void Class_10C01FC0::Free()
{
    Clear(0x40);
    ::operator delete(Unknown14);
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown14 = 0;
    Unknown00 = 0;
}
