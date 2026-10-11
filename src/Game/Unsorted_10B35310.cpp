// Game/Unsorted_10B35310.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E79554.h"
#include "Game/Class_10E79558.h"

extern void* DAT_10e6c7fc[];

extern void* DAT_10e7c2c0[];

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

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

// Its primary table is the one Class_10E6DC88's stores; its second base's table
// (0x10E7C2C0) is its own, so the class takes that address as its name.
class Class_10E7C2C0 : public Class_10E6DC88
{
public:
    Class_10E7C2C0() : Class_10E6DC88(0x6b)
    {
        VTable = DAT_10e6c7fc;
        VTable0C = DAT_10e7c2c0;
    }
};

extern void* DAT_10e7c2c4[];

// Its primary table is DAT_10e6c7fc, folded with the one 0x10A8D5A0's class stores.
class Class_10E6C7FC : public Class_10E6DC88
{
public:
    Class_10E6C7FC() : Class_10E6DC88(0x6a)
    {
        VTable = DAT_10e6c7fc;
        VTable0C = DAT_10e7c2c4;
    }
};

// FUNCTION: 0x10B35310 ?FUN_10b35310@Class_10E79554@@UAEPAVClass_10E7C2C0@@XZ
Class_10E7C2C0* Class_10E79554::FUN_10b35310()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E7C2C0* Result = new(0, 0, 0, 0, 0) Class_10E7C2C0;
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10B353B0 ?FUN_10b353b0@Class_10E79558@@UAEPAVClass_10E6C7FC@@XZ
Class_10E6C7FC* Class_10E79558::FUN_10b353b0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6C7FC* Result = new(0, 0, 0, 0, 0) Class_10E6C7FC;
    FUN_10905aa0()->Virtual9();
    return Result;
}
