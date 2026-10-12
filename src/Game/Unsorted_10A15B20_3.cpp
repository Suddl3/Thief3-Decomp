// Game/Unsorted_10A15B20_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A163F0_Node.h"
#include "Game/Struct_10A16B60.h"

unsigned int HashBytes(const void* Data, int Length);

class Class_10A163F0_Field18
{
public:
    virtual void Virtual0(int* Key, const void** Data, int* Length);
    virtual int Virtual1(int* Key, int* Other);
};

class Class_10A163F0
{
public:
    int Set(int* Key, Struct_10A16B60* Info);
    int FUN_10a15ef0(int* Key, Struct_10A16B60* Info);

    char Pad00[0x8];
    int Unknown08;
    char Pad0C[0x8];
    Class_10A163F0_Node** Unknown14;
    Class_10A163F0_Field18 Unknown18;
};

// FUNCTION: 0x10A163F0 ?Set@Class_10A163F0@@QAEHPAHPAUStruct_10A16B60@@@Z
int Class_10A163F0::Set(int* Key, Struct_10A16B60* Info)
{
    const void* Data;
    int Length;
    Unknown18.Virtual0(Key, &Data, &Length);
    unsigned int Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    if (!Unknown14)
        return -1;
    for (Class_10A163F0_Node* Node = Unknown14[Index]; Node; Node = Node->Next)
    {
        if (Unknown18.Virtual1(Key, &Node->Key) == 0)
        {
            Node->Value = *Info;
            return Index;
        }
    }
    return FUN_10a15ef0(Key, Info);
}
