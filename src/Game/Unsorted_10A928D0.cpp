// Game/Unsorted_10A928D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D940.h"
#include "Game/Class_10E5D944.h"
#include "Game/Class_10E6CBEC.h"
#include "Game/Class_10E6CBF8.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A928D0 ?Create@Class_10E5D944@@UAEPAVClass_10E6CBEC@@XZ
Class_10E6CBEC* Class_10E5D944::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CBEC* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CBEC), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CBEC*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A92920 ?Create@Class_10E5D940@@UAEPAVClass_10E6CBF8@@XZ
Class_10E6CBF8* Class_10E5D940::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CBF8* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CBF8), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CBF8*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}
