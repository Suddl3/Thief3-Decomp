// Game/Class_10E7C41C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E7C41C.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_10B26930.h"
#include "Game/Class_10B27FD0.h"
#include "Game/Class_10B32D60.h"
#include "Game/Class_10E7AD44.h"
#include "Game/Class_10E7B89C.h"
#include "Game/cT3ReadBookWindow.h"
#include "Game/Class_10E7C380.h"
#include "Game/Class_10E7C38C.h"
#include "Game/Class_10E7C3B0.h"
#include "Game/Class_10E7C3BC.h"
#include "Game/Class_10E7C3C8.h"
#include "Game/Class_10E7C3D4.h"
#include "Game/Class_10E7C3E0.h"
#include "Game/Class_10E7C404.h"
#include "Game/Class_10E7C410.h"

class WindowManager;

extern WindowManager* GWindowManager;

class Class_10B17510
{
public:
    void FUN_10b17510(void* A);
};

void* GetWindowManager();

class Object_10B36490
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void* Virtual8();
};

extern void* DAT_10e7c41c[];

// FUNCTION: 0x10B36470 ?Construct@Class_10E7C41C@@QAEPAV1@XZ
Class_10E7C41C* Class_10E7C41C::Construct()
{
    *(void**)this = DAT_10e7c41c;
    return this;
}

// FUNCTION: 0x10B36490 ?FUN_10b36490@Class_10E7C41C@@UAEHHPAVObject_10B36490@@H@Z
int Class_10E7C41C::FUN_10b36490(int A, Object_10B36490* B, int C)
{
    if (GWindowManager)
    {
        if (B->Virtual8())
            static_cast<Class_10B17510*>(GetWindowManager())->FUN_10b17510(B->Virtual8());
    }
    return 1;
}
