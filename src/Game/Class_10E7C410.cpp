// Game/Class_10E7C410.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B15960.h"
#include "Game/Class_10E7C410.h"
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
#include "Game/Class_10E7C41C.h"

class WindowManager;

extern WindowManager* GWindowManager;

void* GetWindowManager();

extern void* DAT_10e7c410[];

// FUNCTION: 0x10B36430 ?Construct@Class_10E7C410@@QAEPAV1@XZ
Class_10E7C410* Class_10E7C410::Construct()
{
    *(void**)this = DAT_10e7c410;
    return this;
}

// FUNCTION: 0x10B36450 ?FUN_10b36450@Class_10E7C410@@UAEHHHH@Z
int Class_10E7C410::FUN_10b36450(int A, int B, int C)
{
    if (GWindowManager)
        ((Class_10B15960*)GetWindowManager())->OpenMainMenuWindow(0);
    return 1;
}
