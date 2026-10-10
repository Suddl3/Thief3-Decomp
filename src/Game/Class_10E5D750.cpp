// Game/Class_10E5D750.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D750.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6c6fc[];

class Class_10E6C6FC
{
public:
    Class_10E6C6FC()
    {
        Unknown0C = 0;
        Unknown04 = 0;
        VTable = DAT_10e6c6fc;
        Unknown08 = -1;
    }

    void** VTable;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x10A8C470 ?FUN_10a8c470@Class_10E5D750@@UAEPAVClass_10E6C6FC@@HH@Z
Class_10E6C6FC* Class_10E5D750::FUN_10a8c470(int A, int B)
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6C6FC* Result = new(0, 0, 0, 0, 0) Class_10E6C6FC;
    FUN_10905aa0()->Virtual9();
    return Result;
}
