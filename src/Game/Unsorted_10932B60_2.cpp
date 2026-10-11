// Game/Unsorted_10932B60_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109329F0.h"
#include "Game/Class_10BFBD70.h"

struct Struct_109323A0_Node
{
    void FUN_10954ce0();

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    char Unknown20[0x20];
    bool Unknown40;
    char Unknown41[0x67];
    Struct_109323A0_Node* Prev;
    Struct_109323A0_Node* Next;
    int UnknownB0;
    int UnknownB4;
    int UnknownB8;
    int UnknownBC;
    int UnknownC0;
    int UnknownC4;
    int UnknownC8;
    int UnknownCC;
};

class Class_10932450
{
public:
    void FUN_10932450();

    Struct_109323A0_Node* Head;
    Struct_109323A0_Node* Tail;
    int Count;
};

extern Class_10932450 DAT_10f31bb8;

extern Class_10932450 DAT_10f31bc4;

extern bool DAT_10f31bb4;

extern Class_109329F0 DAT_10eff31c;

extern Class_10BFBD70 DAT_10f31bd0;

// FUNCTION: 0x10932B60 ?FUN_10932b60@@YAXXZ
void FUN_10932b60()
{
    Struct_109323A0_Node* Node = DAT_10f31bb8.Head;
    while (Node)
    {
        Struct_109323A0_Node* Next = Node->Next;
        Node->FUN_10954ce0();
        if (Node->Prev == 0)
            DAT_10f31bb8.Head = Node->Next;
        else
            Node->Prev->Next = Node->Next;
        if (Node->Next == 0)
            DAT_10f31bb8.Tail = Node->Prev;
        else
            Node->Next->Prev = Node->Prev;
        DAT_10f31bb8.Count--;
        Struct_109323A0_Node* OldTail = DAT_10f31bc4.Tail;
        DAT_10f31bc4.Tail = Node;
        if (OldTail == 0)
            DAT_10f31bc4.Head = Node;
        else
            OldTail->Next = Node;
        Node->Next = 0;
        Node->Prev = OldTail;
        DAT_10f31bc4.Count++;
        Node = Next;
    }
    DAT_10f31bb8.FUN_10932450();
    DAT_10f31bc4.FUN_10932450();
    DAT_10eff31c.FUN_109329f0(0x40);
    DAT_10f31bd0.FUN_10bfbd70(0);
    DAT_10f31bb4 = false;
}
