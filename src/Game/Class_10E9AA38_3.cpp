// Game/Class_10E9AA38_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/MC_PlayAnimation.h"
#include "Game/Struct_10FF66B0.h"

extern "C" int __cdecl sprintf(char* Out, const char* Format, ...);

extern Struct_10FF66B0 DAT_10ff66b0[];

extern const char DAT_10e9aa64[];

// FUNCTION: 0x10C2E690 ?GetDescription@MC_PlayAnimation@@UAE?AVcString@@XZ
cString MC_PlayAnimation::GetDescription()
{
    char Buffer[0x34];
    sprintf(Buffer, DAT_10e9aa64, DAT_10ff66b0[m_AnimIndex].Unknown00);
    return cString(Buffer);
}
