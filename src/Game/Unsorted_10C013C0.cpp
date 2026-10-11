// Game/Unsorted_10C013C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C01140.h"
#include "Game/Class_10C01140_Field18.h"
#include "Game/Class_10C01430.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// A doubly linked list entry: 12 bytes, linked at the tail.
class Class_10C01430_Node
{
public:
    Class_10C01430_Node() : Next((Class_10C01430_Node*)-1), Prev((Class_10C01430_Node*)-1) {}

    Class_10C01430_Node* Next;
    Class_10C01430_Node* Prev;
    void* Value;
};

Class_10905A90_Member* GetAllocator();

class Class_10C013C0
{
public:
    Class_10C013C0()
    {
        Unknown00 = 0;
        Unknown04 = 0;
        Unknown08 = 0;
        Unknown0C = 0;
        Unknown10 = 0;
        Unknown14 = 0;
    }

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
};

extern Class_10C013C0* DAT_10ff66a0;

// FUNCTION: 0x10C013C0 ?FUN_10c013c0@@YAXXZ
void FUN_10c013c0()
{
    if (DAT_10ff66a0 == 0)
    {
        GetAllocator()->Virtual8(0, 0);
        Class_10C013C0* Result = new(0, 0, 0, 0, 0) Class_10C013C0;
        DAT_10ff66a0 = Result;
        GetAllocator()->Virtual9();
    }
    DAT_10ff66a0->Unknown04++;
}

// FUNCTION: 0x10C01430 ?FUN_10c01430@Class_10C01430@@QAEXPAX@Z
void Class_10C01430::FUN_10c01430(void* Value)
{
    int Link = 0;
    Class_10C01430_Node* Node = new(Link, 0, 0, 0, 0) Class_10C01430_Node();
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
    Index.FUN_10c01140((int)Value, Link);
}
