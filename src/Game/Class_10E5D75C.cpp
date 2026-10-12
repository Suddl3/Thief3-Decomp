// Game/Class_10E5D75C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D75C.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6c7b4[];

class cTriggerOperatorParam
{
public:
    cTriggerOperatorParam() : VTable(DAT_10e6c7b4), Unknown04(4) {}

    void** VTable;
    int Unknown04;
    char Unknown08[4];
};

// FUNCTION: 0x10A8D440 ?CreateOperatorParam@Class_10E5D75C@@UAEPAVcTriggerOperatorParam@@HH@Z
cTriggerOperatorParam* Class_10E5D75C::CreateOperatorParam(int A, int B)
{
    GetAllocator()->Virtual8(0, 0);
    cTriggerOperatorParam* Result = new(0, 0, 0, 0, 0) cTriggerOperatorParam;
    GetAllocator()->Virtual9();
    return Result;
}
