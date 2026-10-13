// Game/Unsorted_10C5DB50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C5EE80.h"
#include "Game/Class_10E9C9A8.h"

Class_10905A90_Member* GetAllocator();

struct Struct_10C5DB50
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

class Object_10C5DB50
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
    virtual int __stdcall Virtual3();
    virtual int __stdcall Virtual4();
    virtual int __stdcall Virtual5(Struct_10C5DB50* A, void* B, unsigned int* C);
};

// FUNCTION: 0x10C5DB50 ?FUN_10c5db50@@YG_NPAVObject_10C5DB50@@UStruct_10C5DB50@@PAX@Z
bool __stdcall FUN_10c5db50(Object_10C5DB50* A, Struct_10C5DB50 B, void* C)
{
    bool Result = false;
    if (A)
    {
        if (A->Virtual5(&B, C, (unsigned int*)&A) >= 0)
        {
            if (((unsigned int)A & 3) == 3)
                Result = true;
        }
    }
    return Result;
}

// FUNCTION: 0x10C5EE80 ?Release@Class_10C5EE80@@QAEXXZ
void Class_10C5EE80::Release()
{
    FUN_10c5e600(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
