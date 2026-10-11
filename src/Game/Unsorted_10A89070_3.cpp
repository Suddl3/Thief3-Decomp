// Game/Unsorted_10A89070_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D734.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class cTriggerClassParam
{
public:
    cTriggerClassParam() : Unknown04(0) {}

    virtual ~cTriggerClassParam();

    int Unknown04;
};

// FUNCTION: 0x10A891A0 ?FUN_10a891a0@Class_10E5D734@@UAEPAVcTriggerClassParam@@HH@Z
cTriggerClassParam* Class_10E5D734::FUN_10a891a0(int A, int B)
{
    GetAllocator()->Virtual8(0, 0);
    cTriggerClassParam* Result = new(0, 0, 0, 0, 0) cTriggerClassParam;
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A89540 ??_GcTriggerClassParam@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A891A0's definition in this unit.
