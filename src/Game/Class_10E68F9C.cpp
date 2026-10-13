// Game/Class_10E68F9C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E68F9C.h"
#include "Game/Struct_10A58450.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E67FD0.h"
#include "Game/cString.h"
#include "Game/Base_10A62CB0.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_10A56170.h"
#include "Game/Class_10A56AA0.h"
#include "Game/Class_10A56AD0.h"
#include "Game/Class_10A56B00.h"
#include "Game/Class_10A56BC0.h"
#include "Game/Class_10A56C30.h"
#include "Game/Class_10A56C40.h"
#include "Game/Class_10A58470.h"
#include "Game/Class_10A58510.h"
#include "Game/Class_10A589A0.h"
#include "Game/Class_10A5B490.h"
#include "Game/Class_10A64CD0.h"
#include "Game/Class_10A64F10.h"
#include "Game/Class_10AF8250.h"
#include "Game/Object_10A626F0.h"
#include "Game/Class_10A56B70.h"
#include "Game/Class_10E6AC50.h"
#include "Game/Class_10E6AC98.h"

extern void* DAT_10e68f9c[];

extern void* DAT_10e68f94[];

// FUNCTION: 0x10A58420 ?Init@Class_10E68F9C@@QAEPAV1@XZ
Class_10E68F9C* Class_10E68F9C::Init()
{
    Unknown04 = 1.0f;
    Unknown08 = 0;
    *(void**)this = DAT_10e68f9c;
    Unknown0C = DAT_10e68f94;
    Unknown4C = 32767.0f;
    return this;
}

// FUNCTION: 0x10A58450 ?FUN_10a58450@Class_10E68F9C@@UAE?AUStruct_10A58450@@XZ
Struct_10A58450 Class_10E68F9C::FUN_10a58450()
{
    return Unknown10;
}

// FUNCTION: 0x10B2BE50 ?FUN_10b2be50@Class_10E68F9C@@UAEMXZ
float Class_10E68F9C::FUN_10b2be50()
{
    float Result = Unknown44;
    if (!Unknown40)
        Result -= Unknown48;
    return Result;
}
