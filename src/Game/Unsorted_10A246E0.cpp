// Game/Unsorted_10A246E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// The placement delete that pairs with Ion Storm's new.
#include "Game/Class_109081E0.h"
#include "Game/Class_10A250D0.h"
#include "Game/Class_10A250D0_Node.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int FUN_1090e9b0(const void* Data, int Length);

// FUNCTION: 0x10A250D0 ?FUN_10a250d0@Class_10A250D0@@QAEIABVClass_109081E0@@0@Z
unsigned int Class_10A250D0::FUN_10a250d0(const Class_109081E0& Key, const Class_109081E0& Value)
{
    if (!Unknown10 && Unknown00 > Unknown0C * 0.2)
        FUN_10a251b0(Unknown0C * 2);
    Class_10A250D0_Node* Node = new(0, 0, 0, 0, 0) Class_10A250D0_Node;
    Node->Unknown00 = Key;
    Node->Unknown04 = Value;
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
