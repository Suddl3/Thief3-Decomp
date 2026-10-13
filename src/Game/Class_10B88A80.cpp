// Game/Class_10B88A80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B88A80_Field18.h"
#include "Game/Class_10B89820.h"
#include "Game/Class_10B88A80.h"

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
class Class_10B88A80_Node
{
public:
    cString Key;
    int Value;
    Class_10B88A80_Node* Next;
};

// FUNCTION: 0x10B88A80 ?Insert@Class_10B88A80@@QAEIABVcString@@ABH@Z
unsigned int Class_10B88A80::Insert(const cString& Key, const int& Value)
{
    if (!m_FixedSize && m_Collisions > m_BucketCount * 0.2)
        Rehash(m_BucketCount * 2);
    Class_10B88A80_Node* Node = new(0, 0, 0, 0, 0) Class_10B88A80_Node;
    Node->Key = Key;
    Node->Value = Value;
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_Hasher.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_HashBits) - 1);
    }
    if (m_Buckets[Index])
        m_Collisions++;
    Node->Next = m_Buckets[Index];
    m_Buckets[Index] = Node;
    m_Count++;
    return Index;
}

// FUNCTION: 0x10B88B60 ?Rehash@Class_10B88A80@@QAEXH@Z
void Class_10B88A80::Rehash(int Size)
{
    int OldSize = m_BucketCount;
    Class_10B88A80_Node** OldBuckets = m_Buckets;
    m_Buckets = new(0, 0, 0, 0, 0) Class_10B88A80_Node*[Size];
    m_BucketCount = Size;
    m_HashBits = 0;
    while (Size >>= 1)
        m_HashBits++;
    m_Count = 0;
    m_Collisions = 0;
    for (int i = 0; i < m_BucketCount; i++)
        m_Buckets[i] = 0;
    for (int j = 0; j < OldSize; j++)
    {
        Class_10B88A80_Node* Node = OldBuckets[j];
        while (Node)
        {
            Insert(Node->Key, Node->Value);
            Class_10B88A80_Node* Next = Node->Next;
            Node->Key.~cString();
            ::operator delete(Node);
            Node = Next;
        }
    }
    delete OldBuckets;
}
