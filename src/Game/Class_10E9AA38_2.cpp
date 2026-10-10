// Game/Unsorted_10C2E540.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E99314.h"

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

class Class_10E9AA38 : public Class_10E99314
{
public:
    virtual bool FUN_10c2e500();
    virtual Class_109081E0 FUN_10c2e690();
    virtual ~Class_10E9AA38();

    char Unknown4C[0x18];
    Class_109081E0 Unknown64;
};

// FUNCTION: 0x10C2E540 ??1Class_10E9AA38@@UAE@XZ
Class_10E9AA38::~Class_10E9AA38()
{
}

// FUNCTION: 0x10C2E670 ??_GClass_10E9AA38@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10C2E540's definition in this unit.
