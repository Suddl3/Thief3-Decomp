// Game/Class_10B408D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B2A160.h"
#include "Game/Class_10B2A160_Node.h"
#include "Game/Class_10E696A8.h"
#include "Game/Struct_10B406A0.h"
#include "Game/Class_10B408D0.h"

// FUNCTION: 0x10B40620 ?FUN_10b40620@Class_10B408D0@@QAEXH@Z
void Class_10B408D0::FUN_10b40620(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_10B2A160_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_10B2A160_Node* Next = Node->Next;
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
