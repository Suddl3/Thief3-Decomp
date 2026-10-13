// Game/Class_10E7C398.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10B1B8A0.h"
#include "Game/Class_10E7C398.h"
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

class Class_10B362A0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10AAB5C0* Virtual4(int A);
};

Class_10B1B8A0* FUN_10b1b600();

extern void* DAT_10e7c398[];

// FUNCTION: 0x10B36280 ?Construct@Class_10E7C398@@QAEPAV1@XZ
Class_10E7C398* Class_10E7C398::Construct()
{
    *(void**)this = DAT_10e7c398;
    return this;
}

// FUNCTION: 0x10B362A0 ?FUN_10b362a0@Class_10E7C398@@UAEHHHPAVClass_10B362A0@@@Z
int Class_10E7C398::FUN_10b362a0(int A, int B, Class_10B362A0* C)
{
    FUN_10b1b600()->FUN_10b1abd0(C->Virtual4(0)->GetUnknown08());
    return 1;
}
