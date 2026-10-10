// Game/Class_10E5D7B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D7B0.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6ca24[];

// The second base's table, folded with Class_10E8C22C's (0x10E70820).
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

class Class_10E6CA24 : public Class_10E6DC88
{
public:
    Class_10E6CA24() : Class_10E6DC88(0x34)
    {
        VTable = DAT_10e6ca24;
        VTable0C = DAT_10e70820;
    }
};

// FUNCTION: 0x10A90D10 ?FUN_10a90d10@Class_10E5D7B0@@UAEPAVClass_10E6CA24@@XZ
Class_10E6CA24* Class_10E5D7B0::FUN_10a90d10()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6CA24* Result = new(0, 0, 0, 0, 0) Class_10E6CA24;
    FUN_10905aa0()->Virtual9();
    return Result;
}
