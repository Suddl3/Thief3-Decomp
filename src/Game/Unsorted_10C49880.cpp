// Game/Unsorted_10C49880.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int FUN_1090e9b0(const void* Data, int Length);

// A chained hash table's entry: 12 bytes, allocated per insert.
class Class_10C48320_Node
{
public:
    int Key;
    int Value;
    Class_10C48320_Node* Next;
};

// The table's key hasher: slot 0 gives the bytes FUN_1090e9b0 hashes,
// slot 1 compares a key with an entry's key (0 when they are equal).
class Class_10C48320_Field18
{
public:
    virtual void Virtual0(const int& Key, const void** Data, int* Length);
    virtual int Virtual1(const int& Key, const int& Other);
};

// The hash table of 0x1090F080 (Class_1090F080) over another key type.
class Class_10C48320
{
public:
    unsigned int FUN_10c48320(const int& Key, const int& Value);
    void FUN_10c484d0(int Size);
    bool FUN_10c49960(const int& Key);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    Class_10C48320_Node** Unknown14;
    Class_10C48320_Field18 Unknown18;
};

class Class_10C48260
{
public:
    unsigned int FUN_10c48260(const int& A, const int& B);
};

class Class_10D3F830 : public Class_10C48260
{
public:
    bool FUN_10d3f830(int* A);
};

class Class_10E9BBC0_Unknown3C
{
public:
    virtual int Virtual0(int A);
};

struct Struct_10C49880
{
    char Unknown00[4];
    int Unknown04;
};

class Class_10E9BBC0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void FUN_10c49a60(int A);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void FUN_10c49880(Struct_10C49880* A);

    Class_10D3F830 Unknown04;
    char Unknown05[0x37];
    Class_10E9BBC0_Unknown3C* Unknown3C;
};

// FUNCTION: 0x10C49880 ?FUN_10c49880@Class_10E9BBC0@@UAEXPAUStruct_10C49880@@@Z
void Class_10E9BBC0::FUN_10c49880(Struct_10C49880* A)
{
    int Key = A->Unknown04;
    if (Unknown04.FUN_10d3f830(&Key))
        return;
    int Value = A->Unknown04;
    Key = Unknown3C->Virtual0(Value);
    if (Key)
    {
        int Index = A->Unknown04;
        Unknown04.FUN_10c48260(Index, Key);
    }
}

// FUNCTION: 0x10C49960 ?FUN_10c49960@Class_10C48320@@QAE_NABH@Z
bool Class_10C48320::FUN_10c49960(const int& Key)
{
    if (!Unknown10 && Unknown04 < Unknown0C * 0.05 && Unknown0C > 64)
        FUN_10c484d0(Unknown0C / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = FUN_1090e9b0(Data, Length) & ((1 << Unknown08) - 1);
    }
    for (Class_10C48320_Node* Node = Unknown14[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
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
