// Game/cInt64HashTable_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A34420_Unknown18.h"
#include "Game/Class_10A345C0_Node.h"
#include "Game/cInt64HashTable.h"

class Class_10A345C0_Node;

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10A345C0 ?FUN_10a345c0@cInt64HashTable@@QAE_NPA_JPAH@Z
bool cInt64HashTable::FUN_10a345c0(__int64* Range, int* Index)
{
    const void* Data;
    int Length;
    m_KeyOps.Virtual0(Range, &Data, &Length);
    Class_10A345C0_Node** Buckets = m_Buckets;
    if (!Buckets)
        return false;
    unsigned int Hash = HashBytes(Data, Length) & ((1 << m_Bits) - 1);
    for (Class_10A345C0_Node* Node = Buckets[Hash]; Node; Node = Node->Next)
    {
        if (m_KeyOps.Virtual1(Range, Node) == 0)
        {
            *Index = Node->Value;
            return true;
        }
    }
    return false;
}
