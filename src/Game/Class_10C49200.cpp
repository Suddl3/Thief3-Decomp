// Game/Class_10C49200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C48260.h"
#include "Game/Class_10C48260_Node.h"
#include "Game/Class_10C49200.h"
#include "Game/Class_10C49230.h"
#include "Game/Class_10C4A030_Member10.h"
#include "Game/Class_10C4A150.h"
#include "Game/Class_10E9BB60.h"
#include "Game/Class_10E9BB80.h"
#include "Game/Class_10E9BB8C.h"

// FUNCTION: 0x10C48B80 ?Reset@Class_10C49200@@QAEXH@Z
void Class_10C49200::Reset(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_10C48260_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_10C48260_Node* Next = Node->Next;
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

// FUNCTION: 0x10C49200 ?Clear@Class_10C49200@@QAEXXZ
void Class_10C49200::Clear()
{
    Reset(0x40);
    ::operator delete(m_Buckets);
    m_Count = 0;
    m_BucketCount = 0;
    m_Buckets = 0;
    m_Collisions = 0;
}
