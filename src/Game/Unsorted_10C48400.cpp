// Game/Unsorted_10C48400.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C48260.h"
#include "Game/Class_10C48260_Field18.h"
#include "Game/Class_10C48260_Node.h"
#include "Game/Class_10C48320.h"
#include "Game/Class_10C48320_Field18.h"
#include "Game/Class_10C48320_Node.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10C48400 ?FUN_10c48400@Class_10C48260@@QAEXH@Z
void Class_10C48260::FUN_10c48400(int Size)
{
    int OldSize = Unknown0C;
    Class_10C48260_Node** OldBuckets = Unknown14;
    Unknown14 = new(0, 0, 0, 0, 0) Class_10C48260_Node*[Size];
    Unknown0C = Size;
    Unknown08 = 0;
    while (Size >>= 1)
        Unknown08++;
    Unknown04 = 0;
    Unknown00 = 0;
    for (int i = 0; i < Unknown0C; i++)
        Unknown14[i] = 0;
    for (int j = 0; j < OldSize; j++)
    {
        Class_10C48260_Node* Node = OldBuckets[j];
        while (Node)
        {
            FUN_10c48260(Node->Key, Node->Value);
            Class_10C48260_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}

// FUNCTION: 0x10C484D0 ?FUN_10c484d0@Class_10C48320@@QAEXH@Z
void Class_10C48320::FUN_10c484d0(int Size)
{
    int OldSize = Unknown0C;
    Class_10C48320_Node** OldBuckets = Unknown14;
    Unknown14 = new(0, 0, 0, 0, 0) Class_10C48320_Node*[Size];
    Unknown0C = Size;
    Unknown08 = 0;
    while (Size >>= 1)
        Unknown08++;
    Unknown04 = 0;
    Unknown00 = 0;
    for (int i = 0; i < Unknown0C; i++)
        Unknown14[i] = 0;
    for (int j = 0; j < OldSize; j++)
    {
        Class_10C48320_Node* Node = OldBuckets[j];
        while (Node)
        {
            FUN_10c48320(Node->Key, Node->Value);
            Class_10C48320_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}
