// Game/Unsorted_10A164C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A15C30_Field18.h"
#include "Game/Class_10A15C30_Node.h"

unsigned int HashBytes(const void* Data, int Length);

// Copied from include/Game/Class_10A15C30.h with the hash table's members added.
class Class_10A15C30
{
public:
    bool FUN_10a15c30(int* p1);
    bool Remove(int* Key);
    void Rehash(int Size);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    Class_10A15C30_Node** Unknown14;
    Class_10A15C30_Field18 Unknown18;
};

// FUNCTION: 0x10A164C0 ?Remove@Class_10A15C30@@QAE_NPAH@Z
bool Class_10A15C30::Remove(int* Key)
{
    if (!Unknown10 && Unknown04 < Unknown0C * 0.05 && Unknown0C > 64)
        Rehash(Unknown0C / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(*Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    }
    for (Class_10A15C30_Node* Node = Unknown14[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (Unknown18.Virtual1(*Key, Node->Key) == 0)
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
