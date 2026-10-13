// Game/cTriggerSoundSchemaParam_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E6BF84.h"
#include "Game/Class_1090A780.h"
#include "Game/cString.h"

Class_10905A90_Member* GetAllocator();

extern const char DAT_10e47660[];

class Class_10A036A0;

// The pointee of Class_10A036A0's first field: slot 7 says whether to release, slot 1 releases.
class Class_10A8AEE0_Unknown00
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10A036A0* A);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual bool Virtual7(Class_10A036A0* A);
};

// Copied from include/Game/Class_10A036A0.h with a default constructor and the destructor added.
class Class_10A036A0
{
public:
    Class_10A036A0() : Unknown00(0), Unknown04(-1), Unknown08(-1), Unknown0C(-1) {}
    ~Class_10A036A0()
    {
        if (Unknown00 && Unknown00->Virtual7(this))
            Unknown00->Virtual1(this);
    }

    Class_10A036A0& FUN_10a036a0(const Class_10A036A0& Other);

    Class_10A8AEE0_Unknown00* Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

class cTriggerSoundSchemaParam : public Class_10E6BF84
{
public:
    cTriggerSoundSchemaParam();
    virtual ~cTriggerSoundSchemaParam();

    Class_10A036A0 m_Schema;
    cString Unknown14;
};

// FUNCTION: 0x10A8AEE0 ??0cTriggerSoundSchemaParam@@QAE@XZ
cTriggerSoundSchemaParam::cTriggerSoundSchemaParam()
{
    Class_10A036A0 Local;
    Unknown14.FUN_1090a590(DAT_10e47660);
    m_Schema.FUN_10a036a0(Local);
}

// FUNCTION: 0x10A8AFA0 ??_GcTriggerSoundSchemaParam@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A8AEE0's definition in this unit.
