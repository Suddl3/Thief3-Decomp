// Game/cConChoiceEvent.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"

class cConEvent
{
public:
    cConEvent();

    virtual ~cConEvent();

    char Unknown04[4];
};

class cConChoiceEvent : public cConEvent
{
public:
    cConChoiceEvent();

    virtual ~cConChoiceEvent();

    cIntArray Unknown08;
};

// FUNCTION: 0x10A84000 ??0cConChoiceEvent@@QAE@XZ
cConChoiceEvent::cConChoiceEvent()
{
}

// FUNCTION: 0x10A84020 ??_GcConChoiceEvent@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A84000's definition in this unit.
