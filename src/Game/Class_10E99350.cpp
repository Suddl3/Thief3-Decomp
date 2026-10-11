// Game/Class_10E99350.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Struct_10B9F810.h"

extern void* DAT_10e99350[];

Class_10905A90_Member* GetAllocator();

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int Count);

    int Unknown00;
    int Unknown04;
    Struct_10B9F810** Unknown08;
};

class Class_10E99350
{
public:
    void FUN_10c274e0();

    void** VTable;
    int Unknown04;
    Class_10BFBD70 Unknown08;
};

// FUNCTION: 0x10C274E0 ?FUN_10c274e0@Class_10E99350@@QAEXXZ
void Class_10E99350::FUN_10c274e0()
{
    Class_10BFBD70& Array = Unknown08;
    VTable = DAT_10e99350;
    for (int i = 0; i < Array.Unknown00; i++)
        delete Array.Unknown08[i];
    Array.Unknown00 = 0;
    Array.FUN_10bfbd70(0);
    if (Array.Unknown04)
    {
        GetAllocator()->Virtual5(Array.Unknown08);
        Array.Unknown08 = 0;
        Array.Unknown04 = 0;
    }
}
