// Game/Unsorted_10914D80_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10914D80.h"
#include "Game/Class_10914D80_Field18.h"
#include "Game/Class_10914D80_Node.h"
#include "Game/Class_10915210.h"
#include "Game/Class_109169E0.h"

class Class_1090A780;

unsigned int FUN_1090e9b0(const void* Data, int Length);

// FUNCTION: 0x109152A0 ?FUN_109152a0@Class_10915210@@QAEXABVClass_1090A780@@H@Z
void Class_10915210::FUN_109152a0(const Class_1090A780& Name, int B)
{
    Class_109169E0* Obj = FUN_10915210(Name);
    if (Obj)
        Obj->FUN_109172f0(B);
}

// FUNCTION: 0x109153E0 ?FUN_109153e0@Class_10914D80@@QAE_NABVClass_109081E0@@@Z
bool Class_10914D80::FUN_109153e0(const Class_109081E0& Key)
{
    if (!Unknown10 && Unknown04 < Unknown0C * 0.05 && Unknown0C > 64)
        FUN_10914e60(Unknown0C / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = FUN_1090e9b0(Data, Length) & ((1 << Unknown08) - 1);
    }
    for (Class_10914D80_Node* Node = Unknown14[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
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
            Node->Key.~Class_109081E0();
            ::operator delete(Node);
            return true;
        }
    }
    return false;
}
