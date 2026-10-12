// Game/cInt64HashTable_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A34510_Field18.h"

unsigned int HashBytes(const void* Data, int Length);

class Class_10A34510_Node
{
public:
    __int64 Key;
    char Unknown08[0x8];
    int Value;
    Class_10A34510_Node* Next;
};

class cInt64HashTable
{
public:
    unsigned int Insert(__int64* Key, int* Value);
    unsigned int InsertOrAssign(__int64* Key, int* Value);

    int m_Collisions;
    int m_Count;
    int m_Bits;
    int m_Size;
    int Unknown10;
    Class_10A34510_Node** m_Buckets;
    Class_10A34510_Field18 m_KeyOps;
};

// FUNCTION: 0x10A34510 ?InsertOrAssign@cInt64HashTable@@QAEIPA_JPAH@Z
unsigned int cInt64HashTable::InsertOrAssign(__int64* Key, int* Value)
{
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_KeyOps.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_Bits) - 1);
    }
    if (!m_Buckets)
        return (unsigned int)-1;
    for (Class_10A34510_Node* Node = m_Buckets[Index]; Node; Node = Node->Next)
    {
        if (m_KeyOps.Virtual1(Key, &Node->Key) == 0)
        {
            Node->Value = *Value;
            return Index;
        }
    }
    return Insert(Key, Value);
}
