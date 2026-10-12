// Game/Unsorted_10A33EE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A34730.h"
#include "Game/Class_10A34B90.h"
#include "Game/Class_10A34CD0.h"
#include "Game/Class_10A34D50.h"
#include "Game/cRefPtr.h"
#include "Game/Class_10E6649C.h"
#include "Game/Entry_10A34D50.h"
#include "Game/Object_10AB5B20.h"

struct Info_10A34730
{
    char Unknown00[0x10];
    cRefPtr Unknown10;
};

Class_10905A90_Member* GetAllocator();

struct Struct_10A33EE0_Vec
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

struct Struct_10A33EE0
{
    char Unknown00[0x2C];
    Struct_10A33EE0_Vec Unknown2C;
};

// FUNCTION: 0x10A33EE0 ?FUN_10a33ee0@@YGXPAUStruct_10A33EE0@@0PBUStruct_10A33EE0_Vec@@1@Z
void __stdcall FUN_10a33ee0(Struct_10A33EE0* A, Struct_10A33EE0* B, const Struct_10A33EE0_Vec* C, const Struct_10A33EE0_Vec* D)
{
    if (A)
        A->Unknown2C = *C;
    if (B)
        B->Unknown2C = *D;
}

// FUNCTION: 0x10A346F0 ?Clear@Class_10A34D50@@QAEXXZ
void Class_10A34D50::Clear()
{
    FUN_10a33fd0(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Items);
        m_Items = 0;
        m_CapacityBytes = 0;
    }
}

// FUNCTION: 0x10A34730 ?GetRef@Class_10A34730@@QAE?AVcRefPtr@@XZ
cRefPtr Class_10A34730::GetRef()
{
    return Unknown00->Unknown10;
}

// FUNCTION: 0x10A34760 ?FUN_10a34760@Class_10E6649C@@UAEXHPAH0@Z
void Class_10E6649C::FUN_10a34760(int p1, int* p2, int* p3)
{
    *p2 = p1;
    *p3 = 0x10;
}

// FUNCTION: 0x10A35140 ?Release@Class_10A34B90@@QAEXXZ
void Class_10A34B90::Release()
{
    Reset(0x40);
    ::operator delete(m_Buckets);
    Unknown04 = 0;
    m_BucketCount = 0;
    m_Buckets = 0;
    Unknown00 = 0;
}

// FUNCTION: 0x10A35170 ?Release@Class_10A34CD0@@QAEXXZ
void Class_10A34CD0::Release()
{
    FUN_10a34cd0(0x40);
    ::operator delete(m_Buckets);
    Unknown04 = 0;
    m_BucketCount = 0;
    m_Buckets = 0;
    Unknown00 = 0;
}
