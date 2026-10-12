// Game/Class_10E97B68.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cIntArray.h"
#include "Game/Class_10E97B68.h"

class Class_10E97B68;

class Class_10E8C35C_Secondary;

struct Struct_10C14320;

class Class_10E5D650;

class Class_10B697A0;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E8C35C_Secondary* A, int B, Struct_10C14320* C, int D);
    virtual void Virtual2(Class_10E97B68* A);
    virtual void Virtual3(Class_10E5D650* Listener, int Code, int A, int B);
    virtual void Virtual4();
    virtual void Virtual5(int A, Class_10B697A0* B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10C07160 ??1Class_10E97B68@@UAE@XZ
Class_10E97B68::~Class_10E97B68()
{
    if (DAT_10f46da0)
        DAT_10f46da0->Virtual2(this);
}
