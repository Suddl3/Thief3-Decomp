// Game/Unsorted_10C5BB10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
// The placement delete that pairs with Ion Storm's new.
#include "Game/cString.h"
#include "Game/Struct_10C5BA20.h"
#include "Game/Class_10C5BA20.h"
#include "Game/Class_10C5BB10.h"
#include "Game/Class_10C5BB10_Unknown18.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// A chained hash table's entry: 48 bytes, allocated per insert.
class Class_10C5BB10_Node
{
public:
    int Key;
    Class_10C5BA20 Value;
    Class_10C5BB10_Node* Next;
};

// FUNCTION: 0x10C5BB10 ?Insert@Class_10C5BB10@@QAEIABHABVClass_10C5BA20@@@Z
unsigned int Class_10C5BB10::Insert(const int& Key, const Class_10C5BA20& Value)
{
    if (!Unknown10 && m_Collisions > m_BucketCount * 0.2)
        FUN_10c5bbf0(m_BucketCount * 2);
    Class_10C5BB10_Node* Node = new(0, 0, 0, 0, 0) Class_10C5BB10_Node;
    Node->Key = Key;
    Node->Value.CopyFrom(Value);
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
