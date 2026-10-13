// Game/Class_10A15D50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A15D50.h"
#include "Game/Class_10A15D50_Node.h"
#include "Game/Class_10A15D50_Unknown18.h"
#include "Game/Struct_10A15D50_Value.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10A15D50 ?Insert@Class_10A15D50@@QAEIABHABUStruct_10A15D50_Value@@@Z
unsigned int Class_10A15D50::Insert(const int& Key, const Struct_10A15D50_Value& Value)
{
    if (!m_FixedSize && m_Collisions > m_BucketCount * 0.2)
        Rehash(m_BucketCount * 2);
    Class_10A15D50_Node* Node = new(0, 0, 0, 0, 0) Class_10A15D50_Node;
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
