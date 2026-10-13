// Game/cConGoalCompleteEvent_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10A810F0.h"

extern const char DAT_10e6c100[];

class cConEvent : public Class_10A810F0
{
public:
    cConEvent();

    virtual ~cConEvent();
};

class Class_10AB37D0
{
public:
    Class_10AB37D0();
    ~Class_10AB37D0();
};

class cConGoalCompleteEvent : public cConEvent
{
public:
    cConGoalCompleteEvent();

    int Unknown08;
    cString Unknown0C;
    Class_10AB37D0 Unknown10;
};

// FUNCTION: 0x10AAB0D0 ??0cConGoalCompleteEvent@@QAE@XZ
cConGoalCompleteEvent::cConGoalCompleteEvent()
{
    Unknown08 = 0;
    Unknown0C.FUN_1090a590(DAT_10e6c100);
}
