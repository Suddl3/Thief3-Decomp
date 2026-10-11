// Game/Unsorted_10929DC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1092A280.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_1092A280_Node
{
public:
    Class_1092A280_Node()
    {
        Unknown00 = 0;
    }

    int Unknown00;
    char Pad04[0x8];
    Class_1092A280_Node* Prev;
    Class_1092A280_Node* Next;
    char Pad14[0x2c];
};

// FUNCTION: 0x1092A280 ?FUN_1092a280@Class_1092A280@@QAEPAVClass_1092A280_Node@@XZ
Class_1092A280_Node* Class_1092A280::FUN_1092a280()
{
    Class_1092A280_Node* Node = FreeHead;
    if (Node)
    {
        if (!Node->Prev)
            FreeHead = Node->Next;
        else
            Node->Prev->Next = Node->Next;
        if (!Node->Next)
            FreeTail = Node->Prev;
        else
            Node->Next->Prev = Node->Prev;
        FreeCount--;
    }
    GetAllocator()->Virtual8(0, 0);
    if (!Node)
    {
        int Tag = 0;
        Class_1092A280_Node* Created = new(Tag, 0, 0, 0, 0) Class_1092A280_Node();
        Node = Created;
    }
    GetAllocator()->Virtual9();
    if (Node)
    {
        Class_1092A280_Node* OldTail = Tail;
        Tail = Node;
        if (!OldTail)
            Head = Node;
        else
            OldTail->Next = Node;
        Node->Prev = OldTail;
        Node->Next = 0;
        Count++;
    }
    return Node;
}

// FUNCTION: 0x1092A330 ?FUN_1092a330@Class_10BFBD70@@QAEHPBH@Z
int Class_10BFBD70::FUN_1092a330(const int* Item)
{
    int Count = Unknown00;
    for (int i = 0; i < Count; i++)
    {
        if (Unknown08[i] == *Item)
            return i;
    }
    FUN_10bfbd70(Count + 1);
    Unknown08[Count] = *Item;
    return Count;
}
