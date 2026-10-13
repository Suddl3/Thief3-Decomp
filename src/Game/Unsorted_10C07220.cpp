// Game/Unsorted_10C07220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/Class_10C07220.h"

extern "C" void* memset(void*, int, unsigned);

struct Class_10C070C0_Result
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

class Class_10C070C0
{
public:
    int FUN_10c070c0(int Id, Class_10C070C0_Result* Out);
};

// FUNCTION: 0x10C07220 ?FUN_10c07220@Class_10C07220@@QAE_NPAVClass_10C070C0@@@Z
bool Class_10C07220::FUN_10c07220(Class_10C070C0* Obj)
{
    Class_10C070C0_Result Result;
    if (!Obj->FUN_10c070c0(0x80848, &Result))
    {
        memset(Unknown5C, 0, sizeof(Unknown5C));
        return false;
    }
    if (Result.Unknown00 >= 0 && Result.Unknown00 < 0x100)
        Unknown5C[0] = (short)Result.Unknown00;
    else
        Unknown5C[0] = 0;
    if (Result.Unknown04 >= 0 && Result.Unknown04 < 0x100)
        Unknown5C[1] = (short)Result.Unknown04;
    else
        Unknown5C[1] = 0;
    if (Result.Unknown08 >= 0 && Result.Unknown08 < 0x100)
        Unknown5C[2] = (short)Result.Unknown08;
    else
        Unknown5C[2] = 0;
    if (Result.Unknown0C >= 0 && Result.Unknown0C < 0x100)
        Unknown5C[3] = (short)Result.Unknown0C;
    else
        Unknown5C[3] = 0;
    if (Result.Unknown10 >= 0 && Result.Unknown10 < 0x100)
        Unknown5C[4] = (short)Result.Unknown10;
    else
        Unknown5C[4] = 0;
    ((Class_1098E330*)Obj)->FUN_1098e330(0x200849, &Unknown0A4);
    return true;
}
