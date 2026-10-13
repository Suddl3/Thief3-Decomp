// Game/cAIManager_10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cIntArray.h"
#include "AICore/AICoreClasses.h"

class AAIController;

class cAIManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10c0bcb0(UObject* Object);

    char Unknown04[0x10];
    cIntArray Unknown14;
};

// FUNCTION: 0x10C0BCB0 ?FUN_10c0bcb0@cAIManager@@UAEXPAVUObject@@@Z
void cAIManager::FUN_10c0bcb0(UObject* Object)
{
    if (Object && Object->IsA(AAIPawnController::StaticClass()))
    {
        int Index = Unknown14.FindIndex((int)Object);
        if (Index != -1)
            Unknown14.RemoveAt(Index);
    }
}
