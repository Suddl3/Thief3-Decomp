// Game/Class_10E9C9A8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E9C990.h"
#include "Game/Class_10E9C9A8.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C5EE80.h"

// FUNCTION: 0x10C5F320 ?IsEqual@Class_10E9C9A8@@UAE_NPAV1@@Z
bool Class_10E9C9A8::IsEqual(Class_10E9C9A8* Other)
{
    if (Other->Virtual3() == 1)
        return Other->Unknown04 == Unknown04;
    return false;
}

// FUNCTION: 0x10C5F350 ??0Class_10E9C9A8@@QAE@XZ
Class_10E9C9A8::Class_10E9C9A8()
{
    Unknown04 = 0;
}

// FUNCTION: 0x10C5F3C0 ??_GClass_10E9C9A8@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10C5F350's definition in this unit.
