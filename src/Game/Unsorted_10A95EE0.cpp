// Game/Unsorted_10A95EE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D82C.h"
#include "Game/Class_10E5D830.h"
#include "Game/Class_10E5D834.h"
#include "Game/Class_10E5D920.h"
#include "Game/Class_10E5D924.h"
#include "Game/Class_10E5D928.h"
#include "Game/Class_10E5D92C.h"
#include "Game/Class_10E5D930.h"
#include "Game/Class_10E5D934.h"
#include "Game/Class_10E5D938.h"
#include "Game/Class_10E5D93C.h"
#include "Game/Class_10E5D9B0.h"
#include "Game/Class_10E5D9B4.h"
#include "Game/Class_10E5D9B8.h"
#include "Game/Class_10E6CEC4.h"
#include "Game/Class_10E6CED0.h"
#include "Game/Class_10E6CEDC.h"
#include "Game/Class_10E6CEE8.h"
#include "Game/Class_10E6CEF4.h"
#include "Game/Class_10E6CF00.h"
#include "Game/Class_10E6CF0C.h"
#include "Game/Class_10E6CF18.h"
#include "Game/Class_10E6CF24.h"
#include "Game/Class_10E6CF30.h"
#include "Game/Class_10E6CF3C.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6cf48[];

class Class_10EB766C
{
public:
    Class_10EB766C();

    void** VTable;
    int Unknown04;
    int Unknown08;
};

class Class_10E6CF48 : public Class_10EB766C
{
public:
    Class_10E6CF48()
    {
        VTable = DAT_10e6cf48;
    }
};

extern void* DAT_10e6cf64[];

class Class_10E6CF64 : public Class_10EB766C
{
public:
    Class_10E6CF64()
    {
        VTable = DAT_10e6cf64;
    }
};

extern void* DAT_10e6cf80[];

class Class_10E6CF80 : public Class_10EB766C
{
public:
    Class_10E6CF80()
    {
        VTable = DAT_10e6cf80;
    }
};

// FUNCTION: 0x10A95EE0 ?Create@Class_10E5D928@@UAEPAVClass_10E6CEC4@@XZ
Class_10E6CEC4* Class_10E5D928::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CEC4* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CEC4), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CEC4*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A95F30 ?Create@Class_10E5D92C@@UAEPAVClass_10E6CED0@@XZ
Class_10E6CED0* Class_10E5D92C::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CED0* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CED0), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CED0*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A95F80 ?Create@Class_10E5D930@@UAEPAVClass_10E6CEDC@@XZ
Class_10E6CEDC* Class_10E5D930::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CEDC* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CEDC), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CEDC*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A95FD0 ?Create@Class_10E5D934@@UAEPAVClass_10E6CEE8@@XZ
Class_10E6CEE8* Class_10E5D934::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CEE8* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CEE8), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CEE8*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A96020 ?Create@Class_10E5D920@@UAEPAVClass_10E6CEF4@@XZ
Class_10E6CEF4* Class_10E5D920::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CEF4* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CEF4), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CEF4*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A96070 ?Create@Class_10E5D9B0@@UAEPAVClass_10E6CF00@@XZ
Class_10E6CF00* Class_10E5D9B0::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CF00* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CF00), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CF00*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A960C0 ?Create@Class_10E5D9B4@@UAEPAVClass_10E6CF0C@@XZ
Class_10E6CF0C* Class_10E5D9B4::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CF0C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CF0C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CF0C*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A96110 ?Create@Class_10E5D9B8@@UAEPAVClass_10E6CF18@@XZ
Class_10E6CF18* Class_10E5D9B8::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CF18* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CF18), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CF18*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A96160 ?Create@Class_10E5D938@@UAEPAVClass_10E6CF24@@XZ
Class_10E6CF24* Class_10E5D938::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CF24* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CF24), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CF24*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A961B0 ?Create@Class_10E5D93C@@UAEPAVClass_10E6CF30@@XZ
Class_10E6CF30* Class_10E5D93C::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CF30* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CF30), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CF30*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A96390 ?Create@Class_10E5D924@@UAEPAVClass_10E6CF3C@@XZ
Class_10E6CF3C* Class_10E5D924::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CF3C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E6CF3C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E6CF3C*>(Memory)->Construct();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A97E70 ?Create@Class_10E5D830@@UAEPAVClass_10E6CF48@@XZ
Class_10E6CF48* Class_10E5D830::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CF48* Result = new(0, 0, 0, 0, 0) Class_10E6CF48;
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A97F10 ?Create@Class_10E5D82C@@UAEPAVClass_10E6CF64@@XZ
Class_10E6CF64* Class_10E5D82C::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CF64* Result = new(0, 0, 0, 0, 0) Class_10E6CF64;
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A98630 ?Create@Class_10E5D834@@UAEPAVClass_10E6CF80@@XZ
Class_10E6CF80* Class_10E5D834::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6CF80* Result = new(0, 0, 0, 0, 0) Class_10E6CF80;
    GetAllocator()->Virtual9();
    return Result;
}
