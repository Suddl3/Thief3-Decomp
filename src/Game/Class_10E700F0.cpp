// Game/Class_10E700F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cActorManager.h"
#include "Game/Class_10E70060.h"
#include "Game/Class_10E700F0.h"

class Class_10E700F0;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10E700F0* Obj);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10ACD640 ??1Class_10E700F0@@UAE@XZ
Class_10E700F0::~Class_10E700F0()
{
    DAT_10f46da0->Virtual2(this);
}

// FUNCTION: 0x10ACD6C0 ??_GClass_10E700F0@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10ACD640's definition in this unit.
