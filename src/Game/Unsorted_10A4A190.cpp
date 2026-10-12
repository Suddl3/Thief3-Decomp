// Game/Unsorted_10A4A190.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10A492B0.h"
#include "Game/Class_10A492B0_Field18.h"
#include "Game/Class_10A492B0_Node.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10A4AB10 ?FUN_10a4ab10@Class_10A492B0@@QAEXH@Z
void Class_10A492B0::FUN_10a4ab10(int Size)
{
    int OldSize = Unknown0C;
    Class_10A492B0_Node** OldBuckets = Unknown14;
    Unknown14 = new(0, 0, 0, 0, 0) Class_10A492B0_Node*[Size];
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
        Class_10A492B0_Node* Node = OldBuckets[j];
        while (Node)
        {
            FUN_10a492b0(Node->Key, Node->Value);
            Class_10A492B0_Node* Next = Node->Next;
            Node->Key.~Class_109081E0();
            ::operator delete(Node);
            Node = Next;
        }
    }
    delete OldBuckets;
}
