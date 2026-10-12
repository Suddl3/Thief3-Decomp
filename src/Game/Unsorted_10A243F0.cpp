// Game/Unsorted_10A243F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A243F0.h"
#include "Game/Class_10A24540.h"
#include "Game/Class_10A250D0_Field18.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10A250D0.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// A chained hash table's entry from a string to a string: 12 bytes, allocated
// per insert; its implicit destructor (0x10A24660) frees both strings.
class Class_10A250D0_Node
{
public:
    Class_109081E0 Key;
    Class_109081E0 Value;
    Class_10A250D0_Node* Next;
};

// FUNCTION: 0x10A24540 ?FUN_10a24540@Class_10A24540@@QAEXDD@Z
void Class_10A24540::FUN_10a24540(char Old, char New)
{
    for (int i = 0; i < (Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1]); i++)
    {
        if (Unknown00[i] == Old)
            Unknown00[i] = New;
    }
}

// FUNCTION: 0x10A24580 ?FUN_10a24580@Class_10A243F0@@QAEXXZ
void Class_10A243F0::FUN_10a24580()
{
    FUN_10a243f0(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10A251B0 ?Rehash@Class_10A250D0@@QAEXH@Z
void Class_10A250D0::Rehash(int Size)
{
    int OldSize = m_BucketCount;
    Class_10A250D0_Node** OldBuckets = m_Buckets;
    m_Buckets = new(0, 0, 0, 0, 0) Class_10A250D0_Node*[Size];
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
        Class_10A250D0_Node* Node = OldBuckets[j];
        while (Node)
        {
            Insert(Node->Key, Node->Value);
            Class_10A250D0_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}
