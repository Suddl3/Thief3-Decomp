// Game/Unsorted_10B9C180.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10B9CAC0.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10BA9FD0.h"
#include "Game/Class_10E9092C.h"

class Class_10BC9D40;

// The actor the AI is currently following.
class Class_10BC9D40_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
};

// The objects the link manager finds.
class Class_10E6CE28
{
public:
    int GetUnknown08();

    char Unknown00[8];
    int Unknown08;
    char Unknown0C[0x18];
    int Unknown24;
};

// Copied whole from include/Game/cUObjectLinkManager.h, with the arguments the call shows.
class cUObjectLinkManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A, int B, int C, cIntArray& Found);
};

cUObjectLinkManager* GetUObjectLinkManager();

int FUN_10977fa0(int A);

// The AI that owns the pawn.
class Class_10B9C180_AI
{
public:
    char Unknown00[0x8];
    Class_10B9CAC0* Unknown08;
    char Unknown0C[4];
    Class_10C7D570* Unknown10;
};

// The class this function belongs to: it holds the AI at 0x118.
class Class_10B9C180
{
public:
    bool FUN_10b9c180();

    char Unknown00[0x118];
    Class_10B9C180_AI* Unknown118;
};

// FUNCTION: 0x10B9C180 ?FUN_10b9c180@Class_10B9C180@@QAE_NXZ
bool Class_10B9C180::FUN_10b9c180()
{
    Class_10B9C180_AI* AI = Unknown118;
    void* Link = AI->Unknown10->FUN_10c7d570();
    if (AI->Unknown08)
    {
        Class_10BC9D40_Item* Current = (Class_10BC9D40_Item*)AI->Unknown08->GetCurrent();
        if (Current)
        {
            if (Current->Virtual3() == 0x25 || Current->Virtual3() == 0x26)
                return false;
        }

        cIntArray Found;
        GetUObjectLinkManager()->Virtual4((int)Link, 0, 0x2c94e73, Found);
        if (Found.Count > 0)
        {
            int Hash = FUN_10977fa0(((Class_10E6CE28*)Found.Data[0])->GetUnknown08());
            ((Class_10E9092C*)((Class_10BA9FD0*)AI->Unknown10)->FUN_10ba9fd0())->FUN_10bb7500(0, 0);
            AI->Unknown10->Unknown64 = 1;
            AI->Unknown08->FUN_10b9dc40(Hash);
            return true;
        }
        {
            cIntArray Other;
            GetUObjectLinkManager()->Virtual4((int)Link, 0, 0x25d6c2b, Other);
            if (Other.Count > 0)
            {
                int Hash = FUN_10977fa0(((Class_10E6CE28*)Other.Data[0])->GetUnknown08());
                ((Class_10E9092C*)((Class_10BA9FD0*)AI->Unknown10)->FUN_10ba9fd0())->FUN_10bb7500(0, 0);
                AI->Unknown10->Unknown64 = 1;
                AI->Unknown08->FUN_10b9dc80(Hash);
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    return false;
}
