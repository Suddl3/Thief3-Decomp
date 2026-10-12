// Game/Unsorted_10C013C0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C00F60.h"
#include "Game/Class_10C00F60_Node.h"
#include "Game/Class_10C01140.h"
#include "Game/Class_10C01140_Field18.h"
#include "Game/Class_10C01140_Node.h"
#include "Game/Class_10C01F50.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10C015B0 ?FUN_10c015b0@Class_10C01140@@QAE_NABH@Z
bool Class_10C01140::FUN_10c015b0(const int& Key)
{
    if (!Unknown10 && Unknown04 < Unknown0C * 0.05 && Unknown0C > 64)
        FUN_10c012d0(Unknown0C / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    }
    for (Class_10C01140_Node* Node = Unknown14[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
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

// FUNCTION: 0x10C01730 ?FUN_10c01730@Class_10C01F50@@QAEXH@Z
void Class_10C01F50::FUN_10c01730(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10C00F60_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_10C00F60_Node* Next = Node->Next;
            ::operator delete(Node);
            Node = Next;
        }
    }
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown00 = 0;
    ::operator delete(Unknown14);
    Unknown14 = 0;
    if (!Unknown10)
        FUN_10c01200(Size);
}
