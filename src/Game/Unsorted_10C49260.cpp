// Game/Unsorted_10C49260.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10C49100.h"
#include "Game/Class_10C49100_Field18.h"
#include "Game/Class_10C49100_Node.h"
#include "Game/Class_10D3F830.h"
#include "Game/Class_10E9BB8C.h"
#include "Game/Class_10E9BBC0.h"

struct Struct_10C49860
{
    int Unknown00;
    int Unknown04;
};

int FUN_10c48c80(int A);

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10C49260 ?FUN_10c49260@Class_10C49100@@QAEXH@Z
void Class_10C49100::FUN_10c49260(int Size)
{
    int OldSize = Unknown0C;
    Class_10C49100_Node** OldBuckets = Unknown14;
    Unknown14 = new(0, 0, 0, 0, 0) Class_10C49100_Node*[Size];
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
        Class_10C49100_Node* Node = OldBuckets[j];
        while (Node)
        {
            FUN_10c49100(Node->Key, Node->Value);
            Class_10C49100_Node* Next = Node->Next;
            Node->Key.~Class_109081E0();
            ::operator delete(Node);
            Node = Next;
        }
    }
    delete OldBuckets;
}

// FUNCTION: 0x10C49860 ?FUN_10c49860@Class_10E9BBC0@@UAEXPAUStruct_10C49860@@@Z
void Class_10E9BBC0::FUN_10c49860(Struct_10C49860* A)
{
    int Key = A->Unknown04;
    m_Entries.FUN_10d3f830(&Key);
}
