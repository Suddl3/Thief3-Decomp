// Game/Class_10E5D750.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D750.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6c6fc[];

class cTriggerByteEnumParam
{
public:
    cTriggerByteEnumParam()
    {
        m_Name = 0;
        Unknown04 = 0;
        VTable = DAT_10e6c6fc;
        m_Index = -1;
    }

    void** VTable;
    int Unknown04;
    int m_Index;
    int m_Name;
};

// FUNCTION: 0x10A8C470 ?FUN_10a8c470@Class_10E5D750@@UAEPAVcTriggerByteEnumParam@@HH@Z
cTriggerByteEnumParam* Class_10E5D750::FUN_10a8c470(int A, int B)
{
    GetAllocator()->Virtual8(0, 0);
    cTriggerByteEnumParam* Result = new(0, 0, 0, 0, 0) cTriggerByteEnumParam;
    GetAllocator()->Virtual9();
    return Result;
}
