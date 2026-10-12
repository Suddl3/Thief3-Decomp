// Game/Unsorted_10B408D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B408D0.h"

// FUNCTION: 0x10B408D0 ?FUN_10b408d0@Class_10B408D0@@QAEXXZ
void Class_10B408D0::FUN_10b408d0()
{
    FUN_10b40620(0x40);
    ::operator delete(m_Buckets);
    m_Count = 0;
    m_BucketCount = 0;
    m_Buckets = 0;
    m_Collisions = 0;
}
