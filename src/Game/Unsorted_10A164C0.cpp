// Game/Unsorted_10A164C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

unsigned int FUN_1090e9b0(const void* Data, int Length);

// A chained hash table's entry: the key at 0, the next entry at 0x18.
struct Class_10A15C30_Node
{
    int Key;
    char Unknown04[0x14];
    Class_10A15C30_Node* Next;
};

// The table's key hasher: slot 0 gives the bytes FUN_1090e9b0 hashes,
// slot 1 compares a key with an entry's key (0 when they are equal).
class Class_10A15C30_Field18
{
public:
    virtual void Virtual0(const int& Key, const void** Data, int* Length);
    virtual int Virtual1(const int& Key, const int& Other);
};

// Copied from include/Game/Class_10A15C30.h with the hash table's members added.
class Class_10A15C30
{
public:
    bool FUN_10a15c30(int* p1);
    bool FUN_10a164c0(int* Key);
    void FUN_10a15ff0(int Size);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    Class_10A15C30_Node** Unknown14;
    Class_10A15C30_Field18 Unknown18;
};

// FUNCTION: 0x10A164C0 ?FUN_10a164c0@Class_10A15C30@@QAE_NPAH@Z
bool Class_10A15C30::FUN_10a164c0(int* Key)
{
    if (!Unknown10 && Unknown04 < Unknown0C * 0.05 && Unknown0C > 64)
        FUN_10a15ff0(Unknown0C / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(*Key, &Data, &Length);
        Index = FUN_1090e9b0(Data, Length) & ((1 << Unknown08) - 1);
    }
    for (Class_10A15C30_Node* Node = Unknown14[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (Unknown18.Virtual1(*Key, Node->Key) == 0)
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
