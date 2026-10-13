// Game/cHashMap_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C00F60_Node.h"
#include "Game/Class_10C00B40_Field18.h"

// Game/cHashMap.h with FUN_10c01000 added and Unknown14 typed as the node table.
class cHashMap
{
public:
    unsigned int GetBucketIndex(const int& Key);
    bool FUN_10c01000(const int& Key, int* Value);

    int Unknown00;
    int Unknown04;
    int m_BucketBits;
    int Unknown0C;
    bool Unknown10;
    Class_10C00F60_Node** Unknown14;
    Class_10C00B40_Field18 Unknown18;
};

// FUNCTION: 0x10C01000 ?FUN_10c01000@cHashMap@@QAE_NABHPAH@Z
bool cHashMap::FUN_10c01000(const int& Key, int* Value)
{
    unsigned int Index = GetBucketIndex(Key);
    if (!Unknown14)
        return false;
    for (Class_10C00F60_Node* Node = Unknown14[Index]; Node; Node = Node->Next)
    {
        if (Unknown18.Virtual1(Key, Node->Key) == 0)
        {
            *Value = Node->Value;
            return true;
        }
    }
    return false;
}
