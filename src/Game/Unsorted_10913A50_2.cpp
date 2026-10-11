// Game/Unsorted_10913A50_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10913D70.h"

extern void* DAT_10e49384[];

inline void FreeBlock(int*& Block)
{
    if (Block)
    {
        int* Obj = Block - 1;
        GetAllocator()->Virtual5(Obj);
        Block = 0;
    }
}

class Class_10E49384
{
public:
    ~Class_10E49384();

    void** VTable;
    int* Unknown04;
};

// FUNCTION: 0x10913A50 ??1Class_10E49384@@QAE@XZ
Class_10E49384::~Class_10E49384()
{
    VTable = DAT_10e49384;
    FreeBlock(Unknown04);
}

// FUNCTION: 0x10913D70 ?FUN_10913d70@Class_10913D70@@QAEPAV1@PAV1@@Z
Class_10913D70* Class_10913D70::FUN_10913d70(Class_10913D70* Other)
{
    Unknown04 = Other->Unknown04;
    return this;
}
