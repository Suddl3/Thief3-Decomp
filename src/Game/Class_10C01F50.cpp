// Game/Class_10C01F50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cHashMap.h"
#include "Game/Class_10C00F60_Node.h"
#include "Game/Class_10C01140.h"
#include "Game/Class_10C01140_Field18.h"
#include "Game/Class_10C01140_Node.h"
#include "Game/Class_10C01F50.h"
#include "Game/Class_10C00A50.h"
#include "Game/Class_10C00C70.h"
#include "Game/cNodeHashMap.h"

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10C01730 ?Clear@Class_10C01F50@@QAEXH@Z
void Class_10C01F50::Clear(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_10C00F60_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_10C00F60_Node* Next = Node->Next;
            ::operator delete(Node);
            Node = Next;
        }
    }
    m_Count = 0;
    m_BucketCount = 0;
    m_Collisions = 0;
    ::operator delete(m_Buckets);
    m_Buckets = 0;
    if (!m_NoResize)
        Rehash(Size);
}

// FUNCTION: 0x10C01F50 ?Free@Class_10C01F50@@QAEXXZ
void Class_10C01F50::Free()
{
    Clear(0x40);
    ::operator delete(m_Buckets);
    m_Count = 0;
    m_BucketCount = 0;
    m_Buckets = 0;
    m_Collisions = 0;
}
