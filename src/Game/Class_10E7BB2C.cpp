// Game/Class_10E7BB2C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1090A780.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10A50750.h"
#include "Game/Class_10A52110.h"
#include "Game/Class_10A52460.h"
#include "Game/Class_10A53BD0.h"
#include "Game/Class_10A54CC0.h"
#include "Game/Class_10A55080.h"
#include "Game/cActorManager.h"
#include "Game/Class_10E6798C.h"
#include "Game/Class_10E679BC.h"
#include "Game/Class_10E67DF0.h"
#include "Game/Class_10E67FB8.h"
#include "Game/Class_10E7BB2C.h"
#include "Game/InnerClass_10A4EB40.h"
#include "Game/InnerClass_10A4EB50.h"
#include "Game/cString.h"
#include "Game/Class_10A4EB40.h"
#include "Game/Class_10A4EB50.h"
#include "Game/Class_10B26930.h"
#include "Game/Class_10B27FD0.h"
#include "Game/Class_10B32D60.h"
#include "Game/Class_10E7AD44.h"
#include "Game/Class_10E7B89C.h"
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

extern void* DAT_10e7bb2c[];

extern void* DAT_10e7b968[];

// FUNCTION: 0x10A53250 ?FUN_10a53250@Class_10E7BB2C@@QAEXXZ
void Class_10E7BB2C::FUN_10a53250() {
    Unknown20 = 1;
}

// FUNCTION: 0x10A53260 ?FUN_10a53260@Class_10E7BB2C@@UAEMXZ
float Class_10E7BB2C::FUN_10a53260()
{
    float Result = Unknown24;
    if (!Unknown20)
        Result -= Unknown28;
    return Result;
}

// FUNCTION: 0x10B30000 ?Init@Class_10E7BB2C@@QAEPAV1@XZ
Class_10E7BB2C* Class_10E7BB2C::Init()
{
    Unknown04 = 1.0f;
    Unknown08 = 0;
    *(void**)this = DAT_10e7bb2c;
    Unknown0C = DAT_10e7b968;
    Unknown2C = 32767.0f;
    return this;
}
