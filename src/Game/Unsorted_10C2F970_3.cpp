// Game/Unsorted_10C2F970_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C30D10.h"
#include "Game/Class_10C30D10_Field18.h"
#include "Game/Class_10C30D10_Node.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int FUN_1090e9b0(const void* Data, int Length);

// FUNCTION: 0x10C324E0 ?FUN_10c324e0@Class_10C30D10@@QAE_NABH@Z
bool Class_10C30D10::FUN_10c324e0(const int& Key)
{
    if (!Unknown10 && Unknown04 < Unknown0C * 0.05 && Unknown0C > 64)
        FUN_10c30e90(Unknown0C / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = FUN_1090e9b0(Data, Length) & ((1 << Unknown08) - 1);
    }
    for (Class_10C30D10_Node* Node = Unknown14[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (Unknown18.Virtual1(Key, Node->Key) == 0)
        {
            if (Prev || Node->Next)
                Unknown00--;
            if (!Prev)
                Unknown14[Index] = Node->Next;
            else
                Prev->Next = Node->Next;
            Unknown04--;
            delete Node;
            return true;
        }
    }
    return false;
}
