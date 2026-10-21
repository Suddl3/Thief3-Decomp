// Game/WindowManager_13.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

extern float DAT_10e49684;

class WindowManager
{
public:
    FVector FUN_109e43d0(const FVector* V);

    char Unknown00[0xCC];
    float AssumedUIScreenWidth;
    float AssumedUIScreenHeight;
    char UnknownD4[0x10C];
    float Unknown1E0;
};

// FUNCTION: 0x109E43D0 ?FUN_109e43d0@WindowManager@@QAE?AVFVector@@PBV2@@Z
FVector WindowManager::FUN_109e43d0(const FVector* V)
{
    FVector Result;
    Result.Z = 0.0f;
    Result.X = (DAT_10e49684 / Unknown1E0) * V->X * 2.0f;
    Result.Y = (AssumedUIScreenWidth / AssumedUIScreenHeight) * V->Z * (DAT_10e49684 / Unknown1E0) * 2.0f;
    return Result;
}
