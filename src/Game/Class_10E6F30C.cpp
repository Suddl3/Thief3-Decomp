// Game/Class_10E6F30C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AB90F0.h"
#include "Game/cActorManager.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10E6F30C.h"

extern const char DAT_10e6f2fc[];

extern const char DAT_10e6f2f0[];

extern const char* DAT_10f3a3d0;

extern const char* DAT_10f3a3d4;

void* FUN_10a4bd70(int A);

class Class_10953590;

// Copied from Game/Class_10939570.h with FUN_1093aed0 added.
class Class_10939570
{
public:
    char FUN_10939570();
    void FUN_1093bce0(Class_10953590* Param);
    void* FUN_1093bd40(int* A, int B, int C);
    void FUN_1093b5e0();
    int FUN_1093aed0(const char** Name);

    char Pad00[0x1];
};

extern Class_10939570* DAT_10f323fc;

class Class_10E6F30C;

// Copied from Game/Class_10F46DA0.h with slot 1 taking this object and three ints.
class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6F30C* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10AB85A0 ?FUN_10ab85a0@Class_10E6F30C@@QAEXXZ
void Class_10E6F30C::FUN_10ab85a0()
{
    {
        Class_109081E0 Splash(DAT_10e6f2fc);
        Unknown10 = (int)FUN_10a4bd70((int)&Splash);
    }
    {
        Class_109081E0 Ripple(DAT_10e6f2f0);
        Unknown14 = (int)FUN_10a4bd70((int)&Ripple);
    }
    Unknown20 = DAT_10f323fc->FUN_1093aed0(&DAT_10f3a3d0);
    Unknown24 = DAT_10f323fc->FUN_1093aed0(&DAT_10f3a3d4);
    Unknown18 = -1;
    Unknown1C = -1;
    Unknown28 = 0;
    DAT_10f46da0->Virtual1(this, 0x28, -1, -1);
    DAT_10f46da0->Virtual1(this, 0x5a, -1, -1);
}
