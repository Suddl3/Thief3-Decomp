// Game/Class_1093AF30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1093AF30.h"
#include "Game/cString.h"
#include "Game/Class_1093AF30_Node.h"
#include "Game/Class_1093AF30_Field18.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x1093AF30 ?Insert@Class_1093AF30@@QAEIABVcString@@ABH@Z
unsigned int Class_1093AF30::Insert(const cString& Key, const int& Value)
{
    if (!m_NoAutoGrow && m_Collisions > m_BucketCount * 0.2)
        Rehash(m_BucketCount * 2);
    Class_1093AF30_Node* Node = new(0, 0, 0, 0, 0) Class_1093AF30_Node;
    Node->Key = Key;
    Node->Value = Value;
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_KeyTraits.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_BucketBits) - 1);
    }
    if (m_Buckets[Index])
        m_Collisions++;
    Node->Next = m_Buckets[Index];
    m_Buckets[Index] = Node;
    m_Count++;
    return Index;
}

// FUNCTION: 0x1093B040 ?Rehash@Class_1093AF30@@QAEXH@Z
void Class_1093AF30::Rehash(int Size)
{
    int OldSize = m_BucketCount;
    Class_1093AF30_Node** OldBuckets = m_Buckets;
    m_Buckets = new(0, 0, 0, 0, 0) Class_1093AF30_Node*[Size];
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
        Class_1093AF30_Node* Node = OldBuckets[j];
        while (Node)
        {
            Insert(Node->Key, Node->Value);
            Class_1093AF30_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}
