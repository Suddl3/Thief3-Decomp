// Game/Unsorted_10C590F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

unsigned int HashBytes(const void* Data, int Length);

// A chained hash table's entry: 12 bytes, allocated per insert.
class Class_10C591A0_Node
{
public:
    int Key;
    int Value;
    Class_10C591A0_Node* Next;
};

// The table's key hasher: slot 0 gives the bytes HashBytes hashes,
// slot 1 compares a key with an entry's key (0 when they are equal).
class Class_10C591A0_Field18
{
public:
    virtual void Virtual0(const int& Key, const void** Data, int* Length);
    virtual int Virtual1(const int& Key, const int& Other);
};

// The hash table of 0x10C591A0: its header plus the members this function uses.
class Class_10C591A0
{
public:
    bool FUN_10c591a0(int* A);
    void FUN_10c577b0(int Size);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    Class_10C591A0_Node** Unknown14;
    Class_10C591A0_Field18 Unknown18;
};

// FUNCTION: 0x10C591A0 ?FUN_10c591a0@Class_10C591A0@@QAE_NPAH@Z
bool Class_10C591A0::FUN_10c591a0(int* A)
{
    if (!Unknown10 && Unknown04 < Unknown0C * 0.05 && Unknown0C > 64)
        FUN_10c577b0(Unknown0C / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(*A, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    }
    for (Class_10C591A0_Node* Node = Unknown14[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (Unknown18.Virtual1(*A, Node->Key) == 0)
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
