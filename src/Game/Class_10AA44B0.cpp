// Game/Class_10AA44B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E97B00.h"
#include "Game/Class_10AA44B0_Node.h"
#include "Game/Class_10AA44B0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D9D8.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr);

// FUNCTION: 0x10AA36B0 ?Rehash@Class_10AA44B0@@QAEXH@Z
void Class_10AA44B0::Rehash(int Size)
{
    int OldSize = m_BucketCount;
    Class_10AA44B0_Node** OldTable = m_Buckets;
    m_Buckets = (Class_10AA44B0_Node**)operator new(Size * sizeof(Class_10AA44B0_Node*), 0, 0, 0, 0, 0);
    m_BucketCount = Size;
    m_BucketBits = 0;
    while (Size >>= 1)
        m_BucketBits++;
    m_Count = 0;
    m_Collisions = 0;
    for (int i = 0; i < m_BucketCount; i++)
        m_Buckets[i] = 0;
    for (int j = 0; j < OldSize; j++)
    {
        Class_10AA44B0_Node* Node = OldTable[j];
        while (Node)
        {
            Insert(*Node, Node->m_Name);
            Class_10AA44B0_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    ::operator delete(OldTable);
}

// FUNCTION: 0x10AA44B0 ?Free@Class_10AA44B0@@QAEXXZ
void Class_10AA44B0::Free()
{
    Clear(0x40);
    ::operator delete(m_Buckets);
    m_Count = 0;
    m_BucketCount = 0;
    m_Buckets = 0;
    m_Collisions = 0;
}
