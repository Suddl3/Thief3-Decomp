// Game/Unsorted_1097B0B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_1097B240_Node.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr);

class Class_1097B240
{
public:
    void FUN_1097b240(int Size);
    unsigned int FUN_109792b0(const Class_109081E0& Key, const int& Value);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    Class_1097B240_Node** Unknown14;
};

// FUNCTION: 0x1097B240 ?FUN_1097b240@Class_1097B240@@QAEXH@Z
void Class_1097B240::FUN_1097b240(int Size)
{
    int OldSize = Unknown0C;
    Class_1097B240_Node** OldTable = Unknown14;
    Unknown14 = (Class_1097B240_Node**)operator new(Size * sizeof(Class_1097B240_Node*), 0, 0, 0, 0, 0);
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
        Class_1097B240_Node* Node = OldTable[j];
        while (Node)
        {
            FUN_109792b0(Node->Key, Node->Value);
            Class_1097B240_Node* Next = Node->Next;
            Node->Key.~Class_109081E0();
            ::operator delete(Node);
            Node = Next;
        }
    }
    ::operator delete(OldTable);
}
