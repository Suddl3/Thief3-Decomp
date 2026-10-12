// Game/Unsorted_10A4ABF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10A492B0.h"
#include "Game/Class_10A492B0_Node.h"
#include "Game/Class_10A4B710.h"

// FUNCTION: 0x10A4B710 ?Reset@Class_10A4B710@@QAEXH@Z
void Class_10A4B710::Reset(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_10A492B0_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_10A492B0_Node* Next = Node->Next;
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
