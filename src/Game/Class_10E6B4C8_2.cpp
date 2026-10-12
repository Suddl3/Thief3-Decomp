// Game/Class_10E6B4C8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10AAB5C0.h"
#include "Game/LoginManager.h"

class UClass;

class cUObjectLinkManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A, int B, UClass* C, int D);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A, int B, int C, cIntArray& Found);
    virtual void Virtual5(int A, int B, int C, int D, int E);
};

cUObjectLinkManager* GetUObjectLinkManager();

// FUNCTION: 0x10A676A0 ?FollowPlayerSetupLinks@LoginManager@@UAEXHHPAVcIntArray@@@Z
void LoginManager::FollowPlayerSetupLinks(int A, int B, cIntArray* Out)
{
    int Count = Out->Count;
    Out->SetCount(Count + 1);
    Out->Data[Count] = B;
    cIntArray Found;
    GetUObjectLinkManager()->Virtual4(B, 0, 0x21C3981, Found);
    if (Found.Count >= 1) {
        int ID = ((Class_10AAB5C0*)Found.Data[0])->GetUnknown08();
        for (int i = 0; i < Out->Count; i++) {
            if (Out->Data[i] == ID)
                break;
        }
        Virtual6(A, ID);
        FollowPlayerSetupLinks(A, ID, Out);
    }
}
