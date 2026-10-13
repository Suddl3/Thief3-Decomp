// Game/cNodeHashMap.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cNodeHashMap.h"
#include "Game/Class_10C01140_Node.h"
#include "Game/Class_10C00A50.h"
#include "Game/Class_10C00C70.h"
#include "Game/Class_10C01F50.h"

// FUNCTION: 0x10C016B0 ?Clear@cNodeHashMap@@QAEXH@Z
void cNodeHashMap::Clear(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10C01140_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_10C01140_Node* Next = Node->Next;
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
        Rehash(Size);
}

// FUNCTION: 0x10C01FC0 ?Free@cNodeHashMap@@QAEXXZ
void cNodeHashMap::Free()
{
    Clear(0x40);
    ::operator delete(Unknown14);
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown14 = 0;
    Unknown00 = 0;
}
