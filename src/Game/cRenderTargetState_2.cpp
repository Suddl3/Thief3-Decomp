// Game/cRenderTargetState_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1094D700.h"
#include "Game/Class_1094D9A0.h"
#include "Game/Class_10924B70_Base.h"
#include "Game/cRenderTargetState.h"

class Class_109242E0;

extern Class_109242E0* DAT_10f319a0;

// FUNCTION: 0x10924A00 ??0cRenderTargetState@@QAE@XZ
cRenderTargetState::cRenderTargetState()
{
    DAT_10f319a0 = (Class_109242E0*)this;
    Unknown00 = false;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown14 = 0;
    Unknown10 = 0;
    UnknownA8 = -1;
}
