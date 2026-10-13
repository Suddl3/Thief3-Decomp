// Game/Unsorted_10B264D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1090A780.h"
#include "Game/Class_10B26930.h"
#include "Game/Class_10B27FD0.h"
#include "Game/Class_10B32D60.h"
#include "Game/Class_10E7AD44.h"
#include "Game/Class_10E7B89C.h"
#include "Game/Class_10E7BB2C.h"
#include "Game/cT3ReadBookWindow.h"
#include "Game/Class_10E7C380.h"
#include "Game/Class_10E7C38C.h"
#include "Game/Class_10E7C398.h"
#include "Game/Class_10E7C3B0.h"
#include "Game/Class_10E7C3BC.h"
#include "Game/Class_10E7C3C8.h"
#include "Game/Class_10E7C3D4.h"
#include "Game/Class_10E7C3E0.h"
#include "Game/Class_10E7C3EC.h"
#include "Game/Class_10E7C404.h"
#include "Game/Class_10E7C410.h"
#include "Game/Class_10E7C41C.h"
#include "Game/Class_10E7C3F8.h"

extern void* DAT_10e7ad44[];

class cTaggedAnimSeq
{
public:
    virtual void Virtual0();
    virtual Class_1090A780 GetName();

    Class_1090A780 m_Name;
};

extern void* DAT_10e7c380[];

extern void* DAT_10e7c38c[];

extern void* DAT_10e7c3bc[];

extern void* DAT_10e7c3d4[];

extern void* DAT_10e7c3e0[];

extern void* DAT_10e7c404[];

// FUNCTION: 0x10B26930 ?FUN_10b26930@Class_10B26930@@QAEXH@Z
void Class_10B26930::FUN_10b26930(int param)
{
    Field04 = param;
}

// FUNCTION: 0x10B27FD0 ?FUN_10b27fd0@Class_10B27FD0@@QAEXE@Z
void Class_10B27FD0::FUN_10b27fd0(unsigned char param)
{
    Field178 = param;
}

// FUNCTION: 0x10B28420 ?FUN_10b28420@Class_10E7AD44@@QAEXXZ
void Class_10E7AD44::FUN_10b28420()
{
    Field00 = (void*)DAT_10e7ad44;
}

// FUNCTION: 0x10B2BB20 ?FUN_10b2bb20@@YAHXZ
int FUN_10b2bb20()
{
    return 0x7;
}

// FUNCTION: 0x10B2FBF0 ?FUN_10b2fbf0@@YGDHH@Z
char __stdcall FUN_10b2fbf0(int p1, int p2)
{
    return 0;
}

// FUNCTION: 0x10B2FC00 ?FUN_10b2fc00@@YAHXZ
int FUN_10b2fc00()
{
    return 6;
}

// FUNCTION: 0x10B32D60 ?FUN_10b32d60@Class_10B32D60@@QAEXXZ
void Class_10B32D60::FUN_10b32d60()
{
    Field1A4 = 1;
}

// FUNCTION: 0x10B349B0 ?FUN_10b349b0@@YAHXZ
int __cdecl FUN_10b349b0(void)
{
    return 0x24;
}

// FUNCTION: 0x10B34B10 ?GetName@cTaggedAnimSeq@@UAE?AVClass_1090A780@@XZ
Class_1090A780 cTaggedAnimSeq::GetName()
{
    return Class_1090A780(m_Name);
}

// FUNCTION: 0x10B35480 ?FUN_10b35480@@YAHXZ
int __cdecl FUN_10b35480(void)
{
    return 0x6c;
}

// FUNCTION: 0x10B35510 ?FUN_10b35510@@YAHXZ
int __cdecl FUN_10b35510(void)
{
    return 0x70;
}

// FUNCTION: 0x10B35620 ?FUN_10b35620@@YAHXZ
int FUN_10b35620()
{
    return 0x6d;
}

// FUNCTION: 0x10B36230 ?FUN_10b36230@@YAHXZ
int FUN_10b36230()
{
    return 0x87;
}

// FUNCTION: 0x10B36240 ?Construct@Class_10E7C380@@QAEPAV1@XZ
Class_10E7C380* Class_10E7C380::Construct()
{
    Field00 = DAT_10e7c380;
    return this;
}

// FUNCTION: 0x10B36250 ?FUN_10b36250@@YAHXZ
int FUN_10b36250()
{
    return 0x8a;
}

// FUNCTION: 0x10B36260 ?Construct@Class_10E7C38C@@QAEPAV1@XZ
Class_10E7C38C* Class_10E7C38C::Construct()
{
    Field00 = DAT_10e7c38c;
    return this;
}

// FUNCTION: 0x10B36270 ?FUN_10b36270@@YAHXZ
int FUN_10b36270()
{
    return 0x88;
}

// FUNCTION: 0x10B36290 ?FUN_10b36290@@YAHXZ
int FUN_10b36290()
{
    return 0x89;
}

// FUNCTION: 0x10B362E0 ?FUN_10b362e0@@YAHXZ
int FUN_10b362e0()
{
    return 0x8b;
}

// FUNCTION: 0x10B36300 ?FUN_10b36300@@YAHXZ
int FUN_10b36300()
{
    return 0x8c;
}

// FUNCTION: 0x10B36310 ?Construct@Class_10E7C3BC@@QAEPAV1@XZ
Class_10E7C3BC* Class_10E7C3BC::Construct()
{
    *(void**)this = DAT_10e7c3bc;
    return this;
}

// FUNCTION: 0x10B36320 ?FUN_10b36320@@YAHXZ
int FUN_10b36320()
{
    return 0x8d;
}

// FUNCTION: 0x10B36340 ?FUN_10b36340@@YAHXZ
int FUN_10b36340()
{
    return 0x8e;
}

// FUNCTION: 0x10B36350 ?Construct@Class_10E7C3D4@@QAEPAV1@XZ
Class_10E7C3D4* Class_10E7C3D4::Construct()
{
    *(void**)this = DAT_10e7c3d4;
    return this;
}

// FUNCTION: 0x10B36360 ?FUN_10b36360@@YAHXZ
int FUN_10b36360()
{
    return 0x8f;
}

// FUNCTION: 0x10B36370 ?Construct@Class_10E7C3E0@@QAEPAV1@XZ
Class_10E7C3E0* Class_10E7C3E0::Construct()
{
    Unknown00 = DAT_10e7c3e0;
    return this;
}

// FUNCTION: 0x10B36380 ?FUN_10b36380@@YAHXZ
int FUN_10b36380()
{
    return 0x99;
}

// FUNCTION: 0x10B363A0 ?FUN_10b363a0@@YAHXZ
int FUN_10b363a0()
{
    return 0x94;
}

// FUNCTION: 0x10B363E0 ?FUN_10b363e0@@YAHXZ
int FUN_10b363e0()
{
    return 0x95;
}

// FUNCTION: 0x10B36410 ?Construct@Class_10E7C404@@QAEPAV1@XZ
Class_10E7C404* Class_10E7C404::Construct()
{
    Unknown00 = DAT_10e7c404;
    return this;
}

// FUNCTION: 0x10B36420 ?FUN_10b36420@@YAHXZ
int FUN_10b36420()
{
    return 0x96;
}

// FUNCTION: 0x10B36440 ?FUN_10b36440@@YAHXZ
int FUN_10b36440()
{
    return 0x98;
}

// FUNCTION: 0x10B36480 ?FUN_10b36480@@YAHXZ
int FUN_10b36480()
{
    return 0x9a;
}
