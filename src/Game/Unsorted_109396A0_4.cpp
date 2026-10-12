// Game/Unsorted_109396A0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_1093AF30.h"
#include "Game/Class_1093AF30_Node.h"
#include "Game/Class_1093C750.h"

// FUNCTION: 0x1093B450 ?Reset@Class_1093C750@@QAEXH@Z
void Class_1093C750::Reset(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_1093AF30_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_1093AF30_Node* Next = Node->Next;
            Node->Key.~Class_109081E0();
            ::operator delete(Node);
            Node = Next;
        }
    }
    m_Count = 0;
    m_BucketCount = 0;
    m_Collisions = 0;
    ::operator delete(m_Buckets);
    m_Buckets = 0;
    if (!m_NoAutoGrow)
        Rehash(Size);
}
