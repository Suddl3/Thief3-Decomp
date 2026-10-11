// Game/Unsorted_10A15B20_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A163F0_Node.h"
#include "Game/Struct_10A16B60.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10A163F0
{
public:
    int FUN_10a15ef0(int* Key, Struct_10A16B60* Value);
    void FUN_10a15ff0(int Size);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    Class_10A163F0_Node** Unknown14;
};

// FUNCTION: 0x10A15FF0 ?FUN_10a15ff0@Class_10A163F0@@QAEXH@Z
void Class_10A163F0::FUN_10a15ff0(int Size)
{
    int OldSize = Unknown0C;
    Class_10A163F0_Node** OldBuckets = Unknown14;
    Class_10A163F0_Node** Buckets = new(0, 0, 0, 0, 0) Class_10A163F0_Node*[Size];
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
        Class_10A163F0_Node* Node = OldBuckets[j];
        while (Node)
        {
            FUN_10a15ef0(&Node->Key, &Node->Value);
            Class_10A163F0_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}
