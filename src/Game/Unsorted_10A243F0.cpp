// Game/Unsorted_10A243F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A243F0.h"
#include "Game/Class_10A24540.h"
#include "Game/Class_10A250D0_Field18.h"
#include "Game/cString.h"
#include "Game/Class_10A250D0.h"
#include "Game/Class_10A250D0_Node.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A24540 ?ReplaceChar@Class_10A24540@@QAEXDD@Z
void Class_10A24540::ReplaceChar(char Old, char New)
{
    for (int i = 0; i < (m_Chars == 0 ? 0 : ((int*)m_Chars)[-1]); i++)
    {
        if (m_Chars[i] == Old)
            m_Chars[i] = New;
    }
}

// FUNCTION: 0x10A24580 ?Free@Class_10A243F0@@QAEXXZ
void Class_10A243F0::Free()
{
    Resize(0);
    if (m_BufferBytes)
    {
        GetAllocator()->Virtual5(m_Buffer);
        m_Buffer = 0;
        m_BufferBytes = 0;
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
            Insert(Node->Unknown00, Node->Unknown04);
            Class_10A250D0_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}
