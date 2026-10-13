// Game/Class_10E7C3C8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E7C3C8.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10AB37C0.h"
#include "Game/Class_10C3D3B0.h"
#include "Game/cString.h"
#include "Game/Class_10B154C0.h"
#include "Game/Class_10B36E40_Arg.h"
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
#include "Game/Class_10E7C3D4.h"
#include "Game/Class_10E7C3E0.h"
#include "Game/Class_10E7C3EC.h"
#include "Game/Class_10E7C404.h"
#include "Game/Class_10E7C410.h"
#include "Game/Class_10E7C41C.h"
#include "Game/Class_10E7C3F8.h"

class WindowManager;

extern WindowManager* GWindowManager;

struct FColor
{
    FColor() {}
    int Unknown00;
};

FColor GetFlavorColor(int A);

void FUN_10a26c10(cString* A, cString* B);

void FUN_10a293b0(cString* A, int B);

void* GetWindowManager();

extern void* DAT_10e7c3c8[];

// FUNCTION: 0x10B36330 ?Construct@Class_10E7C3C8@@QAEPAV1@XZ
Class_10E7C3C8* Class_10E7C3C8::Construct()
{
    *(void**)this = DAT_10e7c3c8;
    return this;
}

// FUNCTION: 0x10B36F40 ?FUN_10b36f40@Class_10E7C3C8@@UAGHHPAVClass_10B36E40_Arg@@@Z
int __stdcall Class_10E7C3C8::FUN_10b36f40(int A, Class_10B36E40_Arg* C)
{
    if (GWindowManager)
    {
        cString Text(*(cString*)C->Virtual4(0)->GetName());
        ((Class_10C3D3B0*)C->Virtual4(1))->Class_10C3D3B0::FUN_10c3d3b0();
        cString Key;
        FUN_10a26c10(&Text, &Key);
        FUN_10a293b0(&Key, 0);
        ((Class_10B154C0*)GetWindowManager())->FUN_10b15e30(&Key, GetFlavorColor(0).Unknown00);
    }
    return 1;
}
