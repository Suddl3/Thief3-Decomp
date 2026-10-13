// Game/Class_10E6CE1C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A174E0.h"
#include "Game/Class_10978090.h"
#include "Game/Class_10A93D00.h"
#include "Game/Class_10E6CE1C.h"

Class_10A174E0* GetStats();

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
