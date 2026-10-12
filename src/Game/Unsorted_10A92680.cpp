// Game/Unsorted_10A92680.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D7DC.h"
#include "Game/Class_10E5D7E0.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6cbb0[];

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
class Class_10E6CBB0 : public Class_10E6DC88
{
public:
    Class_10E6CBB0() : Class_10E6DC88(0x3a)
    {
        VTable = DAT_10e6cbb0;
        VTable0C = DAT_10e70820;
    }
};

extern void* DAT_10e6cbd0[];

extern void* DAT_10e6cbcc[];

class Class_10E6CBD0 : public Class_10E6DC88
{
public:
    Class_10E6CBD0() : Class_10E6DC88(0x3b)
    {
        VTable = DAT_10e6cbd0;
        VTable0C = DAT_10e6cbcc;
    }
};

// FUNCTION: 0x10A92720 ?Create@Class_10E5D7DC@@UAEPAVClass_10E6CBB0@@XZ
Class_10E6CBB0* Class_10E5D7DC::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CBB0* Result = new(0, 0, 0, 0, 0) Class_10E6CBB0;
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A927C0 ?Create@Class_10E5D7E0@@UAEPAVClass_10E6CBD0@@XZ
Class_10E6CBD0* Class_10E5D7E0::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CBD0* Result = new(0, 0, 0, 0, 0) Class_10E6CBD0;
    GetAllocator()->Virtual9();
    return Result;
}
