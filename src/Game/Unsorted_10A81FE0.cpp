// Game/Unsorted_10A81FE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C00A60.h"
#include "Game/Struct_10A82E20.h"
#include "Game/cConversation.h"

class Class_10E6C104
{
public:
    Class_10E6C104();

    virtual ~Class_10E6C104();

    char Unknown04[4];
};

class Class_10E6C290 : public Class_10E6C104
{
public:
    Class_10E6C290();

    virtual ~Class_10E6C290();

    Struct_10A82E20 Unknown08;
    int Unknown14;
    int Unknown18;
    Struct_10A82E20 Unknown1C;
};

extern void* DAT_10e6c364[];

class Class_10E6C364 {
public:
    Class_10E6C364();

    void** Unknown00;
    char Unknown04[4];
    int Unknown08;
    int Unknown0c;
    int Unknown10;
};

// FUNCTION: 0x10A823C0 ?AddConEvent@cConversation@@UAEXH@Z
void cConversation::AddConEvent(int Value)
{
    Class_10C00A60* Array = &m_ConEvents;
    int Index = Array->Unknown00;
    Array->FUN_10c00a60(Index + 1);
    Array->Unknown08[Index] = Value;
}

// FUNCTION: 0x10A82E20 ??0Class_10E6C290@@QAE@XZ
Class_10E6C290::Class_10E6C290() : Unknown14(0), Unknown18(-1)
{
}

// FUNCTION: 0x10A82E50 ??_GClass_10E6C290@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A82E20's definition in this unit.

// FUNCTION: 0x10A84800 ??0Class_10E6C364@@QAE@XZ
Class_10E6C364::Class_10E6C364()
{
    Unknown00 = DAT_10e6c364;
    Unknown08 = 0;
    Unknown0c = 0;
    Unknown10 = 0;
}
