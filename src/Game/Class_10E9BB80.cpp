// Game/Class_10E9BB80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C3EA90.h"
#include "Game/Class_10E9BB80.h"
#include "Game/Class_10C49200.h"
#include "Game/Class_10C49230.h"
#include "Game/Class_10C4A030_Member10.h"
#include "Game/Class_10C4A150.h"
#include "Game/Class_10E9BB60.h"
#include "Game/Class_10E9BB8C.h"

// FUNCTION: 0x10C3E9F0 ?FUN_10c3e9f0@Class_10E9BB80@@UAEXHPAH0@Z
void Class_10E9BB80::FUN_10c3e9f0(int p1, int* p2, int* p3)
{
    *p2 = p1;
    *p3 = 4;
}

// FUNCTION: 0x10C483E0 ?CompareUnsigned@Class_10E9BB80@@UAEHPAI0@Z
int Class_10E9BB80::CompareUnsigned(unsigned int* A, unsigned int* B)
{
    unsigned int X = *A;
    unsigned int Y = *B;
    if (X == Y)
        return 0;
    return X > Y ? 1 : -1;
}
