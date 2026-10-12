// Game/Unsorted_10932B60_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109329F0.h"
#include "Game/cIntArray.h"
#include "Game/Struct_109323A0_Node.h"

class cNodeList
{
public:
    void FUN_10932450();

    Struct_109323A0_Node* Head;
    Struct_109323A0_Node* Tail;
    int Count;
};

extern cNodeList DAT_10f31bb8;

extern cNodeList DAT_10f31bc4;

extern bool DAT_10f31bb4;

extern Class_109329F0 DAT_10eff31c;

extern cIntArray DAT_10f31bd0;

// FUNCTION: 0x10932B60 ?ReleaseAllNodes@@YAXXZ
void ReleaseAllNodes()
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
    DAT_10eff31c.Reset(0x40);
    DAT_10f31bd0.SetCount(0);
    DAT_10f31bb4 = false;
}
