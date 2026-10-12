// Game/Unsorted_10C58FD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10C59030_Field18.h"
#include "Game/Class_10C59030_Value.h"

unsigned int HashBytes(const void* Data, int Length);

// A chained hash table's entry: 24 bytes.
class Class_10C59030_Node
{
public:
    cString Key;
    Class_10C59030_Value Value;
    Class_10C59030_Node* Next;
};

class Class_10C59030
{
public:
    unsigned int Insert(const cString& Key, const Class_10C59030_Value& Value);
    unsigned int Set(const cString& Key, const Class_10C59030_Value& Value);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    char Pad11[0x3];
    Class_10C59030_Node** Unknown14;
    Class_10C59030_Field18 Unknown18;
};

// FUNCTION: 0x10C59030 ?Set@Class_10C59030@@QAEIABVcString@@ABVClass_10C59030_Value@@@Z
unsigned int Class_10C59030::Set(const cString& Key, const Class_10C59030_Value& Value)
{
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
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
    return Insert(Key, Value);
}
