// Game/Unsorted_10932910.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10932910_Field18.h"
#include "Game/Class_10932910.h"

// Ion Storm's string (0x109081E0): a char pointer, null when default constructed.
class cString
{
public:
    cString() : Unknown00(0) {}
    ~cString();
    cString& operator=(const cString& Other);

    char* Unknown00;
};

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// A chained hash table's entry: 12 bytes, allocated per insert.
class Class_10932910_Node
{
public:
    cString Key;
    int Value;
    Class_10932910_Node* Next;
};

// FUNCTION: 0x10932910 ?Rehash@Class_10932910@@QAEXH@Z
void Class_10932910::Rehash(int Size)
{
    int OldSize = m_BucketCount;
    Class_10932910_Node** OldBuckets = m_Buckets;
    m_Buckets = new(0, 0, 0, 0, 0) Class_10932910_Node*[Size];
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
        Class_10932910_Node* Node = OldBuckets[j];
        while (Node)
        {
            Insert(Node->Key, Node->Value);
            Class_10932910_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}
