// Game/cHashMap_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C00F60_Node.h"
#include "Game/cHashMap.h"

// FUNCTION: 0x10C01000 ?FUN_10c01000@cHashMap@@QAE_NABHPAH@Z
bool cHashMap::FUN_10c01000(const int& Key, int* Value)
{
    unsigned int Index = GetBucketIndex(Key);
    if (!m_Buckets)
        return false;
    for (Class_10C00F60_Node* Node = m_Buckets[Index]; Node; Node = Node->Next)
    {
        if (m_KeyCompare.Virtual1(Key, Node->Key) == 0)
        {
            *Value = Node->Value;
            return true;
        }
    }
    return false;
}
