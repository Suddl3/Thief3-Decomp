// Game/Unsorted_10A25AA0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10A250D0.h"
#include "Game/Class_10A250D0_Node.h"

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10A26430 ?Set@Class_10A250D0@@QAEIABVcString@@0@Z
unsigned int Class_10A250D0::Set(const cString& Key, const cString& Value)
{
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_KeyTraits.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_BucketBits) - 1);
    }
    if (!m_Buckets)
        return (unsigned int)-1;
    for (Class_10A250D0_Node* Node = m_Buckets[Index]; Node; Node = Node->Next)
    {
        if (m_KeyTraits.Virtual1(Key, Node->Unknown00) == 0)
        {
            Node->Unknown04 = Value;
            return Index;
        }
    }
    return Insert(Key, Value);
}
