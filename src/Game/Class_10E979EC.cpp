// Game/Class_10E979EC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"
#include "Game/cIntArray.h"
#include "Game/Class_10E979EC.h"

struct Struct_10C08690;

class Class_10B9D450;

void FUN_10b9d450(Class_10B9D450* Obj);

class Class_10E979EC;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10E979EC* Obj);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10BF90A0 ??1Class_10E979EC@@UAE@XZ
Class_10E979EC::~Class_10E979EC()
{
    FUN_10b9d450((Class_10B9D450*)&Unknown04);
    DAT_10f46da0->Virtual2(this);
}
