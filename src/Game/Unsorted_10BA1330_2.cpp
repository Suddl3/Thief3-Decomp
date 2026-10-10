// Game/Unsorted_10BA1330_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BA1330.h"
#include "Game/Class_10BA1330_Field18.h"
#include "Game/Class_10BA1330_Node.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int FUN_1090e9b0(const void* Data, int Length);

// FUNCTION: 0x10BA1330 ?FUN_10ba1330@Class_10BA1330@@QAEIABH0@Z
unsigned int Class_10BA1330::FUN_10ba1330(const int& Key, const int& Value)
{
    if (!Unknown10 && Unknown00 > Unknown0C * 0.2)
        FUN_10ba13f0(Unknown0C * 2);
    Class_10BA1330_Node* Node = new(0, 0, 0, 0, 0) Class_10BA1330_Node;
    Node->Key = Key;
    Node->Value = Value;
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = FUN_1090e9b0(Data, Length) & ((1 << Unknown08) - 1);
    }
    if (Unknown14[Index])
        Unknown00++;
    Node->Next = Unknown14[Index];
    Unknown14[Index] = Node;
    Unknown04++;
    return Index;
}

// FUNCTION: 0x10BA13F0 ?FUN_10ba13f0@Class_10BA1330@@QAEXH@Z
void Class_10BA1330::FUN_10ba13f0(int Size)
{
    int OldSize = Unknown0C;
    Class_10BA1330_Node** OldBuckets = Unknown14;
    Unknown14 = new(0, 0, 0, 0, 0) Class_10BA1330_Node*[Size];
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
        Class_10BA1330_Node* Node = OldBuckets[j];
        while (Node)
        {
            FUN_10ba1330(Node->Key, Node->Value);
            Class_10BA1330_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}
