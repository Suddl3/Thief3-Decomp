// Game/Unsorted_10B8FCB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E88D60.h"
#include "Game/Class_10E88D64.h"
#include "Game/Class_10E89818.h"
#include "Game/Class_10E89824.h"
#include "Game/Class_10E8984C.h"

extern void* DAT_10e8984c[];

extern void* DAT_10e89a10[];

class Class_10E89AA0
{
public:
    Class_10E89AA0(int A, int B, int C);

    void** Unknown00;
};

class Class_10E89A10 : public Class_10E89AA0
{
public:
    Class_10E89A10* FUN_10b92660(int A, int B);
};

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10B8FCB0 ?FUN_10b8fcb0@Class_10E88D64@@UAEPAVClass_10E89818@@XZ
Class_10E89818* Class_10E88D64::FUN_10b8fcb0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E89818* Result = 0;
    void* Memory = operator new(sizeof(Class_10E89818), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E89818*>(Memory)->FUN_10b8fc80();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10B8FD00 ?FUN_10b8fd00@Class_10E88D60@@UAEPAVClass_10E89824@@XZ
Class_10E89824* Class_10E88D60::FUN_10b8fd00()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E89824* Result = 0;
    void* Memory = operator new(sizeof(Class_10E89824), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E89824*>(Memory)->FUN_10b8fca0();
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10B90320 ??0Class_10E8984C@@QAE@XZ
Class_10E8984C::Class_10E8984C()
{
    Unknown00 = DAT_10e8984c;
    Unknown04 = 0;
}

// FUNCTION: 0x10B92660 ?FUN_10b92660@Class_10E89A10@@QAEPAV1@HH@Z
Class_10E89A10* Class_10E89A10::FUN_10b92660(int A, int B)
{
    this->Class_10E89AA0::Class_10E89AA0(0, A, B);
    Unknown00 = DAT_10e89a10;
    return this;
}
