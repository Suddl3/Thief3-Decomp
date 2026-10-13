// Game/Unsorted_10C57490.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10C592B0.h"
#include "Game/Class_10C57530_Unknown18.h"
#include "Game/Class_10C59030.h"
#include "Game/Class_10C59030_Value.h"
#include "Game/Class_10C592B0_Node.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

struct Struct_10C57490
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

class Class_10C57490_Node;

class Class_10C57490_Unknown18
{
public:
    virtual void Virtual0(const int& Key, const void** Data, int* Length);
    virtual int Virtual1(const int& Key, Class_10C57490_Node* Node);
};

class Class_10C57490_Node
{
public:
    int Unknown00;
    Struct_10C57490 Unknown04;
    Class_10C57490_Node* Next;
};

class Class_10C57490
{
public:
    bool FUN_10c57490(int* Key, Struct_10C57490* Out);

    char Unknown00[8];
    int Unknown08;
    char Pad0C[8];
    Class_10C57490_Node** Unknown14;
    Class_10C57490_Unknown18 Unknown18;
};

// FUNCTION: 0x10C57490 ?FUN_10c57490@Class_10C57490@@QAE_NPAHPAUStruct_10C57490@@@Z
bool Class_10C57490::FUN_10c57490(int* Key, Struct_10C57490* Out)
{
    const void* Data;
    int Length;
    Unknown18.Virtual0(*Key, &Data, &Length);
    Class_10C57490_Node** Buckets = Unknown14;
    if (!Buckets)
        return false;
    unsigned int Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    for (Class_10C57490_Node* Node = Buckets[Index]; Node; Node = Node->Next)
    {
        if (Unknown18.Virtual1(*Key, Node) == 0)
        {
            *Out = Node->Unknown04;
            return true;
        }
    }
    return false;
}

// FUNCTION: 0x10C57530 ?Insert@Class_10C59030@@QAEIABVcString@@ABVClass_10C59030_Value@@@Z
unsigned int Class_10C59030::Insert(const cString& Key, const Class_10C59030_Value& Value)
{
    if (!Unknown10 && Unknown00 > m_BucketCount * 0.2)
        FUN_10c57620(m_BucketCount * 2);
    Class_10C592B0_Node* Node = new(0, 0, 0, 0, 0) Class_10C592B0_Node;
    Node->Key = Key.Unknown00;
    Node->Value = Value;
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_KeyTraits.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    }
    if (m_Buckets[Index])
        Unknown00++;
    Node->Next = m_Buckets[Index];
    m_Buckets[Index] = Node;
    m_Count++;
    return Index;
}
