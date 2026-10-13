// Game/Unsorted_1091B5E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_1091C710.h"
#include "Game/Class_1091B480_Node.h"

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x1091C710 ?FUN_1091c710@Class_1091c710@@QAEEPAH@Z
unsigned char Class_1091C710::FUN_1091c710(int* Key)
{
    if (!Unknown10 && Count < Size * 0.05 && Size > 64)
        Rehash(Size / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        KeyHasher.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << Bits) - 1);
    }
    for (Class_1091B480_Node* Node = Table[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (KeyHasher.Virtual1(Key, Node->Key) == 0)
        {
            if (Prev || Node->Next)
                Collisions--;
            if (!Prev)
                Table[Index] = Node->Next;
            else
                Prev->Next = Node->Next;
            Count--;
            delete Node;
            return true;
        }
    }
    return false;
}
