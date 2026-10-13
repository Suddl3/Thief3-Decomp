// Game/Class_10E97CC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Struct_10C0EE30.h"
#include "Game/cIntArray.h"
#include "Game/Class_10E97CC0.h"
#include "Game/Class_10C0EE90.h"
#include "Game/Class_10E98530.h"
#include "Game/Class_10E8C4A4.h"
#include "Game/cContextVolumeList.h"

class Class_10E97CC0;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E97CC0* Obj, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class cContextVolumeList;

// FUNCTION: 0x10C0EA20 ??0Class_10E97CC0@@QAE@XZ
Class_10E97CC0::Class_10E97CC0()
{
    Unknown10 = 0;
    DAT_10f46da0->Virtual1(this, 0x5a, -1, -1);
}

// FUNCTION: 0x10C0EE30 ?HandleMessage@Class_10E97CC0@@UAEXHHPAUStruct_10C0EE30@@H@Z
void Class_10E97CC0::HandleMessage(int A, int B, Struct_10C0EE30* C, int D)
{
    if (A == 0x5A && C && C->Unknown08 == 0)
        FUN_10c0eb00();
}
