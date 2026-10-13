// Game/Unsorted_1091C850_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10929710.h"

class Class_1091B480
{
public:
    void Rehash(int NewSize);

    int Collisions;
    int Count;
    int Bits;
    int Size;
    bool Unknown10;
    char Pad11[0x3];
    Class_10929710** Table;
};

class Class_1091CC80 : public Class_1091B480
{
public:
    void FUN_1091c850(int A);
};

// FUNCTION: 0x1091C850 ?FUN_1091c850@Class_1091CC80@@QAEXH@Z
void Class_1091CC80::FUN_1091c850(int A)
{
    for (int i = 0; i < Size; i++)
    {
        Class_10929710* Node = Table[i];
        while (Node)
        {
            Class_10929710* Next = Node->Next;
            Node->FUN_10929710();
            delete Node;
            Node = Next;
        }
    }
    Count = 0;
    Size = 0;
    Collisions = 0;
    delete Table;
    Table = 0;
    if (!Unknown10)
        Rehash(A);
}
