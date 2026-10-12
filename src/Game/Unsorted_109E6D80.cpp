// Game/Unsorted_109E6D80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/cStringIntHashTable.h"
#include "Game/Class_109E6520_Node.h"
#include "Game/Class_109E7C30.h"

// FUNCTION: 0x109E7C30 ?Reset@Class_109E7C30@@QAEXH@Z
void Class_109E7C30::Reset(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_109E6520_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_109E6520_Node* Next = Node->Next;
            Node->Key.~cString();
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
