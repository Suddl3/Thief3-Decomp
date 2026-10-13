// Game/Class_10BA1660.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BA1330.h"
#include "Game/Class_10BA1330_Node.h"
#include "Game/Class_10BA1660.h"

// FUNCTION: 0x10BA15C0 ?Reset@Class_10BA1660@@QAEXH@Z
void Class_10BA1660::Reset(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_10BA1330_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_10BA1330_Node* Next = Node->Next;
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
        Resize(Size);
}
