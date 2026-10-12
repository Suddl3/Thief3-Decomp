// Game/Unsorted_10A3C2C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A3C2E0.h"
#include "Game/Class_10A3C640_Field18.h"
#include "Game/Object_10A18FC0.h"
#include "Game/Class_10A3C640.h"

Object_10A18FC0* FUN_10a18fc0();

// Ion Storm's string (0x109081E0): a char pointer, null when default constructed.
class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0();
    Class_109081E0& operator=(const Class_109081E0& Other);

    char* Unknown00;
};

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// A chained hash table's entry: 12 bytes, allocated per insert.
class Class_10A3C640_Node
{
public:
    Class_109081E0 Key;
    int Value;
    Class_10A3C640_Node* Next;
};

// FUNCTION: 0x10A3C2E0 ?Reset@Class_10A3C2E0@@QAEXXZ
void Class_10A3C2E0::Reset()
{
    Unknown28 = 0;
    Unknown20 = 0;
    Unknown24 = 0;
    Unknown30 = 0;
    FUN_10a18fc0()->Virtual6(0, 0);
}

// FUNCTION: 0x10A3C640 ?Insert@Class_10A3C640@@QAEIABVClass_109081E0@@ABH@Z
unsigned int Class_10A3C640::Insert(const Class_109081E0& Key, const int& Value)
{
    if (!m_FixedSize && m_Collisions > m_BucketCount * 0.2)
        Rehash(m_BucketCount * 2);
    Class_10A3C640_Node* Node = new(0, 0, 0, 0, 0) Class_10A3C640_Node;
    Node->Key = Key;
    Node->Value = Value;
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_BucketBits) - 1);
    }
    if (m_Buckets[Index])
        m_Collisions++;
    Node->Next = m_Buckets[Index];
    m_Buckets[Index] = Node;
    m_Count++;
    return Index;
}

// FUNCTION: 0x10A3C7D0 ?Rehash@Class_10A3C640@@QAEXH@Z
void Class_10A3C640::Rehash(int Size)
{
    int OldSize = m_BucketCount;
    Class_10A3C640_Node** OldBuckets = m_Buckets;
    m_Buckets = new(0, 0, 0, 0, 0) Class_10A3C640_Node*[Size];
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
        Class_10A3C640_Node* Node = OldBuckets[j];
        while (Node)
        {
            Insert(Node->Key, Node->Value);
            Class_10A3C640_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}
