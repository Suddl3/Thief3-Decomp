// Game/Unsorted_10C02030.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C01FC0.h"

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
