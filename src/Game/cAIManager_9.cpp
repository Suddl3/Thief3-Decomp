// Game/cAIManager_9.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "AICore/AICoreClasses.h"

class AAIController;

class cIntArray
{
public:
    void SetCount(int Count);

    int Unknown00;
    char m_CapacityBytes[4];
    UObject** Unknown08;
};

class cAIManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void AddPawnController(UObject* Obj);

    char m_Active[0x10];
    cIntArray m_Controllers;
};

// FUNCTION: 0x10C0BC50 ?AddPawnController@cAIManager@@UAEXPAVUObject@@@Z
void cAIManager::AddPawnController(UObject* Obj)
{
    if (Obj && Obj->IsA(AAIPawnController::StaticClass()))
    {
        cIntArray* List = &m_Controllers;
        int Index = List->Unknown00;
        List->SetCount(Index + 1);
        List->Unknown08[Index] = Obj;
    }
}
