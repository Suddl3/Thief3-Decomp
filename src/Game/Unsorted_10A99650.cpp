// Game/Unsorted_10A99650.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D86C.h"
#include "Game/Class_10E5D870.h"
#include "Game/Class_10E5D874.h"
#include "Game/Class_10E6D0F8.h"
#include "Game/Class_10E6D104.h"
#include "Game/Class_10E6D110.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A99650 ?FUN_10a99650@Class_10E5D874@@UAEPAVClass_10E6D0F8@@XZ
Class_10E6D0F8* Class_10E5D874::FUN_10a99650()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D0F8* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D0F8), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D0F8*>(Memory)->FUN_10a99610();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A996A0 ?FUN_10a996a0@Class_10E5D870@@UAEPAVClass_10E6D104@@XZ
Class_10E6D104* Class_10E5D870::FUN_10a996a0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D104* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D104), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D104*>(Memory)->FUN_10a99620();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A99C90 ?FUN_10a99c90@Class_10E5D86C@@UAEPAVClass_10E6D110@@XZ
Class_10E6D110* Class_10E5D86C::FUN_10a99c90()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D110* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D110), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D110*>(Memory)->FUN_10a99640();
    FUN_10905aa0()->Virtual9();
    return Result;
}
