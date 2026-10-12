// Game/Class_10E97BC8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cIntArray.h"
#include "Game/Class_10E97BC8.h"

struct Struct_10C08690;

struct Struct_10C09520;

void ClearItems(Struct_10C09520* A);

class Class_10E97BC8;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10E97BC8* Obj);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10C09560 ??1Class_10E97BC8@@QAE@XZ
Class_10E97BC8::~Class_10E97BC8()
{
    DAT_10f46da0->Virtual2(this);
    ClearItems(reinterpret_cast<Struct_10C09520*>(&Unknown04));
}
