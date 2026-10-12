// Game/Unsorted_10A95B80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D824.h"
#include "Game/Class_10E5D9AC.h"
#include "Game/Class_10E6CE94.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6ce78[];

class Class_10EB766C
{
public:
    Class_10EB766C();

    void** VTable;
    int Unknown04;
    int Unknown08;
};

class Class_10E6CE78 : public Class_10EB766C
{
public:
    Class_10E6CE78()
    {
        VTable = DAT_10e6ce78;
    }
};

// FUNCTION: 0x10A95BB0 ?FUN_10a95bb0@Class_10E5D824@@UAEPAVClass_10E6CE78@@XZ
Class_10E6CE78* Class_10E5D824::FUN_10a95bb0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CE78* Result = new(0, 0, 0, 0, 0) Class_10E6CE78;
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A95C50 ?FUN_10a95c50@Class_10E5D9AC@@UAEPAVClass_10E6CE94@@XZ
Class_10E6CE94* Class_10E5D9AC::FUN_10a95c50()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CE94* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CE94), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CE94*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}
