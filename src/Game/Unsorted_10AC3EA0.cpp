// Game/Unsorted_10AC3EA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10E666A0.h"

class APlayerPawn;

class AGarrett
{
    DECLARE_CLASS(AGarrett, APlayerPawn, 0x800, T3Player)
};

class Class_10E6F910;

class Class_10AC3EA0
{
public:
    Class_10AC3EA0(Class_10E6F910* Owner, int A);

    char Unknown00[0x94];
};

class Class_10E6F910
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual Class_10E66530* FUN_10ac43f0(int A);
};

// FUNCTION: 0x10AC43F0 ?FUN_10ac43f0@Class_10E6F910@@UAEPAVClass_10E66530@@H@Z
Class_10E66530* Class_10E6F910::FUN_10ac43f0(int A)
{
    if (A && ((UObject*)A)->IsA(AGarrett::StaticClass()))
        return (Class_10E66530*)new Class_10AC3EA0(this, A);
    return ((Class_10E666A0*)this)->Class_10E666A0::FUN_10a37c10(A);
}
