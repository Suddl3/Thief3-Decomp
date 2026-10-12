// Game/Unsorted_10A9D3D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D8CC.h"
#include "Game/Class_10E5D8D0.h"
#include "Game/Class_10E5D8D4.h"
#include "Game/Class_10E5D8D8.h"
#include "Game/Class_10E5D8DC.h"
#include "Game/Class_10E5D8E0.h"
#include "Game/Class_10E6D224.h"
#include "Game/Class_10E6D230.h"
#include "Game/Class_10E6D23C.h"
#include "Game/Class_10E6D248.h"
#include "Game/Class_10E6D254.h"
#include "Game/Class_10E6D260.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A9D3D0 ?Create@Class_10E5D8D0@@UAEPAVClass_10E6D224@@XZ
Class_10E6D224* Class_10E5D8D0::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D224* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D224), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D224*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9D420 ?Create@Class_10E5D8D4@@UAEPAVClass_10E6D230@@XZ
Class_10E6D230* Class_10E5D8D4::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D230* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D230), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D230*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9D470 ?Create@Class_10E5D8D8@@UAEPAVClass_10E6D23C@@XZ
Class_10E6D23C* Class_10E5D8D8::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D23C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D23C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D23C*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9D4C0 ?Create@Class_10E5D8DC@@UAEPAVClass_10E6D248@@XZ
Class_10E6D248* Class_10E5D8DC::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D248* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D248), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D248*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9D510 ?Create@Class_10E5D8E0@@UAEPAVClass_10E6D254@@XZ
Class_10E6D254* Class_10E5D8E0::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D254* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D254), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D254*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A9D560 ?Create@Class_10E5D8CC@@UAEPAVClass_10E6D260@@XZ
Class_10E6D260* Class_10E5D8CC::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6D260* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6D260), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6D260*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}
