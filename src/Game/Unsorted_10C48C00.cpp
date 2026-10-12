// Game/Unsorted_10C48C00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C48320.h"
#include "Game/Class_10C48320_Node.h"
#include "Game/Class_10C49230.h"

// FUNCTION: 0x10C48C00 ?Reset@Class_10C49230@@QAEXH@Z
void Class_10C49230::Reset(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_10C48320_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_10C48320_Node* Next = Node->Next;
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
