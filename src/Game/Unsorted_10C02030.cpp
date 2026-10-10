// Game/Unsorted_10C02030.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// A list of nodes (Count, Head, Tail) and a Class_10C01FC0 at +0xC.

class Class_10C01FC0
{
public:
    ~Class_10C01FC0()
    {
        FUN_10c016b0(0x40);
        ::operator delete(Unknown14);
        Unknown04 = 0;
        Unknown0C = 0;
        Unknown14 = 0;
        Unknown00 = 0;
    }

    void FUN_10c016b0(int A);

    int Unknown00;
    int Unknown04;
    char Unknown08[4];
    int Unknown0C;
    char Unknown10[4];
    void* Unknown14;
};

struct Class_10C02460_Node
{
    Class_10C02460_Node* Next;
    Class_10C02460_Node* Prev;
};

class Class_10C02460
{
public:
    ~Class_10C02460();

    int Count;
    Class_10C02460_Node* Head;
    Class_10C02460_Node* Tail;
    Class_10C01FC0 Unknown0C;
};

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
};

Class_10905A90_Member* FUN_10905aa0();

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int Count);

    ~Class_10BFBD70()
    {
        FUN_10bfbd70(0);
        if (Unknown04)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

struct Struct_10C01F80;

void FUN_10c01f80(Struct_10C01F80* A);

class Class_10C020A0
{
public:
    ~Class_10C020A0();

    char Unknown00[8];
    Class_10BFBD70 Unknown08;
};

// FUNCTION: 0x10C020A0 ??1Class_10C020A0@@QAE@XZ
Class_10C020A0::~Class_10C020A0()
{
    FUN_10c01f80((Struct_10C01F80*)&Unknown08);
}

// FUNCTION: 0x10C02460 ??1Class_10C02460@@QAE@XZ
Class_10C02460::~Class_10C02460()
{
    while (Head)
    {
        Class_10C02460_Node* Node = Head;
        Head = Node->Next;
        if (Tail == Node)
            Tail = Node->Prev;
        if (Node->Next)
            Node->Next->Prev = Node->Prev;
        if (Node->Prev)
            Node->Prev->Next = Node->Next;
        Node->Next = (Class_10C02460_Node*)-1;
        Node->Prev = (Class_10C02460_Node*)-1;
        Count--;
        delete Node;
    }
    Unknown0C.FUN_10c016b0(0x40);
}
