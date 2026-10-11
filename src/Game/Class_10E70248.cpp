// Game/Class_10E70248.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E70248.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e70860[];

extern void* DAT_10e70820[];

// Constructed by 0x10AAF5B0: a primary table at +0x0 and a second base's at +0xC.
class Class_10E6DC88
{
public:
    Class_10E6DC88(int Value);

    void** VTable;
    int Unknown04;
    int Unknown08;
    void** VTable0C;
    int Unknown10;
};

// Its second base's table is folded with Class_10E8C22C's (0x10E70820).
class Class_10E70860 : public Class_10E6DC88
{
public:
    Class_10E70860() : Class_10E6DC88(0x6f)
    {
        VTable = DAT_10e70860;
        VTable0C = DAT_10e70820;
    }
};

// FUNCTION: 0x10AD07A0 ?FUN_10ad07a0@Class_10E70248@@UAEPAVClass_10E70860@@XZ
Class_10E70860* Class_10E70248::FUN_10ad07a0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E70860* Result = new(0, 0, 0, 0, 0) Class_10E70860;
    GetAllocator()->Virtual9();
    return Result;
}
