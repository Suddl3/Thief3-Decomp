// Game/Unsorted_10B2A2F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B2A160.h"
#include "Game/Class_10B2A160_Field18.h"
#include "Game/Class_10B2A2F0.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// A doubly linked list entry: 12 bytes, linked at the tail.
class Class_10B2A2F0_Node
{
public:
    Class_10B2A2F0_Node() : Next((Class_10B2A2F0_Node*)-1), Prev((Class_10B2A2F0_Node*)-1) {}

    Class_10B2A2F0_Node* Next;
    Class_10B2A2F0_Node* Prev;
    void* Value;
};

// FUNCTION: 0x10B2A2F0 ?FUN_10b2a2f0@Class_10B2A2F0@@QAEXPAX@Z
void Class_10B2A2F0::FUN_10b2a2f0(void* Value)
{
    int Link = 0;
    Class_10B2A2F0_Node* Node = new(Link, 0, 0, 0, 0) Class_10B2A2F0_Node();
    Node->Value = Value;
    Node->Prev = Tail;
    Node->Next = 0;
    Link = (int)Node;
    if (Tail)
        Tail->Next = Node;
    Tail = Node;
    if (!Head)
        Head = Node;
    Count++;
    Index.FUN_10b2a160((int)Value, Link);
}
