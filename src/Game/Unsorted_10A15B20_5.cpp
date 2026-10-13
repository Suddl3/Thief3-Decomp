// Game/Unsorted_10A15B20_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A15D50.h"
#include "Game/Class_10A15D50_Node.h"
#include "Game/Struct_10A15D50_Value.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A15E20 ?Rehash@Class_10A15D50@@QAEXH@Z
void Class_10A15D50::Rehash(int Size)
{
    int OldSize = m_BucketCount;
    Class_10A15D50_Node** OldBuckets = m_Buckets;
    Class_10A15D50_Node** Buckets = new(0, 0, 0, 0, 0) Class_10A15D50_Node*[Size];
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
        Class_10A15D50_Node* Node = OldBuckets[j];
        while (Node)
        {
            Insert(Node->Key, Node->Value);
            Class_10A15D50_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}
