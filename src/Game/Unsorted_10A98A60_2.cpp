// Game/Unsorted_10A98A60_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5B578.h"
#include "Game/Class_10E6DC88_Primary.h"
#include "Game/Class_10E6CFB8.h"
#include "Game/Class_10E6CFF0.h"
#include "Game/Class_10E6D00C.h"
#include "Game/Class_10E6DC88.h"

class Class_10E662C0
{
public:
    virtual ~Class_10E662C0() {}
};

class Class_10E682E0 : public Class_10E662C0
{
public:
    Class_10E682E0(int Value) : Unknown04(Value) {}

    virtual Class_10E682E0* Clone();

    int Unknown04;
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E5B578* Listener, int B, int C, Class_10E682E0* D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A98A60 ?SendEvent@Class_10E6CFB8@@UAEXXZ
void Class_10E6CFB8::SendEvent()
{
    Class_10E682E0 Local(0);
    DAT_10f46da0->Virtual1(this, 0x77, -1, &Local);
}

// FUNCTION: 0x10A98B20 ?SendEvent@Class_10E6CFF0@@UAEXXZ
void Class_10E6CFF0::SendEvent()
{
    Class_10E682E0 Local(2);
    DAT_10f46da0->Virtual1(this, 0x77, -1, &Local);
}

// FUNCTION: 0x10A98B80 ?SendEvent@Class_10E6D00C@@UAEXXZ
void Class_10E6D00C::SendEvent()
{
    Class_10E682E0 Local(3);
    DAT_10f46da0->Virtual1(this, 0x77, -1, &Local);
}
