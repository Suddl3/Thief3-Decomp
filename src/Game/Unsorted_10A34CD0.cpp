// Game/Unsorted_10A34CD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A34C10.h"

class Class_10C40740
{
public:
    ~Class_10C40740();

    char Unknown00[0x10];
};

class Class_10A34C10_Node
{
public:
    Class_10C40740 Key;
    int Value;
    Class_10A34C10_Node* Next;
};

class Class_10A34CD0 : public Class_10A34C10
{
public:
    void FUN_10a34cd0(int A);
};

// FUNCTION: 0x10A34CD0 ?FUN_10a34cd0@Class_10A34CD0@@QAEXH@Z
void Class_10A34CD0::FUN_10a34cd0(int A)
{
    for (int i = 0; i < Size; i++)
    {
        Class_10A34C10_Node* Node = Table[i];
        while (Node)
        {
            Class_10A34C10_Node* Next = Node->Next;
            Node->Key.~Class_10C40740();
            ::operator delete(Node);
            Node = Next;
        }
    }
    Count = 0;
    Size = 0;
    Collisions = 0;
    ::operator delete(Table);
    Table = 0;
    if (!Unknown10)
        Rehash(A);
}
