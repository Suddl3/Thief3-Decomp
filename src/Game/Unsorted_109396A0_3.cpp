// Game/Unsorted_109396A0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1093AF30.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// Ion Storm's string: a char buffer it frees on destruction.
class Class_109081E0
{
public:
    ~Class_109081E0();

    char* Unknown00;
};

// A chained hash table's entry keyed by a string: 12 bytes, allocated per insert.
class Class_1093AF30_Node
{
public:
    Class_109081E0 Key;
    int Value;
    Class_1093AF30_Node* Next;
};

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
