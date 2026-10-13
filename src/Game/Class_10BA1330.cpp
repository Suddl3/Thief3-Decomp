// Game/Class_10BA1330.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BA1330.h"
#include "Game/Class_10BA1330_Field18.h"
#include "Game/Class_10BA1330_Node.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10BA1330 ?Insert@Class_10BA1330@@QAEIABH0@Z
unsigned int Class_10BA1330::Insert(const int& Key, const int& Value)
{
    if (!m_FixedSize && m_Collisions > m_BucketCount * 0.2)
        Resize(m_BucketCount * 2);
    Class_10BA1330_Node* Node = new(0, 0, 0, 0, 0) Class_10BA1330_Node;
    Node->Key = Key;
    Node->Value = Value;
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_KeyHash.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_BucketBits) - 1);
    }
    if (m_Buckets[Index])
        m_Collisions++;
    Node->Next = m_Buckets[Index];
    m_Buckets[Index] = Node;
    m_Count++;
    return Index;
}

// FUNCTION: 0x10BA13F0 ?Resize@Class_10BA1330@@QAEXH@Z
void Class_10BA1330::Resize(int Size)
{
    int OldSize = m_BucketCount;
    Class_10BA1330_Node** OldBuckets = m_Buckets;
    m_Buckets = new(0, 0, 0, 0, 0) Class_10BA1330_Node*[Size];
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
        Class_10BA1330_Node* Node = OldBuckets[j];
        while (Node)
        {
            Insert(Node->Key, Node->Value);
            Class_10BA1330_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}
