// Game/Class_10E6CCD8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A93D00.h"
#include "Game/Class_10D52BD0.h"
#include "Game/Class_10E6CCD8.h"
#include "Game/cString.h"
#include "Game/Class_10A905A0.h"
#include "Game/Class_10A8D160.h"
#include "Game/Class_10A8D310.h"
#include "Game/Class_10A8D320.h"
#include "Game/Class_10E6CA40.h"
#include "Game/Class_10E6CBEC.h"
#include "Game/Class_10E6CBF8.h"
#include "Game/Class_10E6CC64.h"
#include "Game/Class_10E6CC70.h"
#include "Game/Class_10E6CC98.h"
#include "Game/Class_10E6CCA4.h"
#include "Game/Class_10E6CCB0.h"
#include "Game/Class_10E6CD40.h"
#include "Game/Class_10E6CDC4.h"
#include "Game/Class_10E6CDD0.h"
#include "Game/Class_10E6CDDC.h"
#include "Game/Class_10E6CDE8.h"
#include "Game/Class_10E6CDF4.h"
#include "Game/Class_10E6CE1C.h"
#include "Game/Class_10E6CE94.h"
#include "Game/Class_10E6CEC4.h"
#include "Game/Class_10E6CED0.h"
#include "Game/Class_10E6CEDC.h"
#include "Game/Class_10E6CEE8.h"
#include "Game/Class_10E6CEF4.h"
#include "Game/Class_10E6CF00.h"
#include "Game/Class_10E6CF0C.h"
#include "Game/Class_10E6CF18.h"
#include "Game/Class_10E6CF24.h"
#include "Game/Class_10E6CF30.h"
#include "Game/Class_10E6CF3C.h"
#include "Game/Class_10E6DC88.h"
#include "Game/FieldClass_A89060.h"
#include "Game/Class_10A90DC0.h"

Class_10D52BD0* __stdcall FUN_10d52dd0(int A, int B);

extern void* DAT_10e6ccd8[];

// FUNCTION: 0x10A93D00 ?FUN_10a93d00@Class_10E6CCD8@@UAEHHHPAVClass_10A93D00@@@Z
int Class_10E6CCD8::FUN_10a93d00(int A, int B, Class_10A93D00* C)
{
    int First = C->Virtual5(0);
    int Second = C->Virtual7(1);
    FUN_10d52dd0(First, Second)->FUN_10d52bd0();
    return 1;
}

// FUNCTION: 0x10A93E30 ?Construct@Class_10E6CCD8@@QAEPAV1@XZ
Class_10E6CCD8* Class_10E6CCD8::Construct()
{
    *(void**)this = DAT_10e6ccd8;
    return this;
}
