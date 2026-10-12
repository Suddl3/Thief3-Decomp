// Game/Unsorted_10C4CD60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C4D140.h"
#include "Game/Class_10C4DE40.h"
#include "Game/Class_10C4ED70.h"
#include "Game/cResSkeletalAnimInfo.h"

struct Struct_10C4D230
{
    char Unknown00[8];
    int Unknown08;
};

class Class_10E9BBC0
{
public:
    virtual void Virtual0();
    virtual void FUN_10c4d230(Struct_10C4D230* p1);

    char m_Entries[0x3c];
    Class_10C4D140 Unknown40;
};

struct Elem_10C4DE40
{
    int Unknown00;
    int Unknown04;
    char Unknown08[8];
};

struct Struct_10C4ED70
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10C4D230 ?FUN_10c4d230@Class_10E9BBC0@@UAEXPAUStruct_10C4D230@@@Z
void Class_10E9BBC0::FUN_10c4d230(Struct_10C4D230* p1)
{
    Unknown40.FUN_10c4d140(p1->Unknown08);
}

// FUNCTION: 0x10C4D3A0 ?FUN_10c4d3a0@cResSkeletalAnimInfo@@UAEXH@Z
void cResSkeletalAnimInfo::FUN_10c4d3a0(int p1)
{
    Unknown20 = p1;
}

// FUNCTION: 0x10C4D3B0 ?FUN_10c4d3b0@cResSkeletalAnimInfo@@UAEXH@Z
void cResSkeletalAnimInfo::FUN_10c4d3b0(int p1)
{
    Unknown24 = p1;
}

// FUNCTION: 0x10C4DE40 ?FUN_10c4de40@Class_10C4DE40@@QAEHH@Z
int Class_10C4DE40::FUN_10c4de40(int Index)
{
    return m_Elements[Index].Unknown04;
}

// FUNCTION: 0x10C4ED70 ?FUN_10c4ed70@Class_10C4ED70@@QAEXHHPAH@Z
void Class_10C4ED70::FUN_10c4ed70(int A, int B, int* C)
{
    Struct_10C4ED70* Node = (Struct_10C4ED70*)Allocate(1, 0);
    if (Node)
    {
        Node->Unknown00 = A;
        Node->Unknown04 = B;
        Node->Unknown08 = *C;
    }
}
