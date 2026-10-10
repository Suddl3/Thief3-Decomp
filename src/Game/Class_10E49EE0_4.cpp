// Game/Unsorted_10934320.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E49EE0_Member.h"
#include "Game/Class_10E49F0C.h"

class Class_10E49EE0 : public Class_10E49F0C
{
public:
    virtual int FUN_109341e0();
    virtual int FUN_109341f0();
    virtual void Virtual3();
    virtual unsigned int FUN_10934260();
    virtual void Virtual6();
    virtual int FUN_10934a20();
    virtual int FUN_109342f0(int A);
    virtual void Virtual9();
    virtual ~Class_10E49EE0();

    Class_10E49EE0_Member* Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
};

// FUNCTION: 0x10934320 ??_GClass_10E49EE0@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10934340's definition in this unit.

// FUNCTION: 0x10934340 ??1Class_10E49EE0@@UAE@XZ
Class_10E49EE0::~Class_10E49EE0()
{
    if (Unknown14)
    {
        Unknown14->Virtual2();
        Unknown14 = 0;
    }
    Unknown18 = 0;
    Unknown1C = 0;
    Unknown20 = 0;
    Unknown24 = 0;
}
