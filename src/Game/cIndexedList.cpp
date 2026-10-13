// Game/cIndexedList.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BAA580.h"
#include "Game/Class_10C30D10_Field18.h"
#include "Game/Class_10C30D10.h"
#include "Game/cIndexedList.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// A doubly linked list entry: 12 bytes, linked at the tail.
class Class_10C323A0_Node
{
public:
    Class_10C323A0_Node() : Next((Class_10C323A0_Node*)-1), Prev((Class_10C323A0_Node*)-1) {}

    Class_10C323A0_Node* Next;
    Class_10C323A0_Node* Prev;
    void* Value;
};

// FUNCTION: 0x10C323A0 ?Append@cIndexedList@@QAEXPAX@Z
void cIndexedList::Append(void* Value)
{
    int Link = 0;
    Class_10C323A0_Node* Node = new(Link, 0, 0, 0, 0) Class_10C323A0_Node();
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
    Index.Insert((int)Value, Link);
}
