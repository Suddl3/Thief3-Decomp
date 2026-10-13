// Game/Unsorted_1091B480.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_1091B3F0.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_1091B480.h"
#include "Game/Class_1091B480_Node.h"

struct Item_1091B3F0
{
    cString Unknown00;
    cString Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr);

// FUNCTION: 0x1091B480 ?Rehash@Class_1091B480@@QAEXH@Z
void Class_1091B480::Rehash(int NewSize)
{
    int OldSize = Size;
    Class_1091B480_Node** OldTable = Table;
    Class_1091B480_Node** NewTable = (Class_1091B480_Node**)operator new(NewSize * sizeof(Class_1091B480_Node*), 0, 0, 0, 0, 0);
    Size = NewSize;
    Table = NewTable;
    Bits = 0;
    while (NewSize >>= 1)
        Bits++;
    Count = 0;
    Collisions = 0;
    for (int i = 0; i < Size; i++)
        Table[i] = 0;
    for (int j = 0; j < OldSize; j++)
    {
        Class_1091B480_Node* Node = OldTable[j];
        while (Node)
        {
            FUN_1091b280(Node->Key, Node->Value);
            Class_1091B480_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    operator delete(OldTable);
}

// FUNCTION: 0x1091B560 ?CopyFrom@Class_1091B3F0@@QAEXABV1@@Z
void Class_1091B3F0::CopyFrom(const Class_1091B3F0& Other)
{
    SetCount(Other.Count);
    for (int i = 0; i < Count; i++)
        Items[i] = Other.Items[i];
}
