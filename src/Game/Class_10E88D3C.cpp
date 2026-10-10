// Game/Unsorted_10B8EC50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E88D3C.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e89720[];

class Class_10E89720
{
public:
    Class_10E89720() : VTable(DAT_10e89720), Unknown04(3) {}

    void** VTable;
    int Unknown04;
};

// FUNCTION: 0x10B8EC50 ?FUN_10b8ec50@Class_10E88D3C@@UAEPAVClass_10E89720@@HH@Z
Class_10E89720* Class_10E88D3C::FUN_10b8ec50(int A, int B)
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E89720* Result = new(0, 0, 0, 0, 0) Class_10E89720;
    FUN_10905aa0()->Virtual9();
    return Result;
}
