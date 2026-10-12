// Game/Unsorted_1097B0B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090A780.h"
#include "Game/cString.h"
#include "Game/Class_1097B240_Node.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr);

class Class_1097B240
{
public:
    void Resize(int Size);
    unsigned int Insert(const cString& Key, const int& Value);

    int Unknown00;
    int Unknown04;
    int m_LogBucketCount;
    int m_BucketCount;
    bool Unknown10;
    Class_1097B240_Node** m_Buckets;
};

// FUNCTION: 0x1097B240 ?Resize@Class_1097B240@@QAEXH@Z
void Class_1097B240::Resize(int Size)
{
    int OldSize = m_BucketCount;
    Class_1097B240_Node** OldTable = m_Buckets;
    m_Buckets = (Class_1097B240_Node**)operator new(Size * sizeof(Class_1097B240_Node*), 0, 0, 0, 0, 0);
    m_BucketCount = Size;
    m_LogBucketCount = 0;
    while (Size >>= 1)
        m_LogBucketCount++;
    Unknown04 = 0;
    Unknown00 = 0;
    for (int i = 0; i < m_BucketCount; i++)
        m_Buckets[i] = 0;
    for (int j = 0; j < OldSize; j++)
    {
        Class_1097B240_Node* Node = OldTable[j];
        while (Node)
        {
            Insert(Node->Key, Node->Value);
            Class_1097B240_Node* Next = Node->Next;
            Node->Key.~cString();
            ::operator delete(Node);
            Node = Next;
        }
    }
    ::operator delete(OldTable);
}
