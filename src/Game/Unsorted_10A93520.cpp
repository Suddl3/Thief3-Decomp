// Game/Unsorted_10A93520.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D7EC.h"
#include "Game/Class_10E5D914.h"
#include "Game/Class_10E5D918.h"
#include "Game/Class_10E5D91C.h"
#include "Game/Class_10E6CC64.h"
#include "Game/Class_10E6CC70.h"
#include "Game/Class_10E6CC98.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6cc7c[];

class Class_10EB766C
{
public:
    Class_10EB766C();

    void** VTable;
    int Unknown04;
    int Unknown08;
};

class Class_10E6CC7C : public Class_10EB766C
{
public:
    Class_10E6CC7C()
    {
        VTable = DAT_10e6cc7c;
    }
};

// FUNCTION: 0x10A93520 ?FUN_10a93520@Class_10E5D918@@UAEPAVClass_10E6CC64@@XZ
Class_10E6CC64* Class_10E5D918::FUN_10a93520()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6CC64* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CC64), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CC64*>(Memory)->FUN_10a93350();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A93570 ?FUN_10a93570@Class_10E5D91C@@UAEPAVClass_10E6CC70@@XZ
Class_10E6CC70* Class_10E5D91C::FUN_10a93570()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6CC70* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CC70), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CC70*>(Memory)->FUN_10a93370();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A935C0 ?FUN_10a935c0@Class_10E5D7EC@@UAEPAVClass_10E6CC7C@@XZ
Class_10E6CC7C* Class_10E5D7EC::FUN_10a935c0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6CC7C* Result = new(0, 0, 0, 0, 0) Class_10E6CC7C;
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A93870 ?FUN_10a93870@Class_10E5D914@@UAEPAVClass_10E6CC98@@XZ
Class_10E6CC98* Class_10E5D914::FUN_10a93870()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6CC98* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CC98), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CC98*>(Memory)->FUN_10a93500();
    FUN_10905aa0()->Virtual9();
    return Result;
}
