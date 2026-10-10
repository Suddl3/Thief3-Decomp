// Game/Class_10E6FF54.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A4C5F0.h"
#include "Game/Class_10E6FF54.h"

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10E6FF54* Obj);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10ACB0E0 ??1Class_10E6FF54@@QAE@XZ
Class_10E6FF54::~Class_10E6FF54()
{
    DAT_10f46da0->Virtual2(this);
}
