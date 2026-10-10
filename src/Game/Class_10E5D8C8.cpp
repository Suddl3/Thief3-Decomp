// Game/Class_10E5D8C8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D8C8.h"
#include "Game/Class_10E6D218.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A9D160 ?FUN_10a9d160@Class_10E5D8C8@@UAEPAVClass_10E6D218@@XZ
Class_10E6D218* Class_10E5D8C8::FUN_10a9d160()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6D218* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D218), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D218*>(Memory)->FUN_10a9d150();
    FUN_10905aa0()->Virtual9();
    return Result;
}
