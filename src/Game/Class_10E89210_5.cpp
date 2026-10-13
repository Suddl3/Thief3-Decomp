// Game/Class_10E89210_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B8C920.h"
#include "Game/Class_10CAF5E0.h"
#include "Game/Object_10B8ACF0.h"

class Class_10D9B090
{
public:
    char Unknown00[4];
    Class_10CAF5E0* Unknown04;
};

Class_10D9B090* FUN_10d9dcb0();

class Class_10E89210
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10b82230(int A);

    char Unknown04[0x74];
    Class_10B8C920* Unknown78;
    char Unknown7C[0x10];
    Object_10B8ACF0* Unknown8C;
    Object_10B8ACF0* Unknown90;
};

// FUNCTION: 0x10B82230 ?FUN_10b82230@Class_10E89210@@UAEXH@Z
void Class_10E89210::FUN_10b82230(int A)
{
    if (Unknown78)
        Unknown78->FUN_10b8c920(A);
    if (Unknown8C)
    {
        Unknown8C->Unknown28 = (Unknown8C->Unknown28 & 0xfffe0000) | A;
        if (Unknown8C->Unknown08)
        {
            Class_10D9B090* Manager = FUN_10d9dcb0();
            Manager->Unknown04->FUN_10caf5e0(Unknown8C, 1);
        }
    }
    if (Unknown90)
    {
        Unknown90->Unknown28 = (Unknown90->Unknown28 & 0xfffe0000) | A;
        if (Unknown90->Unknown08)
        {
            Class_10D9B090* Manager = FUN_10d9dcb0();
            Manager->Unknown04->FUN_10caf5e0(Unknown90, 1);
        }
    }
}
