// Game/Unsorted_10C09090.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1090A780.h"
#include "Game/Class_10C13100.h"
#include "Game/Class_10C13130.h"
#include "Game/Class_10C15D50.h"
#include "Game/Class_10C160D0.h"
#include "Game/Class_10C16220.h"
#include "Game/Class_10C168F0.h"
#include "Game/Class_10E984BC.h"
#include "Game/Class_10E98C80.h"
#include "Game/Class_10E98C84.h"

extern Class_1090A780 DAT_10ff7060;

extern Class_1090A780 DAT_10ff7064;

extern void* DAT_10e98c80[];

extern void* DAT_10e98c84[];

double FUN_10c00480();

// FUNCTION: 0x10C12DA0 ?FUN_10c12da0@Class_10E984BC@@QAE?AVClass_1090A780@@XZ
Class_1090A780 Class_10E984BC::FUN_10c12da0()
{
    return Class_1090A780(DAT_10ff7060);
}

// FUNCTION: 0x10C13100 ?FUN_10c13100@Class_10C13100@@QAE?AVClass_1090A780@@XZ
Class_1090A780 Class_10C13100::FUN_10c13100()
{
    return Class_1090A780(DAT_10ff7064);
}

// FUNCTION: 0x10C13130 ?FUN_10c13130@Class_10C13130@@QAE?AVClass_1090A780@@XZ
Class_1090A780 Class_10C13130::FUN_10c13130()
{
    return Class_1090A780(Unknown0C);
}

// FUNCTION: 0x10C13CC0 ?FUN_10c13cc0@@YAHXZ
int FUN_10c13cc0()
{
    return 0x27;
}

// FUNCTION: 0x10C15BB0 ?FUN_10c15bb0@Class_10E98C80@@QAEXXZ
void Class_10E98C80::FUN_10c15bb0()
{
    Field00 = DAT_10e98c80;
}

// FUNCTION: 0x10C15D50 ?FUN_10c15d50@Class_10C15D50@@QAEPAXXZ
void* Class_10C15D50::FUN_10c15d50()
{
    return Field401c;
}

// FUNCTION: 0x10C15DB0 ?FUN_10c15db0@Class_10E98C84@@QAEXXZ
void Class_10E98C84::FUN_10c15db0()
{
    Field00 = (void*)DAT_10e98c84;
}

// FUNCTION: 0x10C16220 ?FUN_10c16220@Class_10C16220@@QAEHH@Z
int Class_10C16220::FUN_10c16220(int Id)
{
    int Value = 0;
    Unknown04.FUN_10c160d0(Id, &Value);
    return Value;
}

// FUNCTION: 0x10C168F0 ?FUN_10c168f0@Class_10C168F0@@QAEXHM@Z
void Class_10C168F0::FUN_10c168f0(int A, float B)
{
    Unknown0AC = A;
    Unknown0B0 = FUN_10c00480() + B;
}
