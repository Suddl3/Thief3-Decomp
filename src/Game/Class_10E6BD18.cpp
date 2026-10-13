// Game/Class_10E6BD18.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E6BCD0.h"
#include "Game/Class_10E6BD18.h"
#include "Core/Core.h"
#include "Game/cActorManager.h"
#include "Game/cCopyList.h"
#include "Game/Class_10E6BD64.h"
#include "Game/ULevel.h"

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6BD18* Obj, int A, int B, int C);
};

extern Class_10F46DA0* DAT_10f46da0;

extern void* DAT_10e6bd18[];

// FUNCTION: 0x10A79050 ??0Class_10E6BD18@@QAE@XZ
Class_10E6BD18::Class_10E6BD18()
{
    *(void***)this = DAT_10e6bd18;
    DAT_10f46da0->Virtual1(this, 0x27, -1, -1);
}

// FUNCTION: 0x10A790B0 ?HandleEvent@Class_10E6BD18@@QAEXHHHH@Z
void Class_10E6BD18::HandleEvent(int A, int B, int C, int D)
{
    if (A != 0x27)
    {
        cActorManager::FUN_10a4c470(A, B, C, D);
        return;
    }
    Virtual16(B, C, D);
}
