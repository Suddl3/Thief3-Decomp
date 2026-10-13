// Game/Unsorted_10A8B7D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/cTriggerBoolPropertyParam.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E5D748
{
public:
    virtual cTriggerBoolPropertyParam* FUN_10a8b7d0(int A, int B);
};

// FUNCTION: 0x10A8B7D0 ?FUN_10a8b7d0@Class_10E5D748@@UAEPAVcTriggerBoolPropertyParam@@HH@Z
cTriggerBoolPropertyParam* Class_10E5D748::FUN_10a8b7d0(int A, int B)
{
    GetAllocator()->Virtual8(0, 0);
    cTriggerBoolPropertyParam* Result = new(0, 0, 0, 0, 0) cTriggerBoolPropertyParam;
    GetAllocator()->Virtual9();
    return Result;
}
