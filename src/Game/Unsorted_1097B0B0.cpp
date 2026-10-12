// Game/Unsorted_1097B0B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1097B760.h"
#include "Game/Class_1097CBE0.h"

// FUNCTION: 0x1097B760 ?FUN_1097b760@Class_1097B760@@QAEXH@Z
void Class_1097B760::FUN_1097b760(int A)
{
    FUN_10979d20(A, 0, 0);
    FUN_10979670(A, 0x1000);
}

// FUNCTION: 0x1097CBE0 ?Free@Class_1097CBE0@@QAEXXZ
void Class_1097CBE0::Free()
{
    Clear(0x40);
    ::operator delete(m_Buckets);
    Unknown04 = 0;
    m_BucketCount = 0;
    m_Buckets = 0;
    Unknown00 = 0;
}
