// Game/Unsorted_10934890.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10934DB0.h"
#include "Game/cD3DStateCache.h"
#include "Game/Class_10E49EE0_Member.h"
#include "Game/Class_10E49F64.h"

class Class_10E49EE0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int UnlockVertices();

    char Unknown04[0x10];
    Class_10E49EE0_Member* m_Member;
};

extern cD3DStateCache* DAT_10f31be0;

class Class_10934DB0_Member
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
};

class Class_10934990
{
public:
    int FUN_10934990(int* Out, int B, int C);

    char Unknown00[0x14];
    unsigned char Unknown14;
};

class Class_10E49D44
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int LockVertices(unsigned int A, int B, int C, int D, int* Out);

    char Unknown04[8];
    unsigned int Unknown0C;
    Class_10934990** Unknown10;
};

// FUNCTION: 0x10934930 ?LockVertices@Class_10E49D44@@UAEHIHHHPAH@Z
int Class_10E49D44::LockVertices(unsigned int A, int B, int C, int D, int* Out)
{
    if (!Out)
        return 0x80070057;
    *Out = 0;
    if (A < Unknown0C && B != 0)
    {
        Class_10934990* Element = Unknown10[A];
        if (!(Element->Unknown14 & 1))
            return 0x8004071e;
        return Element->FUN_10934990(Out, B, D);
    }
    return 0x80070057;
}

// FUNCTION: 0x10934A20 ?UnlockVertices@Class_10E49EE0@@UAEHXZ
int Class_10E49EE0::UnlockVertices()
{
    if (m_Member == 0)
        return 0x80040721;
    return m_Member->Virtual12();
}

// FUNCTION: 0x10934A40 ?SetStreamSource@Class_10E49F64@@UAEHH@Z
int Class_10E49F64::SetStreamSource(int A)
{
    if (m_Buffer == 0)
        return 0x80040721;
    if (m_Size == 0)
        return 0x80040722;
    DAT_10f31be0->SetStreamSource(m_Buffer, m_Stride);
    return 0;
}

// FUNCTION: 0x10934DB0 ?Release@Class_10934DB0@@QAEXXZ
void Class_10934DB0::Release()
{
    if (Unknown00)
    {
        Unknown00->Virtual2();
        Unknown00 = 0;
    }
}
