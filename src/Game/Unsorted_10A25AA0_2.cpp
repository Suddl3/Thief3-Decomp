// Game/Unsorted_10A25AA0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"

unsigned int HashBytes(const void* Data, int Length);

class Class_10A250D0_Field18
{
public:
    virtual void Virtual0(const Class_109081E0& Key, const void** Data, int* Length);
    virtual int Virtual1(const Class_109081E0& Key, const Class_109081E0& Other);
};

class Class_10A250D0_Node
{
public:
    Class_109081E0 Key;
    Class_109081E0 Value;
    Class_10A250D0_Node* Next;
};

// Copied from include/Game/Class_10A250D0.h with Set added.
class Class_10A250D0
{
public:
    unsigned int Insert(const Class_109081E0& Key, const Class_109081E0& Value);
    void Rehash(int Size);
    unsigned int Set(const Class_109081E0& Key, const Class_109081E0& Value);

    int m_Collisions;
    int m_Count;
    int m_BucketBits;
    int m_BucketCount;
    bool m_FixedSize;
    char Pad11[0x3];
    Class_10A250D0_Node** m_Buckets;
    Class_10A250D0_Field18 m_KeyTraits;
};

// FUNCTION: 0x10A26430 ?Set@Class_10A250D0@@QAEIABVClass_109081E0@@0@Z
unsigned int Class_10A250D0::Set(const Class_109081E0& Key, const Class_109081E0& Value)
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
        if (m_KeyTraits.Virtual1(Key, Node->Key) == 0)
        {
            Node->Value = Value;
            return Index;
        }
    }
    return Insert(Key, Value);
}
