// Game/Unsorted_10C58FD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"

unsigned int FUN_1090e9b0(const void* Data, int Length);

// The value stored in a node: 16 bytes, copied whole.
class Class_10C59030_Value
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

class Class_10C59030_Field18
{
public:
    virtual void Virtual0(const Class_109081E0& Key, const void** Data, int* Length);
    virtual int Virtual1(const Class_109081E0& Key, const Class_109081E0& Other);
};

// A chained hash table's entry: 24 bytes.
class Class_10C59030_Node
{
public:
    Class_109081E0 Key;
    Class_10C59030_Value Value;
    Class_10C59030_Node* Next;
};

class Class_10C59030
{
public:
    unsigned int FUN_10c57530(const Class_109081E0& Key, const Class_10C59030_Value& Value);
    unsigned int FUN_10c59030(const Class_109081E0& Key, const Class_10C59030_Value& Value);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    char Pad11[0x3];
    Class_10C59030_Node** Unknown14;
    Class_10C59030_Field18 Unknown18;
};

// FUNCTION: 0x10C59030 ?FUN_10c59030@Class_10C59030@@QAEIABVClass_109081E0@@ABVClass_10C59030_Value@@@Z
unsigned int Class_10C59030::FUN_10c59030(const Class_109081E0& Key, const Class_10C59030_Value& Value)
{
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = FUN_1090e9b0(Data, Length) & ((1 << Unknown08) - 1);
    }
    if (!Unknown14)
        return (unsigned int)-1;
    for (Class_10C59030_Node* Node = Unknown14[Index]; Node; Node = Node->Next)
    {
        if (Unknown18.Virtual1(Key, Node->Key) == 0)
        {
            Node->Value = Value;
            return Index;
        }
    }
    return FUN_10c57530(Key, Value);
}
