// Game/Unsorted_10AA36B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E97B00.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr);

class Class_10AA44B0_Node : public Class_10E97B00
{
public:
    Class_10AA44B0_Node* Next;
};

class Class_10AA44B0
{
public:
    void FUN_10aa3830(int A);
    void FUN_10aa44b0();
    void FUN_10aa36b0(int Size);
    unsigned int FUN_10aa35d0(const Class_10E97B00& Key, const Class_109081E0& Value);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    char Pad11[0x3];
    Class_10AA44B0_Node** Unknown14;
};

// FUNCTION: 0x10AA36B0 ?FUN_10aa36b0@Class_10AA44B0@@QAEXH@Z
void Class_10AA44B0::FUN_10aa36b0(int Size)
{
    int OldSize = Unknown0C;
    Class_10AA44B0_Node** OldTable = Unknown14;
    Unknown14 = (Class_10AA44B0_Node**)operator new(Size * sizeof(Class_10AA44B0_Node*), 0, 0, 0, 0, 0);
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
        Class_10AA44B0_Node* Node = OldTable[j];
        while (Node)
        {
            FUN_10aa35d0(*Node, Node->Unknown04);
            Class_10AA44B0_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    ::operator delete(OldTable);
}
