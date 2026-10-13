// Game/cWaterManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AB90F0.h"
#include "Game/cActorManager.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/cWaterManager.h"
#include "Game/Class_10939570.h"

extern const char DAT_10e6f2fc[];

extern const char DAT_10e6f2f0[];

extern const char* DAT_10f3a3d0;

extern const char* DAT_10f3a3d4;

void* FUN_10a4bd70(int A);

class Class_10953590;

extern Class_10939570* DAT_10f323fc;

class cWaterManager;

// Copied from Game/Class_10F46DA0.h with slot 1 taking this object and three ints.
class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(cWaterManager* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10AB85A0 ?Init@cWaterManager@@QAEXXZ
void cWaterManager::Init()
{
    {
        cString Splash(DAT_10e6f2fc);
        m_Splash = (int)FUN_10a4bd70((int)&Splash);
    }
    {
        cString Ripple(DAT_10e6f2f0);
        m_Ripple = (int)FUN_10a4bd70((int)&Ripple);
    }
    Unknown20 = DAT_10f323fc->GetCategoryIndex(&DAT_10f3a3d0);
    Unknown24 = DAT_10f323fc->GetCategoryIndex(&DAT_10f3a3d4);
    Unknown18 = -1;
    Unknown1C = -1;
    Unknown28 = 0;
    DAT_10f46da0->Virtual1(this, 0x28, -1, -1);
    DAT_10f46da0->Virtual1(this, 0x5a, -1, -1);
}
