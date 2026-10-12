// Game/Unsorted_10929DC0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/cHashTable.h"
#include "Game/Class_1092A370_Node.h"
#include "Game/Class_1092BA00.h"

// FUNCTION: 0x1092BA00 ?Clear@Class_1092BA00@@QAEXH@Z
void Class_1092BA00::Clear(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_1092A370_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_1092A370_Node* Next = Node->Next;
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
    if (!m_NoAutoResize)
        Rehash(Size);
}
