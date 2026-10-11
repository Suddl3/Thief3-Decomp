// Game/Unsorted_10A15B20_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A15D50.h"
#include "Game/Struct_10A15D50_Value.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// A chained hash table's entry: 16 bytes, allocated per insert.
class Class_10A15D50_Node
{
public:
    int Unknown00;
    Struct_10A15D50_Value Unknown04;
    Class_10A15D50_Node* Next;
};

// FUNCTION: 0x10A15E20 ?FUN_10a15e20@Class_10A15D50@@QAEXH@Z
void Class_10A15D50::FUN_10a15e20(int Size)
{
    int OldSize = Unknown0C;
    Class_10A15D50_Node** OldBuckets = Unknown14;
    Class_10A15D50_Node** Buckets = new(0, 0, 0, 0, 0) Class_10A15D50_Node*[Size];
    Unknown0C = Size;
    Unknown14 = Buckets;
    Unknown08 = 0;
    while (Size >>= 1)
        Unknown08++;
    Unknown04 = 0;
    Unknown00 = 0;
    for (int i = 0; i < Unknown0C; i++)
        Unknown14[i] = 0;
    for (int j = 0; j < OldSize; j++)
    {
        Class_10A15D50_Node* Node = OldBuckets[j];
        while (Node)
        {
            FUN_10a15d50(Node->Unknown00, Node->Unknown04);
            Class_10A15D50_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}
