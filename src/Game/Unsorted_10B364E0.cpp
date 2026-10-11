// Game/Unsorted_10B364E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B1B8A0.h"
#include "Game/Class_10B1D660.h"
#include "Game/Class_10B374E0.h"
#include "Game/Class_10E79578.h"
#include "Game/Class_10E7957C.h"
#include "Game/Class_10E79580.h"
#include "Game/Class_10E79584.h"
#include "Game/Class_10E7C380.h"
#include "Game/Class_10E7C38C.h"
#include "Game/Class_10E7C398.h"
#include "Game/Class_10E7C3A4.h"
#include "Game/Struct_10AA3520.h"

struct Struct_10AA3520_Member;

extern Struct_10AA3520* DAT_10f35dec;

Class_10B1B8A0* FUN_10b1b600();

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10B364E0 ?FUN_10b364e0@Class_10E79580@@UAEPAVClass_10E7C380@@XZ
Class_10E7C380* Class_10E79580::FUN_10b364e0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E7C380* Result = 0;
    void* Memory = operator new(sizeof(Class_10E7C380), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E7C380*>(Memory)->FUN_10b36240();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10B36530 ?FUN_10b36530@Class_10E79578@@UAEPAVClass_10E7C38C@@XZ
Class_10E7C38C* Class_10E79578::FUN_10b36530()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E7C38C* Result = 0;
    void* Memory = operator new(sizeof(Class_10E7C38C), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E7C38C*>(Memory)->FUN_10b36260();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10B36580 ?FUN_10b36580@Class_10E7957C@@UAEPAVClass_10E7C398@@XZ
Class_10E7C398* Class_10E7957C::FUN_10b36580()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E7C398* Result = 0;
    void* Memory = operator new(sizeof(Class_10E7C398), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E7C398*>(Memory)->FUN_10b36280();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10B365D0 ?FUN_10b365d0@Class_10E79584@@UAEPAVClass_10E7C3A4@@XZ
Class_10E7C3A4* Class_10E79584::FUN_10b365d0()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E7C3A4* Result = 0;
    void* Memory = operator new(sizeof(Class_10E7C3A4), 0, 0, 0, 0, 0);
    if (Memory)
        Result = static_cast<Class_10E7C3A4*>(Memory)->FUN_10b362d0();
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10B36620 ?FUN_10b36620@Class_10E7C3A4@@UAEHHHH@Z
int Class_10E7C3A4::FUN_10b36620(int p1, int p2, int p3)
{
    DAT_10f35dec->Unknown0C->FUN_10b1d660();
    return 1;
}

// FUNCTION: 0x10B374E0 ?FUN_10b374e0@Class_10B374E0@@QAEXHPAV1@H@Z
void Class_10B374E0::FUN_10b374e0(int A, Class_10B374E0* B, int C)
{
    if (B->Unknown04 == Unknown04)
        FUN_10b1b600()->FUN_10b1b8a0(A);
}
