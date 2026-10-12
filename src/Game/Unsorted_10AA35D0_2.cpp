// Game/Unsorted_10AA35D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// A chained hash table's entry: 12 bytes, allocated per insert.
class Class_10AA44B0_Node
{
public:
    int Key;
    cString Value;
    Class_10AA44B0_Node* Next;
};

// The table's key hasher: slot 0 gives the bytes HashBytes hashes.
class Class_10AA44B0_Field18
{
public:
    virtual void Virtual0(const int& Key, const void** Data, int* Length);
};

class Class_10AA44B0
{
public:
    void Clear(int A);
    void Free();
    void Rehash(int Size);
    unsigned int Insert(const int& Key, const cString& Value);

    int m_Collisions;
    int m_Count;
    int m_BucketBits;
    int m_BucketCount;
    bool m_FixedSize;
    char Pad11[0x3];
    Class_10AA44B0_Node** m_Buckets;
    Class_10AA44B0_Field18 Unknown18;
};

// FUNCTION: 0x10AA35D0 ?Insert@Class_10AA44B0@@QAEIABHABVcString@@@Z
unsigned int Class_10AA44B0::Insert(const int& Key, const cString& Value)
{
    if (!m_FixedSize && m_Collisions > m_BucketCount * 0.2)
        Rehash(m_BucketCount * 2);
    Class_10AA44B0_Node* Node = new(0, 0, 0, 0, 0) Class_10AA44B0_Node;
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
