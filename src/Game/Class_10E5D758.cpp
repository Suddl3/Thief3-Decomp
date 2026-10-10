// Game/Unsorted_10A8D0A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D758.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

enum EName
{
    NAME_None = 0
};

class FName
{
public:
    FName(EName N) : Index(N) {}

    int Index;
};

extern void* DAT_10e6c77c[];

class Class_10E6C77C
{
public:
    Class_10E6C77C() : VTable(DAT_10e6c77c), Unknown04(NAME_None) {}

    void** VTable;
    FName Unknown04;
};

// FUNCTION: 0x10A8D110 ?FUN_10a8d110@Class_10E5D758@@UAEPAVClass_10E6C77C@@HH@Z
Class_10E6C77C* Class_10E5D758::FUN_10a8d110(int A, int B)
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6C77C* Result = new(0, 0, 0, 0, 0) Class_10E6C77C;
    FUN_10905aa0()->Virtual9();
    return Result;
}
