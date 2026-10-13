// Game/Class_10C59030.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10C592B0.h"
#include "Game/Class_10C57530_Unknown18.h"
#include "Game/Class_10C59030.h"
#include "Game/Class_10C59030_Value.h"
#include "Game/Class_10C592B0_Node.h"
#include "Game/Class_10C57490.h"
#include "Game/Class_10C57490_Unknown18.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// A chained hash table's entry: 24 bytes.
class Class_10C59030_Node
{
public:
    cString Key;
    Class_10C59030_Value Value;
    Class_10C59030_Node* Next;
};

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

// FUNCTION: 0x10C59030 ?Set@Class_10C59030@@QAEIABVcString@@ABVClass_10C59030_Value@@@Z
unsigned int Class_10C59030::Set(const cString& Key, const Class_10C59030_Value& Value)
{
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_KeyTraits.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    }
    if (!m_Buckets)
        return (unsigned int)-1;
    for (Class_10C59030_Node* Node = (Class_10C59030_Node*)m_Buckets[Index]; Node; Node = Node->Next)
    {
        if (m_KeyTraits.Virtual1(Key, Node->Key) == 0)
        {
            Node->Value = Value;
            return Index;
        }
    }
    return Insert(Key, Value);
}
