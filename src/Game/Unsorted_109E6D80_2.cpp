// Game/Unsorted_109E6D80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

unsigned int FUN_1090e9b0(const void* Data, int Length);

// Ion Storm's string (0x109081E0): a char pointer, null when default constructed.
class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0();
    Class_109081E0& operator=(const Class_109081E0& Other);

    char* Unknown00;
};

// A chained hash table's entry: 12 bytes, allocated per insert.
class Class_109E6520_Node
{
public:
    Class_109081E0 Key;
    int Value;
    Class_109E6520_Node* Next;
};

// The table's key hasher: slot 0 gives the bytes FUN_1090e9b0 hashes,
// slot 1 compares a key with an entry's key (0 when they are equal).
class Class_109E6520_Field18
{
public:
    virtual void Virtual0(const Class_109081E0& Key, const void** Data, int* Length);
    virtual int Virtual1(const Class_109081E0& Key, const Class_109081E0& Other);
};

// The hash table of Class_109E6520's header, with FUN_109e7b20 added.
class Class_109E6520
{
public:
    unsigned int FUN_109e6520(const Class_109081E0& Key, const int& Value);
    void FUN_109e6600(int Size);
    bool FUN_109e7b20(const Class_109081E0& Key);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    char Pad11[0x3];
    Class_109E6520_Node** Unknown14;
    Class_109E6520_Field18 Unknown18;
};

// FUNCTION: 0x109E7B20 ?FUN_109e7b20@Class_109E6520@@QAE_NABVClass_109081E0@@@Z
bool Class_109E6520::FUN_109e7b20(const Class_109081E0& Key)
{
    if (!Unknown10 && Unknown04 < Unknown0C * 0.05 && Unknown0C > 64)
        FUN_109e6600(Unknown0C / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = FUN_1090e9b0(Data, Length) & ((1 << Unknown08) - 1);
    }
    for (Class_109E6520_Node* Node = Unknown14[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (Unknown18.Virtual1(Key, Node->Key) == 0)
        {
            if (Prev || Node->Next)
                Unknown00--;
            if (!Prev)
                Unknown14[Index] = Node->Next;
            else
                Prev->Next = Node->Next;
            Unknown04--;
            delete Node;
            return true;
        }
    }
    return false;
}
