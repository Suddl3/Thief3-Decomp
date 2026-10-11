// Game/Unsorted_10A34C10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"

unsigned int FUN_1090e9b0(const void* Data, int Length);

class Class_10A34C10_Unknown10
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

class Class_10A34C10_Field18
{
public:
    virtual void Virtual0(const Class_109081E0& Key, const void** Data, int* Length);
    virtual int Virtual1(const Class_109081E0& Key, const Class_109081E0& Other);
};

class Class_10A34C10_Node
{
public:
    Class_109081E0 Key;
    char Unknown04[0xC];
    Class_10A34C10_Unknown10* Unknown10;
    Class_10A34C10_Node* Next;
};

class Class_10A34C10
{
public:
    unsigned int FUN_10a34c10(const Class_109081E0& Key, Class_10A34C10_Unknown10** Value);
    unsigned int FUN_10a348e0(const Class_109081E0& Key, Class_10A34C10_Unknown10** Value);

    char Unknown00[8];
    int Unknown08;
    char Unknown0C[8];
    Class_10A34C10_Node** Unknown14;
    Class_10A34C10_Field18 Unknown18;
};

// FUNCTION: 0x10A34C10 ?FUN_10a34c10@Class_10A34C10@@QAEIABVClass_109081E0@@PAPAVClass_10A34C10_Unknown10@@@Z
unsigned int Class_10A34C10::FUN_10a34c10(const Class_109081E0& Key, Class_10A34C10_Unknown10** Value)
{
    const void* Data;
    int Length;
    Unknown18.Virtual0(Key, &Data, &Length);
    unsigned int Index = FUN_1090e9b0(Data, Length) & ((1 << Unknown08) - 1);
    if (!Unknown14)
        return (unsigned int)-1;
    for (Class_10A34C10_Node* Node = Unknown14[Index]; Node; Node = Node->Next)
    {
        if (Unknown18.Virtual1(Key, Node->Key) == 0)
        {
            Class_10A34C10_Unknown10* New = *Value;
            Class_10A34C10_Unknown10* Old = Node->Unknown10;
            Node->Unknown10 = New;
            if (New)
                New->Virtual1();
            if (Old)
                Old->Virtual2();
            return Index;
        }
    }
    return FUN_10a348e0(Key, Value);
}
