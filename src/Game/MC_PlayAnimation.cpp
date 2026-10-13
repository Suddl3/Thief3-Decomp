// Game/MC_PlayAnimation.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/MC_PlayAnimation.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/MoveCommand.h"
#include "Game/cString.h"
#include "Game/Struct_10FF66B0.h"

extern float DAT_10eafbdc;

double GetTimeSeconds();

extern "C" int __cdecl sprintf(char* Out, const char* Format, ...);

extern Struct_10FF66B0 DAT_10ff66b0[];

extern const char DAT_10e9aa64[];

// FUNCTION: 0x10C2E500 ?IsFinished@MC_PlayAnimation@@UAE_NXZ
bool MC_PlayAnimation::IsFinished()
{
    if (m_Duration != DAT_10eafbdc)
    {
        double EndTime = m_Duration + m_StartTime;
        if (GetTimeSeconds() > EndTime)
            return true;
    }
    return m_Failed;
}

// FUNCTION: 0x10C2E540 ??1MC_PlayAnimation@@UAE@XZ
MC_PlayAnimation::~MC_PlayAnimation()
{
}

// FUNCTION: 0x10C2E670 ??_GMC_PlayAnimation@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10C2E540's definition in this unit.

// FUNCTION: 0x10C2E690 ?GetDescription@MC_PlayAnimation@@UAE?AVcString@@XZ
cString MC_PlayAnimation::GetDescription()
{
    char Buffer[0x34];
    sprintf(Buffer, DAT_10e9aa64, DAT_10ff66b0[m_AnimIndex].Unknown00);
    return cString(Buffer);
}
