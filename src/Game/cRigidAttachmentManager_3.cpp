// Game/cRigidAttachmentManager_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AA82D0.h"
#include "Game/Class_10B39870.h"
#include "Game/cIntArray.h"

class UClass;

class UObject;

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

class cRigidAttachmentManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual bool FUN_10a7a370(int p1);
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int Virtual7(int p1);
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Attach(int A, int B);
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17(int A, int B);
    virtual void Virtual18();
    virtual Class_10B39870* __stdcall GetAttachedObject();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void FUN_10a7a920(UObject* Obj, int Unknown04, int Unknown08);

    char Pad04[0xA0];
    int UnknownA4;
};

// FUNCTION: 0x10A7C7B0 ?GetAttachedObject@cRigidAttachmentManager@@UAGPAVClass_10B39870@@XZ
Class_10B39870* __stdcall cRigidAttachmentManager::GetAttachedObject()
{
    if (UnknownA4)
    {
        cIntArray Found;
        GetUObjectLinkManager()->Virtual4(UnknownA4, (int)this, 0x281B9D0, Found);
        if (Found.Count == 1)
            return (Class_10B39870*)((Class_10AA82D0*)Found.Data[0])->GetLinkedObject();
    }
    return 0;
}
