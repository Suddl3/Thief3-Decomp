// Game/Class_10A34B90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A34B90_Node.h"
#include "Game/Class_10A34C10.h"
#include "Game/Class_10A34B90.h"
#include "Game/cString.h"
#include "Game/cInt64HashTable.h"
#include "Game/Class_10A34AE0.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A34810 ?Rehash@Class_10A34B90@@QAEXH@Z
void Class_10A34B90::Rehash(int Size)
{
    int OldSize = m_BucketCount;
    Class_10A34B90_Node** OldBuckets = m_Buckets;
    Class_10A34B90_Node** Buckets = new(0, 0, 0, 0, 0) Class_10A34B90_Node*[Size];
    m_BucketCount = Size;
    m_Buckets = Buckets;
    m_BucketBits = 0;
    while (Size >>= 1)
        m_BucketBits++;
    m_Count = 0;
    m_Collisions = 0;
    for (int i = 0; i < m_BucketCount; i++)
        m_Buckets[i] = 0;
    for (int j = 0; j < OldSize; j++)
    {
        Class_10A34B90_Node* Node = OldBuckets[j];
        while (Node)
        {
            Insert(Node, &Node->Unknown10);
            Class_10A34B90_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}

// FUNCTION: 0x10A34B90 ?Reset@Class_10A34B90@@QAEXH@Z
void Class_10A34B90::Reset(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_10A34B90_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_10A34B90_Node* Next = Node->Next;
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
