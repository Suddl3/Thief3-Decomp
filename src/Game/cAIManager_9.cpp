// Game/cAIManager_9.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class AAIController;

class AAIPawnController
{
    DECLARE_CLASS(AAIPawnController, AAIController, 0x0, AICore)
};

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int Count);

    int Unknown00;
    char Unknown04[4];
    UObject** Unknown08;
};

class cAIManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10c0bc50(UObject* Obj);

    char Unknown04[0x10];
    Class_10BFBD70 Unknown14;
};

// FUNCTION: 0x10C0BC50 ?FUN_10c0bc50@cAIManager@@UAEXPAVUObject@@@Z
void cAIManager::FUN_10c0bc50(UObject* Obj)
{
    if (Obj && Obj->IsA(AAIPawnController::StaticClass()))
    {
        Class_10BFBD70* List = &Unknown14;
        int Index = List->Unknown00;
        List->FUN_10bfbd70(Index + 1);
        List->Unknown08[Index] = Obj;
    }
}
