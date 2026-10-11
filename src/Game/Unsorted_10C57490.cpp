// Game/Unsorted_10C57490.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"
#include "Game/Class_10C592B0.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

unsigned int FUN_1090e9b0(const void* Data, int Length);

class Class_10C59030_Value
{
public:
    Class_10C59030_Value() : Unknown00(-1.0f), Unknown04(-1.0f), Unknown08(-1.0f), Unknown0C(-1.0f) {}

    float Unknown00;
    float Unknown04;
    float Unknown08;
    float Unknown0C;
};

// A chained hash table's entry: 24 bytes, allocated per insert.
class Class_10C592B0_Node
{
public:
    char* Key;
    Class_10C59030_Value Value;
    Class_10C592B0_Node* Next;
};

// The table's key hasher: slot 0 gives the bytes FUN_1090e9b0 hashes.
class Class_10C57530_Unknown18
{
public:
    virtual void Virtual0(const Class_109081E0& Key, const void** Data, int* Length);
};

class Class_10C59030 : public Class_10C592B0
{
public:
    unsigned int FUN_10c57530(const Class_109081E0& Key, const Class_10C59030_Value& Value);

    Class_10C57530_Unknown18 Unknown18;
};

// FUNCTION: 0x10C57530 ?FUN_10c57530@Class_10C59030@@QAEIABVClass_109081E0@@ABVClass_10C59030_Value@@@Z
unsigned int Class_10C59030::FUN_10c57530(const Class_109081E0& Key, const Class_10C59030_Value& Value)
{
    if (!Unknown10 && Unknown00 > Unknown0C * 0.2)
        FUN_10c57620(Unknown0C * 2);
    Class_10C592B0_Node* Node = new(0, 0, 0, 0, 0) Class_10C592B0_Node;
    Node->Key = Key.Unknown00;
    Node->Value = Value;
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = FUN_1090e9b0(Data, Length) & ((1 << Unknown08) - 1);
    }
    if (Unknown14[Index])
        Unknown00++;
    Node->Next = Unknown14[Index];
    Unknown14[Index] = Node;
    Unknown04++;
    return Index;
}
