// Game/Unsorted_10AD0B10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E7024C.h"
#include "Game/Class_10E70254.h"
#include "Game/Class_10E70258.h"
#include "Game/Class_10E7025C.h"
#include "Game/Class_10E70260.h"
#include "Game/Class_10E70264.h"
#include "Game/Class_10E70268.h"
#include "Game/Class_10E708CC.h"
#include "Game/Class_10E708D8.h"
#include "Game/Class_10E708E4.h"
#include "Game/Class_10E708F0.h"
#include "Game/Class_10E708FC.h"
#include "Game/Class_10E70908.h"
#include "Game/Class_10E70914.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E70884
{
public:
    Class_10E70884();

    char Unknown00[8];
};

class Class_10E70250
{
public:
    virtual Class_10E70884* FUN_10ad0b10();
};

// FUNCTION: 0x10AD0B10 ?FUN_10ad0b10@Class_10E70250@@UAEPAVClass_10E70884@@XZ
Class_10E70884* Class_10E70250::FUN_10ad0b10()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E70884* Result = new(0, 0, 0, 0, 0) Class_10E70884;
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AD0E60 ?FUN_10ad0e60@Class_10E70258@@UAEPAVClass_10E708CC@@XZ
Class_10E708CC* Class_10E70258::FUN_10ad0e60()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E708CC* Result = 0;
    void* Memory = operator new(sizeof(Class_10E708CC), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E708CC*>(Memory)->FUN_10ad0aa0();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AD0EB0 ?FUN_10ad0eb0@Class_10E7025C@@UAEPAVClass_10E708D8@@XZ
Class_10E708D8* Class_10E7025C::FUN_10ad0eb0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E708D8* Result = 0;
    void* Memory = operator new(sizeof(Class_10E708D8), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E708D8*>(Memory)->FUN_10ad0ab0();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AD0F00 ?FUN_10ad0f00@Class_10E70254@@UAEPAVClass_10E708E4@@XZ
Class_10E708E4* Class_10E70254::FUN_10ad0f00()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E708E4* Result = 0;
    void* Memory = operator new(sizeof(Class_10E708E4), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E708E4*>(Memory)->FUN_10ad0ac0();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AD0F50 ?FUN_10ad0f50@Class_10E7024C@@UAEPAVClass_10E708F0@@XZ
Class_10E708F0* Class_10E7024C::FUN_10ad0f50()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E708F0* Result = 0;
    void* Memory = operator new(sizeof(Class_10E708F0), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E708F0*>(Memory)->FUN_10ad0ad0();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AD0FA0 ?FUN_10ad0fa0@Class_10E70260@@UAEPAVClass_10E708FC@@XZ
Class_10E708FC* Class_10E70260::FUN_10ad0fa0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E708FC* Result = 0;
    void* Memory = operator new(sizeof(Class_10E708FC), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E708FC*>(Memory)->FUN_10ad0ae0();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AD0FF0 ?FUN_10ad0ff0@Class_10E70264@@UAEPAVClass_10E70908@@XZ
Class_10E70908* Class_10E70264::FUN_10ad0ff0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E70908* Result = 0;
    void* Memory = operator new(sizeof(Class_10E70908), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E70908*>(Memory)->FUN_10ad0af0();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10AD10F0 ?FUN_10ad10f0@Class_10E70268@@UAEPAVClass_10E70914@@XZ
Class_10E70914* Class_10E70268::FUN_10ad10f0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E70914* Result = 0;
    void* Memory = operator new(sizeof(Class_10E70914), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E70914*>(Memory)->FUN_10ad0b00();
    GetAllocator()->Virtual9();
    return Result;
}
