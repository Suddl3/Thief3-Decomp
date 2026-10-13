// Game/Unsorted_10A15B20_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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
    char Unknown00[0x4];
    int Unknown04;
    int Unknown08;
    Class_10A15B20_Unknown14* Next;
};

// Copied from include/Game/Class_10A15B20.h with the fields this method reads added in place of its pad.
class Class_10A15B20
{
public:
    bool FUN_10a15b20(int* A);
    bool FUN_10a15ba0(int* A, int* Out);
    void Remove(int* A);

    char Pad00[0x8];
    int Unknown08;
    char Pad0C[0x8];
    Class_10A15B20_Unknown14** Unknown14;
    Class_10A15B20_Unknown18 Unknown18;
};

// FUNCTION: 0x10A15BA0 ?FUN_10a15ba0@Class_10A15B20@@QAE_NPAH0@Z
bool Class_10A15B20::FUN_10a15ba0(int* A, int* Out)
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
        {
            Out[0] = Node->Unknown04;
            Out[1] = Node->Unknown08;
            return true;
        }
    }
    return false;
}
