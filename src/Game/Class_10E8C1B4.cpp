// Game/Class_10E8C1B4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5B578.h"
#include "Game/Class_10E6DC88_Primary.h"
#include "Game/Class_10F46DA0.h"

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E6DC88 : public Class_10E6DC88_Primary, public Class_10E5B578
{
public:
    ~Class_10E6DC88();
};

class Class_10E8C1B4 : public Class_10E6DC88
{
public:
    ~Class_10E8C1B4();

    virtual void Virtual0();
};

// FUNCTION: 0x10C13DF0 ??1Class_10E8C1B4@@QAE@XZ
Class_10E8C1B4::~Class_10E8C1B4()
{
    DAT_10f46da0->Virtual2(this);
}
