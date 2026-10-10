// Game/Unsorted_10B298D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B27FE0.h"

class Class_10E6AEA0
{
public:
    virtual ~Class_10E6AEA0();
};

class Class_10E7AEB8 : public Class_10E6AEA0
{
public:
    ~Class_10E7AEB8();

    char Unknown04[0x174];
    bool Unknown178;
    Class_10B27FE0* Unknown17C;
};

// FUNCTION: 0x10B299B0 ??1Class_10E7AEB8@@UAE@XZ
Class_10E7AEB8::~Class_10E7AEB8()
{
    if (Unknown17C)
    {
        delete Unknown17C;
        Unknown17C = 0;
    }
}

// FUNCTION: 0x10B29A20 ??_GClass_10E7AEB8@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B299B0's definition in this unit.
