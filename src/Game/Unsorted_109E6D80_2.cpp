// Game/Unsorted_109E6D80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

unsigned int HashBytes(const void* Data, int Length);

// Ion Storm's string (0x109081E0): a char pointer, null when default constructed.
class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0();
    Class_109081E0& operator=(const Class_109081E0& Other);

    char* Unknown00;
};

// A chained hash table's entry: 12 bytes, allocated per insert.
class Class_109E6520_Node
{
public:
    Class_109081E0 Key;
    int Value;
    Class_109E6520_Node* Next;
};

// The table's key hasher: slot 0 gives the bytes HashBytes hashes,
// slot 1 compares a key with an entry's key (0 when they are equal).
class Class_109E6520_Field18
{
public:
    virtual void Virtual0(const Class_109081E0& Key, const void** Data, int* Length);
    virtual int Virtual1(const Class_109081E0& Key, const Class_109081E0& Other);
};

// The hash table of Class_109E6520's header, with Remove added.
class Class_109E6520
{
public:
    unsigned int Insert(const Class_109081E0& Key, const int& Value);
    void Rehash(int Size);
    bool Remove(const Class_109081E0& Key);

    int m_Collisions;
    int m_Count;
    int m_BucketBits;
    int m_BucketCount;
    bool m_FixedSize;
    char Pad11[0x3];
    Class_109E6520_Node** m_Buckets;
    Class_109E6520_Field18 m_KeyTraits;
};

// FUNCTION: 0x109E7B20 ?Remove@Class_109E6520@@QAE_NABVClass_109081E0@@@Z
bool Class_109E6520::Remove(const Class_109081E0& Key)
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
    for (Class_109E6520_Node* Node = m_Buckets[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
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
