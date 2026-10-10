// Game/Class_10E7C268.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

class Class_10E7C268 : public Class_10E6DC88
{
public:
    virtual ~Class_10E7C268();
    virtual int Virtual0(int A, int B, int C, int* D);

    int Unknown10;
};

// FUNCTION: 0x10B350C0 ??1Class_10E7C268@@UAE@XZ
Class_10E7C268::~Class_10E7C268()
{
    DAT_10f46da0->Virtual2(this);
}

// FUNCTION: 0x10B35A00 ??_GClass_10E7C268@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B350C0's definition in this unit.
