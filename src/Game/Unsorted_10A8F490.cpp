// Game/Unsorted_10A8F490.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A8F2E0.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// Game/Class_10E6C8CC.h has no constructor (0x10A8F430) and stops at 0x25 bytes;
// this copy adds both, the tagged new allocates 0x34.
class Class_10E6C8CC
{
public:
    Class_10E6C8CC();

    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10a8f590();

    char Unknown04[0x10];
    int Unknown14;
    char Unknown18[0xc];
    Class_10A8F2E0 Unknown24;
    char Pad25[0xf];
};

class Class_10E5D770
{
public:
    virtual Class_10E6C8CC* CreateClass_10E6C8CC();
};

// FUNCTION: 0x10A8F500 ?CreateClass_10E6C8CC@Class_10E5D770@@UAEPAVClass_10E6C8CC@@XZ
Class_10E6C8CC* Class_10E5D770::CreateClass_10E6C8CC()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6C8CC* Result = new(0, 0, 0, 0, 0) Class_10E6C8CC;
    GetAllocator()->Virtual9();
    return Result;
}
