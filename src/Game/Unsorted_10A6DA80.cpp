// Game/Unsorted_10A6DA80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_1098E330.h"
#include "Game/cActorManager.h"
#include "Game/Class_10E6B978.h"
#include "Game/Class_10E6B9F8.h"
#include "Game/Class_10E6BA00.h"
#include "Game/Class_10E6BC8C.h"

class Class_10E6B978;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6B978* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A6DC50 ?HandleEvent@Class_10E6B978@@UAEXHHHH@Z
void Class_10E6B978::HandleEvent(int Msg, int A, int B, int C)
{
    switch (Msg)
    {
    case 0x26:
        FUN_10a6db10(A, B, C);
        break;
    case 3:
        DAT_10f46da0->Virtual1(this, 0x26, A, -1);
        break;
    }
}

// FUNCTION: 0x10A6E6B0 ?HandleEvent@Class_10E6BA00@@UAEXHHHH@Z
void Class_10E6BA00::HandleEvent(int Type, int A, int B, int C)
{
    if (Type != 0x26)
        cActorManager::FUN_10a4c470(Type, A, B, C);
    else
        Virtual15(A, B, C);
}
