// Game/cCauseManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cActorManager.h"
#include "Game/cCauseManager.h"

class cCauseManager;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(cCauseManager* Obj, int A, int B, int C);
};

extern Class_10F46DA0* DAT_10f46da0;

class Object_10A69180
{
public:
    char Unknown00[0x24];
    float Unknown24;
    int Unknown28;
};

// FUNCTION: 0x10A690D0 ??0cCauseManager@@QAE@XZ
cCauseManager::cCauseManager()
{
    DAT_10f46da0->Virtual1(this, 0x26, -1, -1);
}

// FUNCTION: 0x10A69180 ?TickCause@cCauseManager@@UAEHHPAVObject_10A69180@@M@Z
int cCauseManager::TickCause(int A, Object_10A69180* B, float C)
{
    if (B)
    {
        B->Unknown24 -= C;
        if (B->Unknown24 <= 0.0f || B->Unknown28 == 0)
            return 1;
        return 0;
    }
    return 1;
}
