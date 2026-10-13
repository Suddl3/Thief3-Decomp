// Game/Unsorted_10C49AB0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10C49100_Node.h"

unsigned int HashBytes(const void* Data, int Length);

// The table's key hasher: slot 0 gives the bytes HashBytes hashes, slot 1 compares a key with an entry's key (0 when they are equal).
class Class_10C49100_Field18
{
public:
    virtual void Virtual0(const cString& Key, const void** Data, int* Length);
    virtual int Virtual1(const cString& Key, const cString& Other);
};

class Class_10C49100
{
public:
    unsigned int Insert(const cString& Key, const int& Value);
    void Rehash(int Size);
    bool Remove(const cString& Key);

    int m_Collisions;
    int m_Count;
    int m_BucketBits;
    int m_BucketCount;
    bool m_FixedSize;
    Class_10C49100_Node** m_Buckets;
    Class_10C49100_Field18 m_KeyTraits;
};

// FUNCTION: 0x10C49C90 ?Remove@Class_10C49100@@QAE_NABVcString@@@Z
bool Class_10C49100::Remove(const cString& Key)
{
    if (!m_FixedSize && m_Count < m_BucketCount * 0.05 && m_BucketCount > 64)
        Rehash(m_BucketCount / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_KeyTraits.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_BucketBits) - 1);
    }
    for (Class_10C49100_Node* Node = m_Buckets[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (m_KeyTraits.Virtual1(Key, Node->Key) == 0)
        {
            if (Prev || Node->Next)
                m_Collisions--;
            if (!Prev)
                m_Buckets[Index] = Node->Next;
            else
                Prev->Next = Node->Next;
            m_Count--;
            delete Node;
            return true;
        }
    }
    return false;
}
