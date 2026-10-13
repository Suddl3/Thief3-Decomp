// Game/Unsorted_10B40A90_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <new>
#include "Game/Struct_109E2A90_Node.h"
#include "Game/Class_10B408D0.h"

// Copied from include/Game/Class_109E2A90.h; Unlink returns the node it removed (the caller deletes eax).
class Class_109E2A90
{
public:
    Struct_109E2A90_Node* Unlink(Struct_109E2A90_Node* Item);

    int Count;
    Struct_109E2A90_Node* Head;
    Struct_109E2A90_Node* Tail;
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
