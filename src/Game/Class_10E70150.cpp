// Game/Class_10E70150.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cActorManager.h"
#include "Game/Class_10E70060.h"
#include "Game/Class_10E70150.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10E700D4.h"
#include "Game/Class_10E700F0.h"

class Class_1098E330;

class Class_10E70150;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10E70150* Obj);
};

extern Class_10F46DA0* DAT_10f46da0;

extern float DAT_10e499a4;

// FUNCTION: 0x10ACE220 ??1Class_10E70150@@UAE@XZ
Class_10E70150::~Class_10E70150()
{
    DAT_10f46da0->Virtual2(this);
}

// FUNCTION: 0x10ACE280 ?FUN_10ace280@Class_10E70150@@UAEMHHPAVClass_1098E330@@@Z
float Class_10E70150::FUN_10ace280(int A, int B, Class_1098E330* Obj)
{
    if (Obj)
    {
        float Value = 0.0f;
        Obj->GetPropertyValue(0x100588, (int*)&Value);
        return Value;
    }
    return DAT_10e499a4;
}

// FUNCTION: 0x10ACE370 ??0Class_10E70150@@QAE@XZ
Class_10E70150::Class_10E70150()
{
}

// FUNCTION: 0x10ACE390 ??_GClass_10E70150@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10ACE220's definition in this unit.
