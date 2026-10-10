// Game/Class_10E5D548_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10CA8290.h"
#include "Game/Class_10E5D548.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e5d498[];

class Class_109022E0;

class Class_10A84CE0 : public Class_10CA8290
{
public:
    void FUN_10a84ce0(const Class_109022E0& A);
};

class Class_10E5D498 : public Class_10A84CE0
{
public:
    Class_10E5D498()
    {
        VTable = DAT_10e5d498;
    }

    void** VTable;
    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10A13600 ?FUN_10a13600@Class_10E5D548@@UAEPAVClass_10E5D498@@ABVClass_109022E0@@M@Z
Class_10E5D498* Class_10E5D548::FUN_10a13600(const Class_109022E0& A, float B)
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E5D498* Result = new(0, 0, 0, 0, 0) Class_10E5D498;
    FUN_10905aa0()->Virtual9();
    Result->FUN_10a84ce0(A);
    Result->FUN_10ca8290(B);
    return Result;
}
