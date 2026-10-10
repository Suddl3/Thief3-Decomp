// Game/Class_10E5D7CC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D7CC.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6cac8[];

class Class_10EB766C
{
public:
    Class_10EB766C();

    void** VTable;
    int Unknown04;
    int Unknown08;
};

class Class_10E6CAC8 : public Class_10EB766C
{
public:
    Class_10E6CAC8()
    {
        VTable = DAT_10e6cac8;
    }
};

// FUNCTION: 0x10A91E70 ?FUN_10a91e70@Class_10E5D7CC@@UAEPAVClass_10E6CAC8@@XZ
Class_10E6CAC8* Class_10E5D7CC::FUN_10a91e70()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6CAC8* Result = new(0, 0, 0, 0, 0) Class_10E6CAC8;
    FUN_10905aa0()->Virtual9();
    return Result;
}
