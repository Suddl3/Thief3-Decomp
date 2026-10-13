// Game/Class_10C3EA90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntHashTable.h"
#include "Game/Class_10C30DD0_Node.h"
#include "Game/Class_10C3EA90.h"
#include "Game/Class_10E9BB80.h"

// FUNCTION: 0x10C3EA10 ?Reset@Class_10C3EA90@@QAEXH@Z
void Class_10C3EA90::Reset(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_10C30DD0_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_10C30DD0_Node* Next = Node->Next;
            ::operator delete(Node);
            Node = Next;
        }
    }
    m_Count = 0;
    m_BucketCount = 0;
    m_Collisions = 0;
    ::operator delete(m_Buckets);
    m_Buckets = 0;
    if (!m_FixedSize)
        Rehash(Size);
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
