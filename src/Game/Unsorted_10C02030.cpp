// Game/Unsorted_10C02030.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C01FC0.h"
#include "Game/Class_10C02460.h"
#include "Game/cIntArray.h"
#include "Game/Class_10C020A0.h"

struct Class_10C02460_Node
{
    Class_10C02460_Node* Next;
    Class_10C02460_Node* Prev;
};

struct Struct_10C01F80;

void FUN_10c01f80(Struct_10C01F80* A);

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
    Unknown0C.Clear(0x40);
}
