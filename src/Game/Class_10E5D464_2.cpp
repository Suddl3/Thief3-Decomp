// Game/Class_10E5D464_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10E5D464.h"

class Class_10E5D464;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10E5D464* Obj);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A12060 ??1Class_10E5D464@@QAE@XZ
Class_10E5D464::~Class_10E5D464()
{
    if (DAT_10f46da0)
        DAT_10f46da0->Virtual2(this);
}
