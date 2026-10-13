// Game/Class_10E7C178_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B0D530.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1096C8D0.h"
#include "Game/Class_10E6BF84.h"

Class_10905A90_Member* GetAllocator();

extern Class_1096C8D0* DAT_10ff3818;

class Class_10E7C178 : public Class_10E6BF84
{
public:
    virtual ~Class_10E7C178();

    int* Unknown04;
};

// FUNCTION: 0x10B34EB0 ??1Class_10E7C178@@UAE@XZ
Class_10E7C178::~Class_10E7C178()
{
    if (DAT_10ff3818)
    {
        delete DAT_10ff3818;
        DAT_10ff3818 = 0;
    }
    if (Unknown04)
    {
        int* Obj = Unknown04 - 1;
        GetAllocator()->Virtual5(Obj);
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10B34F40 ??_GClass_10E7C178@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B34EB0's definition in this unit.
