// Game/Class_10E6F474_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cIntArray.h"

class Class_10E6F474;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10E6F474* Obj);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E6F474
{
public:
    virtual ~Class_10E6F474();

    cIntArray m_EntryCount;
    cIntArray m_MembraneMaterials;
};

// FUNCTION: 0x10ABB600 ??1Class_10E6F474@@UAE@XZ
Class_10E6F474::~Class_10E6F474()
{
    DAT_10f46da0->Virtual2(this);
}
