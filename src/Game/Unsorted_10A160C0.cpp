// Game/Unsorted_10A160C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

unsigned int HashBytes(const void* Data, int Length);

// A chained hash table's entry: the key is its first field, Next is at +0xC.
class Class_10A16270_Node
{
public:
    int Key;
    char Unknown04[0x8];
    Class_10A16270_Node* Next;
};

// The table's key hasher: slot 0 gives the bytes HashBytes hashes,
// slot 1 compares a key with an entry's key (0 when they are equal).
class Class_10A16270_Field18
{
public:
    virtual void Virtual0(int* Key, const void** Data, int* Length);
    virtual int Virtual1(int* Key, int* Other);
};

// The copy of Class_10A15B20.h with its fields and Rehash added.
class Class_10A15B20
{
public:
    bool FUN_10a15b20(int* A);
    bool Remove(int* A);
    void Rehash(int Size);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    Class_10A16270_Node** Unknown14;
    Class_10A16270_Field18 Unknown18;
};

// FUNCTION: 0x10A16270 ?Remove@Class_10A15B20@@QAE_NPAH@Z
bool Class_10A15B20::Remove(int* Key)
{
    if (!Unknown10 && Unknown04 < Unknown0C * 0.05 && Unknown0C > 64)
        Rehash(Unknown0C / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    }
    for (Class_10A16270_Node* Node = Unknown14[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (Unknown18.Virtual1(Key, &Node->Key) == 0)
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
