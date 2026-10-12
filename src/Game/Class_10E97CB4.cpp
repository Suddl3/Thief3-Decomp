// Game/cContextVolumeList.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/cContextVolumeList.h"

class cContextVolumeList;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(cContextVolumeList* Obj, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10C0E4A0 ??0cContextVolumeList@@QAE@XZ
cContextVolumeList::cContextVolumeList()
{
    DAT_10f46da0->Virtual1(this, 0x5a, -1, -1);
}
