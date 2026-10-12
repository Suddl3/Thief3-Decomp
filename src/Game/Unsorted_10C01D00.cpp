// Game/Unsorted_10C01D00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C01140.h"
#include "Game/Entry_10C32C30.h"

class Class_10C49740 : public Class_10C01140
{
public:
    bool FUN_10c49740(int* Key, Entry_10C32C30** Out);
};

// A list of nodes (Count, Head, Tail) and the hash table indexing them at +0xC.
class Class_10C01EC0
{
public:
    int Remove(int A);

    int Count;
    Entry_10C32C30* Head;
    Entry_10C32C30* Tail;
    Class_10C49740 m_Index;
};

// FUNCTION: 0x10C01EC0 ?Remove@Class_10C01EC0@@QAEHH@Z
int Class_10C01EC0::Remove(int A)
{
    int Key = A;
    Entry_10C32C30* Found;
    Entry_10C32C30* Node = m_Index.FUN_10c49740(&Key, &Found) ? Found : 0;
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
    m_Index.Remove(Key);
    delete Node;
    return A;
}
