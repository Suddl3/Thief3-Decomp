// Game/Unsorted_10C49030.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <stdio.h>
#include "Game/Class_1090A780.h"
#include "Game/Class_10C49100_Field18.h"
#include "Game/Class_10C491E0.h"
#include "Game/Struct_10C49030.h"
#include "Game/Class_10C49100.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10C49100_Node.h"
#include "Game/Class_10E9BB8C.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10C49100 ?Insert@Class_10C49100@@QAEIABVClass_109081E0@@ABH@Z
unsigned int Class_10C49100::Insert(const Class_109081E0& Key, const int& Value)
{
    if (!m_FixedSize && m_Collisions > m_BucketCount * 0.2)
        Rehash(m_BucketCount * 2);
    Class_10C49100_Node* Node = new(0, 0, 0, 0, 0) Class_10C49100_Node;
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

// FUNCTION: 0x10C491E0 ?FUN_10c491e0@Class_10C491E0@@QAE?AVClass_1090A780@@XZ
Class_1090A780 Class_10C491E0::FUN_10c491e0()
{
    return *Unknown00;
}
