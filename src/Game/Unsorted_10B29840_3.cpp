// Game/Unsorted_10B29840_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B2A160.h"
#include "Game/Class_10B2A160_Field18.h"
#include "Game/Class_10B2A160_Node.h"
#include "Game/Class_10B2AB30.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int FUN_1090e9b0(const void* Data, int Length);

// FUNCTION: 0x10B2A160 ?FUN_10b2a160@Class_10B2A160@@QAEIABH0@Z
unsigned int Class_10B2A160::FUN_10b2a160(const int& Key, const int& Value)
{
    if (!Unknown10 && Unknown00 > Unknown0C * 0.2)
        FUN_10b2a220(Unknown0C * 2);
    Class_10B2A160_Node* Node = new(0, 0, 0, 0, 0) Class_10B2A160_Node;
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

// FUNCTION: 0x10B2A220 ?FUN_10b2a220@Class_10B2A160@@QAEXH@Z
void Class_10B2A160::FUN_10b2a220(int Size)
{
    int OldSize = Unknown0C;
    Class_10B2A160_Node** OldBuckets = Unknown14;
    Unknown14 = new(0, 0, 0, 0, 0) Class_10B2A160_Node*[Size];
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
        Class_10B2A160_Node* Node = OldBuckets[j];
        while (Node)
        {
            FUN_10b2a160(Node->Key, Node->Value);
            Class_10B2A160_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}

// FUNCTION: 0x10B2AB30 ?FUN_10b2ab30@Class_10B2AB30@@QAEXXZ
void Class_10B2AB30::FUN_10b2ab30()
{
    FUN_10b2a8a0(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
