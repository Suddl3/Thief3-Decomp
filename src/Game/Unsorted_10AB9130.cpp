// Game/Unsorted_10AB9130.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AB90F0.h"
#include "Game/Class_10AB9D40.h"
#include "Game/Class_10AB9FF0.h"
#include "Game/Class_10E5BBE0.h"
#include "Game/cActorManager.h"
#include "Game/Struct_10ABA050.h"
#include "Game/cWaterManager.h"
#include "Game/Class_10E6F3F4.h"

class Class_10AF7F80
{
public:
    const char* FUN_10af7f80();
};

struct Struct_10AB9D40
{
    char Unknown00[0x24];
    Class_10AF7F80 Unknown24;
    char Unknown25[0x1B];
    int Unknown40;
};

extern char DAT_10e6b668[];

int FUN_10af3690(const char* A, const char* B);

class Object_10AB9FF0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

// FUNCTION: 0x10AB9D40 ?HandleFootstep@Class_10AB9D40@@QAEXHPAUStruct_10AB9D40@@H@Z
void Class_10AB9D40::HandleFootstep(int A, Struct_10AB9D40* B, int C)
{
    Class_10AF7F80* Name = B->Unknown40 ? &B->Unknown24 : 0;
    if (FUN_10af3690(Name->FUN_10af7f80(), DAT_10e6b668) == 0)
        FUN_10ab9a60(A, B, C);
}

// FUNCTION: 0x10AB9FF0 ?Assign@Class_10AB9FF0@@QAEPAV1@PAV1@@Z
Class_10AB9FF0* Class_10AB9FF0::Assign(Class_10AB9FF0* Other)
{
    Object_10AB9FF0* Old = m_Object;
    m_Object = Other->m_Object;
    if (m_Object)
        m_Object->Virtual1();
    if (Old)
        Old->Virtual2();
    return this;
}

// FUNCTION: 0x10ABA050 ??0Class_10E6F3F4@@QAE@XZ
Class_10E6F3F4::Class_10E6F3F4()
    : UnknownD8(0), UnknownDC(0), UnknownE0(0), UnknownE4(0),
      UnknownE8(0), UnknownEC(0), UnknownF0(0), UnknownF4(0),
      UnknownF8(0), UnknownFC(0), Unknown100(0), Unknown104(0),
      Unknown108(0), Unknown10C(0), Unknown110(0), Unknown114(0),
      Unknown118(0), Unknown11C(0), Unknown120(0), Unknown124(0),
      Unknown128(0), Unknown12C(0), Unknown130(0), Unknown134(0),
      Unknown138(0), Unknown13C(0), Unknown140(0), Unknown144(0)
{
}

// FUNCTION: 0x10ABB0E0 ??_GClass_10E6F3F4@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10ABA050's definition in this unit.
