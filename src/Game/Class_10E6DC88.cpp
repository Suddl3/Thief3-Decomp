// Game/Class_10E6DC88.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5B578.h"
#include "Game/Class_10EB766C.h"
#include "Game/Class_10F46DA0.h"

class Class_10E6C874 : public Class_10EB766C
{
};

class Class_10E6DC88 : public Class_10E6C874, public Class_10E5B578
{
public:
    virtual ~Class_10E6DC88();
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10AAF500 ??1Class_10E6DC88@@UAE@XZ
Class_10E6DC88::~Class_10E6DC88()
{
    if (DAT_10f46da0)
        DAT_10f46da0->Virtual2(this);
}

// FUNCTION: 0x10AAF5E0 ??_GClass_10E6DC88@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10AAF500's definition in this unit.
