// Game/Unsorted_10A34780_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A34B90_Node.h"
#include "Game/Class_10A34C10.h"
#include "Game/Class_10A34B90.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class cString
{
public:
    cString() : Unknown00(0) {}
    ~cString();

    cString& operator=(const cString& Other);

    char* Unknown00;
};

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10A34C10_Unknown10;

// A bucket entry (0x18 bytes).
struct Class_10A34C10_Node
{
    cString Key;
    char Unknown04[0xC];
    Class_10A34C10_Unknown10* Value;
    Class_10A34C10_Node* Next;
};

// FUNCTION: 0x10A34810 ?Rehash@Class_10A34B90@@QAEXH@Z
void Class_10A34B90::Rehash(int Size)
{
    int OldSize = m_BucketCount;
    Class_10A34B90_Node** OldBuckets = m_Buckets;
    Class_10A34B90_Node** Buckets = new(0, 0, 0, 0, 0) Class_10A34B90_Node*[Size];
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
        Class_10A34B90_Node* Node = OldBuckets[j];
        while (Node)
        {
            Insert(Node, &Node->Unknown10);
            Class_10A34B90_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}

// FUNCTION: 0x10A349E0 ?Rehash@Class_10A34C10@@QAEXH@Z
void Class_10A34C10::Rehash(int NewSize)
{
    int OldSize = Size;
    Class_10A34C10_Node** OldTable = Table;
    Table = (Class_10A34C10_Node**)operator new(NewSize * sizeof(Class_10A34C10_Node*), 0, 0, 0, 0, 0);
    Size = NewSize;
    Bits = 0;
    while (NewSize >>= 1)
        Bits++;
    Count = 0;
    Collisions = 0;
    for (int i = 0; i < Size; i++)
        Table[i] = 0;
    for (int j = 0; j < OldSize; j++)
    {
        Class_10A34C10_Node* Node = OldTable[j];
        while (Node)
        {
            FUN_10a348e0(Node->Key, &Node->Value);
            Class_10A34C10_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    ::operator delete(OldTable);
}
