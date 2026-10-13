// Game/Class_10C4A150.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C49100.h"
#include "Game/Class_10C49100_Node.h"
#include "Game/Class_10C4A150.h"
#include "Game/cString.h"
#include "Game/Class_10C49200.h"
#include "Game/Class_10C49230.h"
#include "Game/Class_10C4A030_Member10.h"
#include "Game/Class_10E9BB60.h"
#include "Game/Class_10E9BB80.h"
#include "Game/Class_10E9BB8C.h"

// FUNCTION: 0x10C49DA0 ?Reset@Class_10C4A150@@QAEXH@Z
void Class_10C4A150::Reset(int A)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_10C49100_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_10C49100_Node* Next = Node->Next;
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
        ((Class_10C49100*)this)->Rehash(A);
}

// FUNCTION: 0x10C4A150 ?Clear@Class_10C4A150@@QAEXXZ
void Class_10C4A150::Clear()
{
    Reset(0x40);
    ::operator delete(m_Buckets);
    m_Count = 0;
    m_BucketCount = 0;
    m_Buckets = 0;
    m_Collisions = 0;
}
