// Game/Unsorted_10C57490.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10C592B0.h"
#include "Game/Class_10C57530_Unknown18.h"
#include "Game/Class_10C59030.h"
#include "Game/Class_10C59030_Value.h"
#include "Game/Class_10C592B0_Node.h"
#include "Game/Class_10C57490.h"
#include "Game/Class_10C57490_Unknown18.h"

unsigned int HashBytes(const void* Data, int Length);

struct Struct_10C57490
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

class Class_10C57490_Node;

class Class_10C57490_Node
{
public:
    int Unknown00;
    Struct_10C57490 Unknown04;
    Class_10C57490_Node* Next;
};

// FUNCTION: 0x10C57490 ?FUN_10c57490@Class_10C57490@@QAE_NPAHPAUStruct_10C57490@@@Z
bool Class_10C57490::FUN_10c57490(int* Key, Struct_10C57490* Out)
{
    const void* Data;
    int Length;
    Unknown18.Virtual0(*Key, &Data, &Length);
    Class_10C57490_Node** Buckets = Unknown14;
    if (!Buckets)
        return false;
    unsigned int Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    for (Class_10C57490_Node* Node = Buckets[Index]; Node; Node = Node->Next)
    {
        if (Unknown18.Virtual1(*Key, Node) == 0)
        {
            *Out = Node->Unknown04;
            return true;
        }
    }
    return false;
}
