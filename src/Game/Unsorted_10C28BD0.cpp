// Game/Unsorted_10C28BD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C28B70.h"
#include "Game/Class_10C28CA0.h"

extern Class_10C28CA0* DAT_10ff70a0;

struct Struct_10C28C60
{
    int Count;
    int Unknown04;
    Class_10C28B70** Items;
};

// FUNCTION: 0x10C28C60 ?DeleteItems@@YAXPAUStruct_10C28C60@@@Z
void DeleteItems(Struct_10C28C60* Array)
{
    for (int i = 0; i < Array->Count; i++)
        delete Array->Items[i];
    Array->Count = 0;
}

// FUNCTION: 0x10C28D90 ?ReleaseSharedInstance@@YAXXZ
void ReleaseSharedInstance()
{
    --DAT_10ff70a0->Unknown0C;
    if (DAT_10ff70a0->Unknown0C == 0)
    {
        delete DAT_10ff70a0;
        DAT_10ff70a0 = 0;
    }
}
