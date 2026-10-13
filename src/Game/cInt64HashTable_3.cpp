// Game/cInt64HashTable_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10A345C0_Node;

unsigned int HashBytes(const void* Data, int Length);

// Copied whole from include/Game/Class_10A34420_Unknown18.h with slot 1 added: the table's key hasher.
class Class_10A34420_Unknown18
{
public:
    virtual void Virtual0(const __int64* Key, const void** Data, int* Length);
    virtual int Virtual1(const __int64* Key, Class_10A345C0_Node* Node);
};

// Copied whole from include/Game/cInt64HashTable.h; its include of Class_10A34420_Unknown18.h is replaced by the copy above.
class cInt64HashTable
{
public:
    unsigned int Insert(__int64* Key, int* Value);
    void Rehash(int Size);
    unsigned int InsertOrAssign(__int64* Key, int* Value);
    bool FUN_10a345c0(__int64* Range, int* Index);

    int m_Collisions;
    int m_Count;
    int m_Bits;
    int m_Size;
    bool Unknown10;
    char Pad11[0x3];
    Class_10A345C0_Node** m_Buckets;
    Class_10A34420_Unknown18 m_KeyOps;
};

class Class_10A345C0_Node
{
public:
    __int64 Key;
    char Unknown08[0x8];
    int Value;
    Class_10A345C0_Node* Next;
};

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
