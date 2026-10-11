// Game/Class_10E6B4C8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"
#include "Game/Class_10AAB5C0.h"

class UClass;

class cUObjectLinkManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A, int B, UClass* C, int D);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A, int B, int C, Class_10BFBD70& Found);
    virtual void Virtual5(int A, int B, int C, int D, int E);
};

cUObjectLinkManager* GetUObjectLinkManager();

class Class_10E6B4C8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void FUN_10a676a0(int A, int B, Class_10BFBD70* Out);
    virtual void Virtual6(int A, int B);
};

// FUNCTION: 0x10A676A0 ?FUN_10a676a0@Class_10E6B4C8@@UAEXHHPAVClass_10BFBD70@@@Z
void Class_10E6B4C8::FUN_10a676a0(int A, int B, Class_10BFBD70* Out)
{
    int Count = Out->Count;
    Out->FUN_10bfbd70(Count + 1);
    Out->Data[Count] = B;
    Class_10BFBD70 Found;
    GetUObjectLinkManager()->Virtual4(B, 0, 0x21C3981, Found);
    if (Found.Count >= 1) {
        int ID = ((Class_10AAB5C0*)Found.Data[0])->FUN_10aab5c0();
        for (int i = 0; i < Out->Count; i++) {
            if (Out->Data[i] == ID)
                break;
        }
        Virtual6(A, ID);
        FUN_10a676a0(A, ID, Out);
    }
}
