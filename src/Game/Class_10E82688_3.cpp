// Game/Class_10E82688_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E67FD0.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class Class_109081E0
{
public:
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

class Class_10E82688 : public Class_10E67FD0
{
public:
    virtual ~Class_10E82688();

    char Unknown150[0x8];
    Class_109081E0 Unknown158;
};

// FUNCTION: 0x10B5A500 ??1Class_10E82688@@UAE@XZ
Class_10E82688::~Class_10E82688()
{
}

// FUNCTION: 0x10B5A6D0 ??_GClass_10E82688@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B5A500's definition in this unit.
