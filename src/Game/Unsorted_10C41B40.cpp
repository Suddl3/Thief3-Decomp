// Game/Unsorted_10C41B40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C40730.h"
#include "Game/Class_10C42090.h"

struct Node_10C42090;

struct Node_10C42090 : public Class_10C40730
{
};

// FUNCTION: 0x10C42090 ?FUN_10c42090@Class_10C42090@@QAEXPAUNode_10C42090@@@Z
void Class_10C42090::FUN_10c42090(Node_10C42090* Rootnode)
{
    for (Node_10C42090* Pnode = Rootnode; !Pnode->Unknown29; Rootnode = Pnode)
    {
        FUN_10c42090(Pnode->Unknown08);
        Pnode = Pnode->Unknown00;
        Rootnode->FUN_10c40730();
        ::operator delete(Rootnode);
    }
}
