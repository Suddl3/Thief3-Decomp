// Game/Class_10E5D768.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D768.h"
#include "Game/Class_10EB766C.h"

class Class_10E5B578
{
public:
    virtual void FUN_10bbe970() = 0;
};

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E6DC88 : public Class_10EB766C, public Class_10E5B578
{
public:
    Class_10E6DC88(int Value);

    int Unknown10;
};

class Class_10E6C818 : public Class_10E6DC88
{
public:
    Class_10E6C818()
        : Class_10E6DC88(0x2f)
    {
    }

    virtual void Virtual1();
    virtual void FUN_10a8d7c0();
    virtual void FUN_10bbe970();
};

// FUNCTION: 0x10A8D720 ?CreateClass_10E6C818@Class_10E5D768@@UAEPAVClass_10E6C818@@XZ
Class_10E6C818* Class_10E5D768::CreateClass_10E6C818()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6C818* Result = new(0, 0, 0, 0, 0) Class_10E6C818;
    GetAllocator()->Virtual9();
    return Result;
}
