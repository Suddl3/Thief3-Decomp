// Game/cInt64HashTable.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A34420_Unknown18.h"
#include "Game/cInt64HashTable.h"
#include "Game/Class_10A345C0_Node.h"

extern "C" void* memcpy(void* Dest, const void* Src, unsigned int Size);

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10A34420 ?Insert@cInt64HashTable@@QAEIPA_JPAH@Z
unsigned int cInt64HashTable::Insert(__int64* Key, int* Value)
{
    if (!Unknown10 && m_Collisions > m_Size * 0.2)
        Rehash(m_Size * 2);
    Class_10A345C0_Node* Node = new(0, 0, 0, 0, 0) Class_10A345C0_Node;
    memcpy(Node->Key, Key, sizeof(Node->Key));
    Node->Value = *Value;
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_KeyOps.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_Bits) - 1);
    }
    if (m_Buckets[Index])
        m_Collisions++;
    Node->Next = m_Buckets[Index];
    m_Buckets[Index] = Node;
    m_Count++;
    return Index;
}
