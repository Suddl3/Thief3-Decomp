// Game/Unsorted_10B161B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

class Class_10E6CE28
{
public:
    int GetUnknown08();

    char Unknown00[8];
    int Unknown08;
    char Unknown0C[0x18];
    int Unknown24;
};

// Copied whole from include/Game/cUObjectLinkManager.h, with the arguments the link type's call shows.
class cUObjectLinkManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(Class_10E6CE28* A, int B, int C, cIntArray& Found, int E);
};

cUObjectLinkManager* GetUObjectLinkManager();

// FUNCTION: 0x10B161B0 ?FUN_10b161b0@@YGHPAVClass_10E6CE28@@D@Z
int __stdcall FUN_10b161b0(Class_10E6CE28* Arg1, char Arg2)
{
    cIntArray Found;
    if (!Arg1)
        return 0;
    GetUObjectLinkManager()->Virtual5(Arg1, 0, 0x84eb3f2, Found, 3);
    if (Found.Count > 0)
    {
        int Result = ((Class_10E6CE28*)Found.Data[0])->GetUnknown08();
        if (Result)
            return Result;
    }
    if (Arg2)
        return 0;
    return Arg1->Unknown24;
}
