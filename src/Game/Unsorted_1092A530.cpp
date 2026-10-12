// Game/Unsorted_1092A530.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1092A370_Field18.h"
#include "Game/cHashTable.h"

// Ion Storm's string (0x109081E0): a char pointer, null when default constructed.
class cString
{
public:
    cString() : Unknown00(0) {}
    ~cString();
    cString& operator=(const cString& Other);

    char* Unknown00;
};

unsigned int HashBytes(const void* Data, int Length);

// A chained hash table's entry: 12 bytes, allocated per insert.
class Class_1092A370_Node
{
public:
    cString Key;
    int Value;
    Class_1092A370_Node* Next;
};

// FUNCTION: 0x1092B8F0 ?Remove@cHashTable@@QAE_NABVcString@@@Z
bool cHashTable::Remove(const cString& Key)
{
    if (!m_NoAutoResize && m_Count < m_BucketCount * 0.05 && m_BucketCount > 64)
        Rehash(m_BucketCount / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_KeyTraits.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_BucketBits) - 1);
    }
    for (Class_1092A370_Node* Node = m_Buckets[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
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
