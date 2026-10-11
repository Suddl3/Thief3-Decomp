// Game/Unsorted_10C33510.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C30D10
{
};

// Class_10C32C70 from include/Game/Class_10C32C70.h, with the fields and the
// inline destructor its owner's destructor zeroes and frees through.
class Class_10C32C70 : public Class_10C30D10
{
public:
    ~Class_10C32C70()
    {
        FUN_10c325e0(0x40);
        ::operator delete(Unknown14);
        Unknown04 = 0;
        Unknown0C = 0;
        Unknown14 = 0;
        Unknown00 = 0;
    }

    void FUN_10c325e0(int A);
    void FUN_10c32c70();

    int Unknown00;
    int Unknown04;
    char Unknown08[4];
    int Unknown0C;
    char Unknown10[4];
    void* Unknown14;
};

struct Class_10C352D0_Node
{
    Class_10C352D0_Node* Next;
    Class_10C352D0_Node* Prev;
};

// A list of nodes (Count, Head, Tail) and a Class_10C32C70 at +0xC.
class Class_10C352D0
{
public:
    ~Class_10C352D0();

    int Count;
    Class_10C352D0_Node* Head;
    Class_10C352D0_Node* Tail;
    Class_10C32C70 Unknown0C;
};

// FUNCTION: 0x10C352D0 ??1Class_10C352D0@@QAE@XZ
Class_10C352D0::~Class_10C352D0()
{
    while (Head)
    {
        Class_10C352D0_Node* Node = Head;
        Head = Node->Next;
        if (Tail == Node)
            Tail = Node->Prev;
        if (Node->Next)
            Node->Next->Prev = Node->Prev;
        if (Node->Prev)
            Node->Prev->Next = Node->Next;
        Node->Next = (Class_10C352D0_Node*)-1;
        Node->Prev = (Class_10C352D0_Node*)-1;
        Count--;
        delete Node;
    }
    Unknown0C.FUN_10c325e0(0x40);
}
