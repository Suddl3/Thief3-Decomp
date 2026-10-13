// Game/Class_10A16BF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A16BF0.h"
#include "Game/Class_10A16BC0.h"
#include "Game/Class_10A18E80.h"
#include "Game/Class_10C00A60.h"

class Struct_10A16B60;

class Class_10A16BF0_Node;

class Class_10A163F0
{
public:
    void Rehash(int Size);
    int Set(int* Key, Struct_10A16B60* Info);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    Class_10A16BF0_Node** Unknown14;
};

class Class_10A16BF0_Node
{
public:
    char Unknown00[0x18];
    Class_10A16BF0_Node* Next;
};

// FUNCTION: 0x10A165C0 ?FUN_10a165c0@Class_10A16BF0@@QAEXH@Z
void Class_10A16BF0::FUN_10a165c0(int A)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10A16BF0_Node* Node = ((Class_10A16BF0_Node**)Unknown14)[i];
        while (Node)
        {
            Class_10A16BF0_Node* Next = Node->Next;
            ::operator delete(Node);
            Node = Next;
        }
    }
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown00 = 0;
    ::operator delete(Unknown14);
    Unknown14 = 0;
    if (!Unknown10[0])
        ((Class_10A163F0*)this)->Rehash(A);
}

// FUNCTION: 0x10A16BF0 ?FUN_10a16bf0@Class_10A16BF0@@QAEXXZ
void Class_10A16BF0::FUN_10a16bf0()
{
    FUN_10a165c0(0x40);
    ::operator delete(Unknown14);
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown14 = 0;
    Unknown00 = 0;
}
