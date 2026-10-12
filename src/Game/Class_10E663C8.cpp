// Game/Class_10E663C8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_10E663C8.h"

class Class_10E663C8;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10E663C8* A);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A30F20 ??1Class_10E663C8@@UAE@XZ
Class_10E663C8::~Class_10E663C8()
{
    DAT_10f46da0->Virtual2(this);
}
