// Game/Unsorted_10AB72E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/cDifficulty.h"

class cDifficulty;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(cDifficulty* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class AInfo;

class ADifficultyInfo
{
    DECLARE_CLASS(ADifficultyInfo, AInfo, 0x0, T3Game)
};

// FUNCTION: 0x10AB72E0 ??$Cast@VADifficultyInfo@@@@YAPAVADifficultyInfo@@PAVUObject@@@Z
template ADifficultyInfo* Cast<ADifficultyInfo>(UObject* Src);

// FUNCTION: 0x10AB7500 ?Init@cDifficulty@@QAEXXZ
void cDifficulty::Init()
{
    DAT_10f46da0->Virtual1(this, 0x25, -1, -1);
    DAT_10f46da0->Virtual1(this, 0x5a, -1, -1);
    LoadDifficulty();
}
