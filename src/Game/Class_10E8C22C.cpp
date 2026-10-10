// Game/Class_10E8C22C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5B578.h"
#include "Game/Class_10EB766C.h"
#include "Game/Class_10F46DA0.h"

class Class_10E6DC88 : public Class_10EB766C, public Class_10E5B578
{
public:
    virtual ~Class_10E6DC88();
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E8C22C : public Class_10E6DC88
{
public:
    virtual ~Class_10E8C22C();
    virtual int Virtual0(int A, int B, int C, int* D);
};

// FUNCTION: 0x10BA3530 ??_GClass_10E8C22C@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10C13FA0's definition in this unit.

// FUNCTION: 0x10C13FA0 ??1Class_10E8C22C@@UAE@XZ
Class_10E8C22C::~Class_10E8C22C()
{
    DAT_10f46da0->Virtual2(this);
}
