// Game/Unsorted_10C32BA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C30D10.h"
#include "Game/Entry_10C32C30.h"

// Game/Class_10C49740.h's class, with the base its Remove call resolves to (Class_10C30D10,
// as this function's call site shows); the header's base has no Remove.
class Class_10C49740 : public Class_10C30D10
{
public:
    bool FUN_10c49740(int* Key, Entry_10C32C30** Out);
};

class Class_10C32BA0
{
public:
    int FUN_10c32ba0(int A);

    int Count;
    Entry_10C32C30* Head;
    Entry_10C32C30* Tail;
    Class_10C49740 Unknown0C;
};

// FUNCTION: 0x10C32BA0 ?FUN_10c32ba0@Class_10C32BA0@@QAEHH@Z
int Class_10C32BA0::FUN_10c32ba0(int A)
{
    int Key = A;
    Entry_10C32C30* Found;
    Entry_10C32C30* Node = Unknown0C.FUN_10c49740(&Key, &Found) ? Found : 0;
    if (Head == Node)
        Head = Node->Next;
    if (Tail == Node)
        Tail = Node->Prev;
    if (Node->Next)
        Node->Next->Prev = Node->Prev;
    if (Node->Prev)
        Node->Prev->Next = Node->Next;
    Node->Next = (Entry_10C32C30*)-1;
    Node->Prev = (Entry_10C32C30*)-1;
    Count--;
    Key = A;
    Unknown0C.Remove(Key);
    delete Node;
    return A;
}
