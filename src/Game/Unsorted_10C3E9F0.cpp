// Game/Unsorted_10C3E9F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C3EA90.h"
#include "Game/Class_10E9BB80.h"

// FUNCTION: 0x10C3E9F0 ?FUN_10c3e9f0@Class_10E9BB80@@UAEXHPAH0@Z
void Class_10E9BB80::FUN_10c3e9f0(int p1, int* p2, int* p3)
{
    *p2 = p1;
    *p3 = 4;
}

// FUNCTION: 0x10C3EA90 ?Release@Class_10C3EA90@@QAEXXZ
void Class_10C3EA90::Release()
{
    Reset(0x40);
    ::operator delete(m_Buckets);
    m_Count = 0;
    m_BucketCount = 0;
    m_Buckets = 0;
    m_Collisions = 0;
}
