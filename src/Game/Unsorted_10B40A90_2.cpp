// Game/Unsorted_10B40A90_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <new>
#include "Game/Struct_109E2A90_Node.h"

// Copied from include/Game/Class_109E2A90.h; Unlink returns the node it removed (the caller deletes eax).
class Class_109E2A90
{
public:
    Struct_109E2A90_Node* Unlink(Struct_109E2A90_Node* Item);

    int Count;
    Struct_109E2A90_Node* Head;
    Struct_109E2A90_Node* Tail;
};

// Copied from include/Game/Class_10B408D0.h with its fields and the inline destructor its owner runs.
class Class_10B408D0
{
public:
    void FUN_10b40620(int Size);
    ~Class_10B408D0()
    {
        FUN_10b40620(0x40);
        ::operator delete(Unknown14);
        Unknown04 = 0;
        Unknown0C = 0;
        Unknown14 = 0;
        Unknown00 = 0;
    }

    int Unknown00;
    int Unknown04;
    char Unknown08[4];
    int Unknown0C;
    char Unknown10[4];
    void* Unknown14;
};

class Class_10B40A90 : public Class_109E2A90
{
public:
    ~Class_10B40A90();

    Class_10B408D0 Unknown0C;
};

// FUNCTION: 0x10B40A90 ??1Class_10B40A90@@QAE@XZ
Class_10B40A90::~Class_10B40A90()
{
    while (Head)
        delete Unlink(Head);
    Unknown0C.FUN_10b40620(0x40);
}
