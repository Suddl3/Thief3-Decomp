// Game/Class_10A15D50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A15D50.h"
#include "Game/Class_10A15D50_Node.h"
#include "Game/Class_10A15D50_Unknown18.h"
#include "Game/Struct_10A15D50_Value.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10A15D50 ?Insert@Class_10A15D50@@QAEIABHABUStruct_10A15D50_Value@@@Z
unsigned int Class_10A15D50::Insert(const int& Key, const Struct_10A15D50_Value& Value)
{
    if (!m_FixedSize && m_Collisions > m_BucketCount * 0.2)
        Rehash(m_BucketCount * 2);
    Class_10A15D50_Node* Node = new(0, 0, 0, 0, 0) Class_10A15D50_Node;
    Node->Key = Key;
    Node->Value = Value;
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_KeyTraits.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_BucketBits) - 1);
    }
    if (m_Buckets[Index])
        m_Collisions++;
    Node->Next = m_Buckets[Index];
    m_Buckets[Index] = Node;
    m_Count++;
    return Index;
}
