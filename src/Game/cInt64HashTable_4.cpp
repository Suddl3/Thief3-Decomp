// Game/cInt64HashTable_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10A345C0_Node;

class Class_10A34650_Value;

unsigned int HashBytes(const void* Data, int Length);

// Copied whole from include/Game/Class_10A34420_Unknown18.h with slot 1 added: the table's key hasher.
class Class_10A34420_Unknown18
{
public:
    virtual void Virtual0(const __int64* Key, const void** Data, int* Length);
    virtual int Virtual1(const __int64* Key, Class_10A345C0_Node* Node);
};

class Class_10A34650_Value
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

// Copied whole from include/Game/cInt64HashTable.h; its include of Class_10A34420_Unknown18.h is replaced by the copy above.
class cInt64HashTable
{
public:
    unsigned int Insert(__int64* Key, int* Value);
    void Rehash(int Size);
    unsigned int InsertOrAssign(__int64* Key, int* Value);
    bool FUN_10a345c0(__int64* Range, int* Index);
    bool FUN_10a34650(__int64* Range, Class_10A34650_Value** Out);

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
    Class_10A34650_Value* Value;
    Class_10A345C0_Node* Next;
};

// FUNCTION: 0x10A34650 ?FUN_10a34650@cInt64HashTable@@QAE_NPA_JPAPAVClass_10A34650_Value@@@Z
bool cInt64HashTable::FUN_10a34650(__int64* Range, Class_10A34650_Value** Out)
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
            Class_10A34650_Value* Old = *Out;
            Class_10A34650_Value* New = Node->Value;
            *Out = New;
            if (New)
                New->Virtual1();
            if (Old)
                Old->Virtual2();
            return true;
        }
    }
    return false;
}
