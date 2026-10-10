// Game/Unsorted_10B559E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E81DD4.h"
#include "Game/Struct_10E81DD4_Unknown08.h"
#include "Game/WindowManager.h"

extern WindowManager* GWindowManager;

// FUNCTION: 0x10B561D0 ??1Class_10E81DD4@@UAE@XZ
Class_10E81DD4::~Class_10E81DD4()
{
    if (Unknown04)
        GWindowManager->FUN_109e8ae0(Unknown04);
    for (int i = 0; i < 2; i++)
    {
        if (Unknown08[i].Unknown00)
            GWindowManager->FUN_109e8ae0(Unknown08[i].Unknown00);
    }
}

// FUNCTION: 0x10B56370 ??_GClass_10E81DD4@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B561D0's definition in this unit.
