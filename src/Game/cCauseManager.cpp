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

// FUNCTION: 0x10A690D0 ??0cCauseManager@@QAE@XZ
cCauseManager::cCauseManager()
{
    DAT_10f46da0->Virtual1(this, 0x26, -1, -1);
}
