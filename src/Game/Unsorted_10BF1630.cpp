// Game/Unsorted_10BF1630.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10FF667C.h"
#include "Game/Class_10B9BDA0_Member.h"
#include "Game/Class_10BF23A0.h"

class Class_10BBDB40;

class Class_10BFB910
{
public:
    void FUN_10bfb910(int Index);
    float FUN_10bfb8c0(int Index);
    void FUN_10bfb8d0(int p1);

    int Unknown00[64];
};

class Class_10C7D570
{
public:
    void* FUN_10c7d570();
    int FUN_10baaf90(int A, int B, float C);
    Class_10BBDB40* FUN_10dbd510(int Id);
    Class_10BBDB40* FUN_10dbd510();  // also called with no argument (the same function, 0x10DBD510)

    char Unknown00[0x64];
    bool Unknown64;
};

class Class_10BF23A0_Unknown04
{
public:
    bool FUN_10bb7db0(int A, int B, int C);

    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

double FUN_10c00480();

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10BF23A0 ?FUN_10bf23a0@Class_10BF23A0@@QAEHXZ
int Class_10BF23A0::FUN_10bf23a0()
{
    if (!Unknown230 && FUN_10bf1550())
    {
        double Limit = FUN_10c00480();
        if (DAT_10ff667c->Unknown28->FUN_10bfb8c0(8) < Limit)
        {
            if (DAT_10ff667c->Unknown14->Virtual6())
            {
                int Result = Unknown04->Unknown08->FUN_10baaf90(1, 0, 768.0f);
                if (Result == 0)
                    return 0;
                Class_10BF23A0_Unknown04* Obj = Unknown04;
                if (!Obj->FUN_10bb7db0(Result, Result + 0x2c, (int)Obj->Unknown08->FUN_10c7d570() + 0x2c))
                    return 0;
                DAT_10ff667c->Unknown28->FUN_10bfb8d0(8);
                return Result;
            }
        }
    }
    return 0;
}
