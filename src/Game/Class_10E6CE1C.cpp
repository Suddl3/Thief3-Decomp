// Game/Class_10E6CE1C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A174E0.h"
#include "Game/Class_10978090.h"
#include "Game/Class_10A93D00.h"
#include "Game/Class_10E6CE1C.h"
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
#include "Game/Class_10E6CCD8.h"
#include "Game/Class_10E6CD40.h"
#include "Game/Class_10E6CDC4.h"
#include "Game/Class_10E6CDD0.h"
#include "Game/Class_10E6CDDC.h"
#include "Game/Class_10E6CDE8.h"
#include "Game/Class_10E6CDF4.h"
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

Class_10A174E0* GetStats();

extern void* DAT_10e6ce1c[];

// FUNCTION: 0x10A94AB0 ?FUN_10a94ab0@Class_10E6CE1C@@UAEHHHPAVClass_10A93D00@@@Z
int Class_10E6CE1C::FUN_10a94ab0(int A, int B, Class_10A93D00* C)
{
    Class_10978090* First = (Class_10978090*)C->Virtual4(0);
    Class_10978090* Second = (Class_10978090*)C->Virtual4(1);
    Class_10A174E0* Manager = GetStats();
    int Id = (int)First->Unknown04;
    Manager->Virtual1(Id, (int)Second->FUN_10978090());
    return 1;
}

// FUNCTION: 0x10A95040 ?Construct@Class_10E6CE1C@@QAEPAV1@XZ
Class_10E6CE1C* Class_10E6CE1C::Construct()
{
    *(void**)this = DAT_10e6ce1c;
    return this;
}
