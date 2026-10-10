// Game/Class_10E5D75C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D75C.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6c7b4[];

class Class_10E6C7B4
{
public:
    Class_10E6C7B4() : VTable(DAT_10e6c7b4), Unknown04(4) {}

    void** VTable;
    int Unknown04;
    char Unknown08[4];
};

// FUNCTION: 0x10A8D440 ?FUN_10a8d440@Class_10E5D75C@@UAEPAVClass_10E6C7B4@@HH@Z
Class_10E6C7B4* Class_10E5D75C::FUN_10a8d440(int A, int B)
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6C7B4* Result = new(0, 0, 0, 0, 0) Class_10E6C7B4;
    FUN_10905aa0()->Virtual9();
    return Result;
}
