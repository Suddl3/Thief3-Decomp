// Game/Class_10E6F3EC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cCitySectionManager.h"
#include "Game/Class_10ABDC10.h"
#include "Game/Class_10E6F3EC.h"
#include "Game/Class_10F3A3D8.h"
#include "T3Game/T3GameClasses.h"
#include <math.h>

class AInfo;

class Class_10FF667C
{
public:
    char Pad00[0xB0];
    bool Unknown0B0;
};

class Class_10AB8470
{
public:
    char Pad00[0x8];
    int Unknown08;
};

cCitySectionManager* GetCitySectionManager();

UClass* GetStaticClassADifficultyInfo();

extern bool DAT_10f45c0c;

extern bool DAT_10f45c0d;

extern bool DAT_10f45c0e;

extern Class_10F3A3D8* DAT_10f3a3d8;

extern Class_10FF667C* DAT_10ff667c;

class Class_10E6F3EC;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10E6F3EC* Obj);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10AB72D0 ?FUN_10ab72d0@Class_10E6F3EC@@QAEXXZ
void Class_10E6F3EC::FUN_10ab72d0()
{
    DAT_10f46da0->Virtual2(this);
}

// FUNCTION: 0x10AB8470 ?FUN_10ab8470@Class_10E6F3EC@@UAEXHPAVUObject@@PAVClass_10AB8470@@H@Z
void Class_10E6F3EC::FUN_10ab8470(int Key, UObject* Obj, Class_10AB8470* Arg, int Unused)
{
    switch (Key)
    {
    case 0x25:
        if (!DAT_10f45c0d && !DAT_10f45c0c && !DAT_10f45c0e)
        {
            if (Obj->IsA(GetStaticClassADifficultyInfo()))
            {
                ADifficultyInfo* Info = Cast<ADifficultyInfo>(Obj);
                if (Info)
                {
                    Info->CurrentDifficulty = Unknown08;
                    Unknown04 = Info;
                    FUN_10ab8050(false);
                }
            }
        }
        break;
    case 0x5a:
        if (DAT_10f45c0d && !DAT_10f45c0c && !DAT_10f45c0e && DAT_10f3a3d8 && DAT_10f3a3d8->Unknown150)
        {
            if (!GetCitySectionManager()->FUN_10abf100())
            {
                DAT_10f3a3d8->Unknown150->FUN_10abed90();
                Unknown04 = DAT_10f3a3d8->Unknown150->Unknown10;
                FUN_10ab7710();
            }
        }
        if (Arg && Arg->Unknown08 == 0 && !DAT_10f45c0c)
        {
            if (!GetCitySectionManager()->FUN_10abf100())
            {
                if (DAT_10ff667c->Unknown0B0 == 0)
                    FUN_10ab7530();
                LoadDifficultyMultipliers();
                return;
            }
        }
        break;
    }
}
