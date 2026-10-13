// Game/Class_10A288C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A250D0.h"
#include "Game/Class_10A250D0_Node.h"
#include "Game/Class_10A288C0.h"
#include "Game/Class_10A243E0.h"
#include "Game/Class_10A2B480.h"

// FUNCTION: 0x10A264E0 ?Clear@Class_10A288C0@@QAEXH@Z
void Class_10A288C0::Clear(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_10A250D0_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_10A250D0_Node* Next = Node->Next;
            Node->~Class_10A250D0_Node();
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

// FUNCTION: 0x10A288C0 ?Free@Class_10A288C0@@QAEXXZ
void Class_10A288C0::Free()
{
    Clear(0x40);
    ::operator delete(m_Buckets);
    m_Count = 0;
    m_BucketCount = 0;
    m_Buckets = 0;
    m_Collisions = 0;
}
