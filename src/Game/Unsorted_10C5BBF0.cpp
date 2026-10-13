// Game/Unsorted_10C5BBF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C5B990.h"
#include "Game/Class_10C5BA20.h"

class Class_10C5BA20;

class Class_10C5BB10_Unknown18
{
public:
    virtual void Virtual0(const int& Key, const void** Data, int* Length);
    virtual int Virtual1(const int& Key, const Class_10C5B990& Node);
};

class Class_10C5BB10_Node
{
public:
    Class_10C5B990 Key;
    char Unknown08[0x24];
    Class_10C5BB10_Node* Next;
};

unsigned int HashBytes(const void* Data, int Length);

class Class_10C5BB10
{
public:
    void FUN_10c5bbf0(int Size);
    unsigned int Insert(const int& Key, const Class_10C5BA20& Value);
    bool FUN_10c5bd80(const int& Key);

    int m_Collisions;
    int m_Count;
    int m_BucketBits;
    int m_BucketCount;
    bool Unknown10;
    Class_10C5BB10_Node** m_Buckets;
    Class_10C5BB10_Unknown18 Unknown18;
};

class Class_10C5B910;

class Class_10C5BE90_Unknown14;

class Class_10C5BE90_Unknown18;

class Class_10C5BE90_Unknown18
{
public:
    virtual void Virtual0(int* Key, const void** Data, int* Length);
    virtual int Virtual1(int* Key, Class_10C5BE90_Unknown14* Node);
};

class Class_10C5BE90_Unknown14
{
public:
    char Unknown00[0x4];
    Class_10C5BA20 Unknown04;
    Class_10C5BE90_Unknown14* Next;
};

// Copied from include/Game/Class_10C5BFD0.h with the fields this method reads added in place of its pad.
class Class_10C5BFD0
{
public:
    bool FUN_10c5be90(int* A, Class_10C5B910* B);
    void FUN_10c5bcd0(int* A, Class_10C5B910* B);
    void Update(int A, int B);

    char Pad00[0x8];
    int Unknown08;
    char Pad0C[0x8];
    Class_10C5BE90_Unknown14** Unknown14;
    Class_10C5BE90_Unknown18 Unknown18;
};

// FUNCTION: 0x10C5BD80 ?FUN_10c5bd80@Class_10C5BB10@@QAE_NABH@Z
bool Class_10C5BB10::FUN_10c5bd80(const int& Key)
{
    if (!Unknown10 && m_Count < m_BucketCount * 0.05 && m_BucketCount > 64)
        FUN_10c5bbf0(m_BucketCount / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_BucketBits) - 1);
    }
    for (Class_10C5BB10_Node* Node = m_Buckets[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (Unknown18.Virtual1(Key, Node->Key) == 0)
        {
            if (Prev || Node->Next)
                m_Collisions--;
            if (!Prev)
                m_Buckets[Index] = Node->Next;
            else
                Prev->Next = Node->Next;
            m_Count--;
            Node->Key.FUN_10c5b990();
            delete Node;
            return true;
        }
    }
    return false;
}

// FUNCTION: 0x10C5BE90 ?FUN_10c5be90@Class_10C5BFD0@@QAE_NPAHPAVClass_10C5B910@@@Z
bool Class_10C5BFD0::FUN_10c5be90(int* A, Class_10C5B910* B)
{
    const void* Data;
    int Length;
    Unknown18.Virtual0(A, &Data, &Length);
    Class_10C5BE90_Unknown14** Table = Unknown14;
    if (!Table)
        return false;
    unsigned int Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    for (Class_10C5BE90_Unknown14* Node = Table[Index]; Node; Node = Node->Next)
    {
        if (Unknown18.Virtual1(A, Node) == 0)
        {
            ((Class_10C5BA20*)B)->CopyFrom(Node->Unknown04);
            return true;
        }
    }
    return false;
}
