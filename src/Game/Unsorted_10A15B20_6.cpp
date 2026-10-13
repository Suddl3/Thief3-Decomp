// Game/Unsorted_10A15B20_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10A15B20_Unknown14;

class Class_10A15B20_Unknown18;

unsigned int HashBytes(const void* Data, int Length);

class Class_10A15B20_Unknown18
{
public:
    virtual void Virtual0(int* Key, const void** Data, int* Length);
    virtual int Virtual1(int* Key, Class_10A15B20_Unknown14* Node);
};

class Class_10A15B20_Unknown14
{
public:
    char Unknown00[0xC];
    Class_10A15B20_Unknown14* Next;
};

// Copied from include/Game/Class_10A15B20.h with the fields this method reads added in place of its pad.
class Class_10A15B20
{
public:
    bool FUN_10a15b20(int* A);
    void Remove(int* A);

    char Pad00[0x8];
    int Unknown08;
    char Pad0C[0x8];
    Class_10A15B20_Unknown14** Unknown14;
    Class_10A15B20_Unknown18 Unknown18;
};

class Class_10A15C30_Field18
{
public:
    virtual void Virtual0(int* Key, const void** Data, int* Length);
    virtual int Virtual1(int* Key, int* Other);
};

class Class_10A15C30_Node
{
public:
    int Key;
    char Unknown04[0x14];
    Class_10A15C30_Node* Next;
};

// Copied from include/Game/Class_10A15C30.h with the hash table's fields added.
class Class_10A15C30
{
public:
    bool FUN_10a15c30(int* p1);
    void Remove(int* p1);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    Class_10A15C30_Node** Unknown14;
    Class_10A15C30_Field18 Unknown18;
};

// FUNCTION: 0x10A15B20 ?FUN_10a15b20@Class_10A15B20@@QAE_NPAH@Z
bool Class_10A15B20::FUN_10a15b20(int* A)
{
    const void* Data;
    int Length;
    Unknown18.Virtual0(A, &Data, &Length);
    Class_10A15B20_Unknown14** Table = Unknown14;
    if (!Table)
        return false;
    unsigned int Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    for (Class_10A15B20_Unknown14* Node = Table[Index]; Node; Node = Node->Next)
    {
        if (Unknown18.Virtual1(A, Node) == 0)
            return true;
    }
    return false;
}

// FUNCTION: 0x10A15C30 ?FUN_10a15c30@Class_10A15C30@@QAE_NPAH@Z
bool Class_10A15C30::FUN_10a15c30(int* p1)
{
    const void* Data;
    int Length;
    Unknown18.Virtual0(p1, &Data, &Length);
    Class_10A15C30_Node** Buckets = Unknown14;
    if (!Buckets)
        return false;
    unsigned int Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    for (Class_10A15C30_Node* Node = Buckets[Index]; Node; Node = Node->Next)
    {
        if (Unknown18.Virtual1(p1, &Node->Key) == 0)
            return true;
    }
    return false;
}
