// Game/Unsorted_10A15B20_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

unsigned int FUN_1090e9b0(const void* Data, int Length);

struct Struct_10A16B60
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

class Class_10A163F0_Node
{
public:
    int Key;
    Struct_10A16B60 Value;
    Class_10A163F0_Node* Next;
};

class Class_10A163F0_Field18
{
public:
    virtual void Virtual0(int* Key, const void** Data, int* Length);
    virtual int Virtual1(int* Key, int* Other);
};

class Class_10A163F0
{
public:
    int FUN_10a163f0(int* Key, Struct_10A16B60* Info);
    int FUN_10a15ef0(int* Key, Struct_10A16B60* Info);

    char Pad00[0x8];
    int Unknown08;
    char Pad0C[0x8];
    Class_10A163F0_Node** Unknown14;
    Class_10A163F0_Field18 Unknown18;
};

// FUNCTION: 0x10A163F0 ?FUN_10a163f0@Class_10A163F0@@QAEHPAHPAUStruct_10A16B60@@@Z
int Class_10A163F0::FUN_10a163f0(int* Key, Struct_10A16B60* Info)
{
    const void* Data;
    int Length;
    Unknown18.Virtual0(Key, &Data, &Length);
    unsigned int Index = FUN_1090e9b0(Data, Length) & ((1 << Unknown08) - 1);
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
