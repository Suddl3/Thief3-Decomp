// Game/Unsorted_10A25AA0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"

unsigned int FUN_1090e9b0(const void* Data, int Length);

class Class_10A250D0_Field18
{
public:
    virtual void Virtual0(const Class_109081E0& Key, const void** Data, int* Length);
    virtual int Virtual1(const Class_109081E0& Key, const Class_109081E0& Other);
};

class Class_10A250D0_Node
{
public:
    Class_109081E0 Key;
    Class_109081E0 Value;
    Class_10A250D0_Node* Next;
};

// Copied from include/Game/Class_10A250D0.h with FUN_10a26430 added.
class Class_10A250D0
{
public:
    unsigned int FUN_10a250d0(const Class_109081E0& Key, const Class_109081E0& Value);
    void FUN_10a251b0(int Size);
    unsigned int FUN_10a26430(const Class_109081E0& Key, const Class_109081E0& Value);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    char Pad11[0x3];
    Class_10A250D0_Node** Unknown14;
    Class_10A250D0_Field18 Unknown18;
};

// FUNCTION: 0x10A26430 ?FUN_10a26430@Class_10A250D0@@QAEIABVClass_109081E0@@0@Z
unsigned int Class_10A250D0::FUN_10a26430(const Class_109081E0& Key, const Class_109081E0& Value)
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
    for (Class_10A250D0_Node* Node = Unknown14[Index]; Node; Node = Node->Next)
    {
        if (Unknown18.Virtual1(Key, Node->Key) == 0)
        {
            Node->Value = Value;
            return Index;
        }
    }
    return FUN_10a250d0(Key, Value);
}
