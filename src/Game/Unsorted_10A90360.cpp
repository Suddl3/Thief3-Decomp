// Game/Unsorted_10A90360.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D7A0.h"
#include "Game/Class_10E5D7A4.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6c990[];

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
class Class_10E6C990 : public Class_10E6DC88
{
public:
    Class_10E6C990() : Class_10E6DC88(0x11)
    {
        VTable = DAT_10e6c990;
        VTable0C = DAT_10e70820;
    }
};

extern void* DAT_10e6c9b0[];

extern void* DAT_10e6c9ac[];

class Class_10E6C9B0 : public Class_10E6DC88
{
public:
    Class_10E6C9B0() : Class_10E6DC88(0x41)
    {
        VTable = DAT_10e6c9b0;
        VTable0C = DAT_10e6c9ac;
    }
};

// FUNCTION: 0x10A903F0 ?FUN_10a903f0@Class_10E5D7A0@@UAEPAVClass_10E6C990@@XZ
Class_10E6C990* Class_10E5D7A0::FUN_10a903f0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6C990* Result = new(0, 0, 0, 0, 0) Class_10E6C990;
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A90490 ?FUN_10a90490@Class_10E5D7A4@@UAEPAVClass_10E6C9B0@@XZ
Class_10E6C9B0* Class_10E5D7A4::FUN_10a90490()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6C9B0* Result = new(0, 0, 0, 0, 0) Class_10E6C9B0;
    GetAllocator()->Virtual9();
    return Result;
}
