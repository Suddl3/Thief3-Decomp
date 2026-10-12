// Game/Unsorted_10A93E40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D7F4.h"
#include "Game/Class_10E5D95C.h"
#include "Game/Class_10E5D960.h"
#include "Game/Class_10E5D964.h"
#include "Game/Class_10E6CCA4.h"
#include "Game/Class_10E6CCB0.h"
#include "Game/Class_10E6CCD8.h"

class Class_10E6C890
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual int FUN_10a93fd0(int A);
};

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6ccbc[];

class Class_10EB766C
{
public:
    Class_10EB766C();

    void** VTable;
    int Unknown04;
    int Unknown08;
};

class Class_10E6CCBC : public Class_10EB766C
{
public:
    Class_10E6CCBC()
    {
        VTable = DAT_10e6ccbc;
    }
};

// FUNCTION: 0x10A93E40 ?Create@Class_10E5D960@@UAEPAVClass_10E6CCA4@@XZ
Class_10E6CCA4* Class_10E5D960::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CCA4* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CCA4), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CCA4*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A93E90 ?Create@Class_10E5D964@@UAEPAVClass_10E6CCB0@@XZ
Class_10E6CCB0* Class_10E5D964::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CCB0* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CCB0), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CCB0*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A93EE0 ?Create@Class_10E5D7F4@@UAEPAVClass_10E6CCBC@@XZ
Class_10E6CCBC* Class_10E5D7F4::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CCBC* Result = new(0, 0, 0, 0, 0) Class_10E6CCBC;
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A93F80 ?Create@Class_10E5D95C@@UAEPAVClass_10E6CCD8@@XZ
Class_10E6CCD8* Class_10E5D95C::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CCD8* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CCD8), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CCD8*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A93FD0 ?FUN_10a93fd0@Class_10E6C890@@UAEHH@Z
int Class_10E6C890::FUN_10a93fd0(int A)
{
    return A == Virtual4();
}
