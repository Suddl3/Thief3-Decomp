// Game/Class_10E66320.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10E66320.h"
#include "Game/Class_10A905A0.h"

// FUNCTION: 0x10A2F4C0 ??0Class_10E66320@@QAE@XZ
Class_10E66320::Class_10E66320()
{
    m_HasName = 0;
}

// FUNCTION: 0x10A2F510 ?GetName@Class_10E66320@@UAEPAVFString@@XZ
FString* Class_10E66320::GetName()
{
    if (m_HasName)
        return &m_Name;
    return 0;
}

// FUNCTION: 0x10A2FB80 ??_GClass_10E66320@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A2F4C0's definition in this unit.
