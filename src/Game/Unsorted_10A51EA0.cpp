// Game/Unsorted_10A51EA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Config.h"
#include "Game/Class_10AF7F80.h"

extern const ANSICHAR DAT_10e67f9c[];

extern const ANSICHAR DAT_10e67f98[];

extern const ANSICHAR DAT_10e67f94[];

// FUNCTION: 0x10A51FC0 ?LoadConfigVector@@YAXAAVFVector@@ABVFString@@PAVClass_10AF7F80@@2@Z
void __cdecl LoadConfigVector(FVector& V, const FString& Base, Class_10AF7F80* File, Class_10AF7F80* Section)
{
    FString KeyX(Base);
    KeyX += DAT_10e67f9c;
    Config::Instance()->GetFloat(Section->operator*(), KeyX.operator*(), &V.X, File->operator*());

    FString KeyY(Base);
    KeyY += DAT_10e67f98;
    Config::Instance()->GetFloat(Section->operator*(), KeyY.operator*(), &V.Y, File->operator*());

    FString KeyZ(Base);
    KeyZ += DAT_10e67f94;
    Config::Instance()->GetFloat(Section->operator*(), KeyZ.operator*(), &V.Z, File->operator*());
}
