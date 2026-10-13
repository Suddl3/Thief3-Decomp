// Game/Class_10E6CCA4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A93D00.h"
#include "Game/Class_10D52BD0.h"
#include "Game/Class_10E6CCA4.h"
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
#include "Game/Class_10E6CCB0.h"
#include "Game/Class_10E6CCD8.h"
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

class Class_10A174E0
{
public:
    virtual int Virtual0(int A);
};

Class_10A174E0* GetStats();

Class_10D52BD0* __stdcall FUN_10d52dd0(int A, int B);

struct Struct_10A93D60
{
    int Unknown00;
    int Unknown04;
};

extern void* DAT_10e6cca4[];

// FUNCTION: 0x10A93D40 ?Construct@Class_10E6CCA4@@QAEPAV1@XZ
Class_10E6CCA4* Class_10E6CCA4::Construct()
{
    *(void***)this = DAT_10e6cca4;
    return this;
}

// FUNCTION: 0x10A93D60 ?FUN_10a93d60@Class_10E6CCA4@@UAEHHHPAVClass_10A93D00@@@Z
int Class_10E6CCA4::FUN_10a93d60(int A, int B, Class_10A93D00* C)
{
    int First = C->Virtual5(0);
    Struct_10A93D60* Second = C->Virtual4(1);
    Class_10A174E0* Manager = GetStats();
    int Id = Second->Unknown04;
    FUN_10d52dd0(First, Manager->Virtual0(Id))->FUN_10d52bd0();
    return 1;
}
