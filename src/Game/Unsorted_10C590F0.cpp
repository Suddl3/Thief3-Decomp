// Game/Unsorted_10C590F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

unsigned int HashBytes(const void* Data, int Length);

// A chained hash table's entry: 12 bytes, allocated per insert.
class Class_10C591A0_Node
{
public:
    int Key;
    int Value;
    Class_10C591A0_Node* Next;
};

// The table's key hasher: slot 0 gives the bytes HashBytes hashes,
// slot 1 compares a key with an entry's key (0 when they are equal).
class Class_10C591A0_Field18
{
public:
    virtual void Virtual0(const int& Key, const void** Data, int* Length);
    virtual int Virtual1(const int& Key, const int& Other);
};

// The hash table of 0x10C591A0: its header plus the members this function uses.
class Class_10C591A0
{
public:
    bool Remove(int* A);
    void Rehash(int Size);

    int m_Collisions;
    int m_Count;
    int m_BucketBits;
    int m_BucketCount;
    bool Unknown10;
    Class_10C591A0_Node** m_Buckets;
    Class_10C591A0_Field18 m_KeyTraits;
};

// FUNCTION: 0x10C591A0 ?Remove@Class_10C591A0@@QAE_NPAH@Z
bool Class_10C591A0::Remove(int* A)
{
    if (!Unknown10 && m_Count < m_BucketCount * 0.05 && m_BucketCount > 64)
        Rehash(m_BucketCount / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_KeyTraits.Virtual0(*A, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_BucketBits) - 1);
    }
    for (Class_10C591A0_Node* Node = m_Buckets[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (m_KeyTraits.Virtual1(*A, Node->Key) == 0)
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
